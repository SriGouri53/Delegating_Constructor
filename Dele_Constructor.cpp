#include <iostream>
#include <string>
using namespace std;

class BankCustomer {
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;

    public:
        
        BankCustomer() {
            this->name = " ";
            this->adharNumber = " ";
            this->panNumber = " ";
            this->emailId = " ";
            this->phoneNumber = " ";
        }

        BankCustomer(string nameArg, string adharNumberArg, string panNumberArg) {
            this->name = nameArg;
            this->adharNumber = adharNumberArg;
            this->panNumber = panNumberArg;
            this->emailId = " ";
            this->phoneNumber = " ";
        }

       
        BankCustomer(string nameArg, string adharNumberArg, string panNumberArg, string emailArg, string phoneArg)
            : BankCustomer(nameArg, adharNumberArg, panNumberArg) { 
            this->emailId = emailArg;
            this->phoneNumber = phoneArg;
        }

        void printCustomerInfo() {
            cout << "Name: " << name << endl;
            cout << "Adhar Number: " << adharNumber << endl;
            cout << "PAN Number: " << panNumber << endl;
            cout << "Email ID: " << emailId << endl;
            cout << "Phone Number: " << phoneNumber << endl;
        }
};

int main() {
    // Creating a customer object with all details
    BankCustomer customer1("gummy", "1234-1213-1011", "HGHJ344EM", "gummy.doe@example.com", "97563532222");
    customer1.printCustomerInfo();

    return 0;
}
