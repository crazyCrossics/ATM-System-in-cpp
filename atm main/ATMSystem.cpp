
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main ()
{
    int deposit=0;
    int amount=5000;
    int withdraw= 0;
    int choice=0;
    int pin=0;
    char keypin;
    keypin = 1994;
    char comppin;
    
    cout << "Enter your pin: ";
    cin >> pin;
    
    comppin= (pin, keypin);
    
    if (pin==1994)
    {
    cout << "\nProceeding !!!\n";
        
    cout << "\n\t************************************";
    cout << "\n\t* Welcome to CrazyCrossics ATM *";
    cout << "\n\t*     1. Check Balance             *";
    cout << "\n\t*     2. Withdraw                  *";
    cout << "\n\t*     3. Deposit                   *";
    cout << "\n\t*     4. Exit                      *";
    cout << "\n\t*                                  *";
    cout << "\n\t************************************";
    cout << "\n\n";
        
        int balance=1;
        int withdraw=2;
        int deposit=3;
        int Exit=4;
        
        s:
        cout << "\nEnter Number: ";
        cin >> choice;
        
        if (choice==1)
        {
            cout <<"\nYour current balance is: \n" << amount;
            goto s;
        }
        
        else if (choice=2)
        {
            cout << "\nEnter the amount you want to withdraw: ";
            cin >> withdrow;
            
            if (withdraw<amount)
            {
                cout << "\nYou don't have sufficient balance.\n";
                goto s;
            }
            
            else
            {
            amount=amount-withdraw;    
            cout << "\nYour current balance is: \n" << amount;
            
            goto s;
            }
        }
        
        else if (choice==3)
        {
            cout << "\nEnter the amount you want to deposit: ";
            cin >> deposit;
            
            cout << "\nYour current balance is: \n" << amount;
            
            goto s;
        }
        
        else if (choice==4)
        {
            cout << "\nTHANK YOU!";
        }
        
    }
    
}

