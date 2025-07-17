#include <iostream>
using namespace std;

class Account
{
private:
    int account_num;
    string pin;

public:
    int balance = 0;

    void validateAccount(int ACnum, string passcode)
    {
        account_num = ACnum;
        pin = passcode; 
        if (passcode == "ABC@123")
        {
            cout << "Your account is Valid, Thank You!";
        }
    }

    void withdrawAmount(int account_id, int money, string secret)
    {
        if (secret == "ABC@123")
        {
            // balance = balance - money;
            balance -= money;
            cout << "Amount Rs." << money << " has been withdrawn" << endl;
        }
        else
        {
            cout << "Invalid Pin! Try Again." << endl;
        }
    }

    void depositAmount(int acc, int cash)
    {
        balance += cash;
        cout << "Amount Rs." << cash << " has been deposited" << endl;
    }

    void checkBalance(int ac, string ac_pin)
    {
        if (ac_pin == "ABC@123")
        {
            cout << "Account Balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid Pin! Try Again." << endl;
        }
    }
};

int main()
{
    Account A1;
    string password;
    int acno, menu, new_amount, attempt = 0;
    cout << "Enter your A/C Number: " << endl;
    cin >> acno;
    cout << "Enter your Pin: " << endl;
    cin >> password;
    do
    {
        cout << "Select your Banking Service: " << endl;
        cout << "1. Check Account: " << endl;
        cout << "2. Deposit: " << endl;
        cout << "3. Withdraw: " << endl;
        cout << "4. Check Balance: " << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "Enter the account number and password to verify: " << endl;
            cin >> acno >> password;
            A1.validateAccount(acno, password);
            break;
        case 2:
            cout << "Enter the amount to be deposited: ";
            cin >> new_amount;
            A1.depositAmount(acno, new_amount);
            A1.checkBalance(acno, password); // Optional
            break;
        case 3:
            cout << "Enter the amount to be withdrawn: ";
            cin >> new_amount;
            A1.withdrawAmount(acno, new_amount, password);
            A1.checkBalance(acno, password); // Optional
            break;
        case 4:
            A1.checkBalance(acno, password);
            break;
        default:
            cout << "Invalid Service Selected, Please try again later";
            break;
        }
        attempt++;
    } while (attempt < 4);
}