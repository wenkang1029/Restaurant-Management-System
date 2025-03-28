#include <iostream>
#pragma once
using namespace std;

class Customer{
  private:
    string customerID;
    string customerName;
    string customerAddress;
    string customerPhone;
    string customerPassword;
  public:
    Customer();
    Customer(string customerID, string customerName, string customerAddress, string customerPhone, string customerPassword);
    string getCustomerID();
    string getCustomerName();
    string getCustomerAddress();
    string getCustomerPhone();
    string getCustomerPassword();
    void setCustomerID(string customerID);
    void setCustomerName(string customerName);
    void setCustomerAddress(string customerAddress);
    void setCustomerPhone(string customerPhone);
    void setCustomerPassword(string customerPassword);
    void printCustomer();
};