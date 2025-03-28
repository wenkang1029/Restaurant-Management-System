#include <iostream>
#include <iomanip>
#include <vector>
#include "../model/Customer.h"

using namespace std;

Customer::Customer() {
    this->customerID = "";
    this->customerName = "";
    this->customerAddress = "";
    this->customerPhone = "";
}

Customer::Customer(string customerID, string customerName, string customerAddress, string customerPhone, string customerPassword) {
    this->customerID = customerID;
    this->customerName = customerName;
    this->customerAddress = customerAddress;
    this->customerPhone = customerPhone;
    this->customerPassword = customerPassword;
}

string Customer::getCustomerID() {
    return this->customerID;
}

string Customer::getCustomerName() {
    return this->customerName;
}

string Customer::getCustomerAddress() {
    return this->customerAddress;
} 

string Customer::getCustomerPhone() {
    return this->customerPhone;
}

string Customer::getCustomerPassword() {
    return this->customerPassword;
}

void Customer::setCustomerID(string customerID) {
    this->customerID = customerID;
}

void Customer::setCustomerName(string customerName) {
    this->customerName = customerName;
}

void Customer::setCustomerAddress(string customerAddress) {
    this->customerAddress = customerAddress;
}

void Customer::setCustomerPhone(string customerPhone) {
    this->customerPhone = customerPhone;
}

void Customer::setCustomerPassword(string CustomerPassword) {
    this->customerPassword = customerPassword;
}

void Customer::printCustomer() {
    cout << "Customer ID:   " << this->customerID << endl;
    cout << "Customer Name: " << this->customerName << endl;
    cout << "Address:       " << this->customerAddress << endl;
    cout << "Phone Number:  " << this->customerPhone << endl;
}





