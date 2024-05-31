#include <iostream>
#include <vector>
#include <algorithm>
#include "customer.h"
#include "logger.h"
#include "encryption.h"

void printCustomers(const std::vector<Customer>& customers) {
    for (const auto& customer : customers) {
        std::cout << customer << std::endl;
    }
}

bool compareByLastName(const Customer& a, const Customer& b) {
    return a.getLastName() < b.getLastName();
}

int main() {
    std::vector<Customer> customers = {
        Customer(1, "Smith", "John", 1234, 54321),
        Customer(2, "Doe", "Jane", 2345, 65432),
        Customer(3, "Brown", "Charlie", 3456, 76543)
    };

    Logger logger("log.txt");

    // a) Список покупців в алфавітному порядку
    std::sort(customers.begin(), customers.end(), compareByLastName);
    std::cout << "Customers sorted by last name:" << std::endl;
    printCustomers(customers);

    logger.log("Customers sorted by last name printed.");

    // b) Список покупців, у яких номер кредитної картки знаходиться в заданому інтервалі
    int minCardNumber = 2000;
    int maxCardNumber = 3500;

    std::cout << "\nCustomers with credit card number between " << minCardNumber << " and " << maxCardNumber << ":" << std::endl;
    for (const auto& customer : customers) {
        if (customer.getCreditCardNumber() >= minCardNumber && customer.getCreditCardNumber() <= maxCardNumber) {
            std::cout << customer << std::endl;
        }
    }

    logger.log("Filtered customers by credit card number range printed.");

    // Шифрування даних і запис у файл
    std::ofstream outFile("customers_encrypted.txt");
    for (const auto& customer : customers) {
        std::string encrypted = Encryption::encrypt(customer.toString());
        outFile << encrypted << std::endl;
    }
    outFile.close();

    logger.log("Customers encrypted and written to file.");

    return 0;
}
