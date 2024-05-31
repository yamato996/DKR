#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>
#include <vector>

class Customer {
private:
    int id;
    std::string lastName;
    std::string firstName;
    int creditCardNumber;
    int bankAccountNumber;

public:
    Customer();
    Customer(int id, std::string lastName, std::string firstName, int creditCardNumber, int bankAccountNumber);

    void setId(int id);
    int getId() const;
    void setLastName(std::string lastName);
    std::string getLastName() const;
    void setFirstName(std::string firstName);
    std::string getFirstName() const;
    void setCreditCardNumber(int creditCardNumber);
    int getCreditCardNumber() const;
    void setBankAccountNumber(int bankAccountNumber);
    int getBankAccountNumber() const;

    std::string toString() const;

    friend std::ostream& operator<<(std::ostream& os, const Customer& customer);
};

#endif // CUSTOMER_H
