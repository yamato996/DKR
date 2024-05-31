#include "customer.h"

Customer::Customer() : id(0), lastName(""), firstName(""), creditCardNumber(0), bankAccountNumber(0) {}

Customer::Customer(int id, std::string lastName, std::string firstName, int creditCardNumber, int bankAccountNumber)
    : id(id), lastName(lastName), firstName(firstName), creditCardNumber(creditCardNumber), bankAccountNumber(bankAccountNumber) {}

void Customer::setId(int id) {
    this->id = id;
}

int Customer::getId() const {
    return id;
}

void Customer::setLastName(std::string lastName) {
    this->lastName = lastName;
}

std::string Customer::getLastName() const {
    return lastName;
}

void Customer::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

std::string Customer::getFirstName() const {
    return firstName;
}

void Customer::setCreditCardNumber(int creditCardNumber) {
    this->creditCardNumber = creditCardNumber;
}

int Customer::getCreditCardNumber() const {
    return creditCardNumber;
}

void Customer::setBankAccountNumber(int bankAccountNumber) {
    this->bankAccountNumber = bankAccountNumber;
}

int Customer::getBankAccountNumber() const {
    return bankAccountNumber;
}

std::string Customer::toString() const {
    return "ID: " + std::to_string(id) + ", Last Name: " + lastName + ", First Name: " + firstName +
        ", Credit Card Number: " + std::to_string(creditCardNumber) +
        ", Bank Account Number: " + std::to_string(bankAccountNumber);
}

std::ostream& operator<<(std::ostream& os, const Customer& customer) {
    os << customer.toString();
    return os;
}
