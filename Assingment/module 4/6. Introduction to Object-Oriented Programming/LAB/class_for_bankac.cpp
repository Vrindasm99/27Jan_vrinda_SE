//Class for Bank Account o
// Create a class BankAccount with data members like balance and member functions like deposit and withdraw. 
//Implement encapsulation by keeping the data members private.


#include<iostream>
using namespace std;
class bankac
{
	public:
	int a;
	string acname, actype;
	double acn;
	void acopening()
	{
		cout<<"Enter Your A/c Number :";
		cin>>acn;
		cout<<"Enter Holder Name :";
		cin>>acname;
		cout<<"Enter A/c Type (SAVING/CURRENT): ";
		cin>>actype;
	}
	void acdata()
	{
	    cout << "\n\n\t--- Account Details ---\n";
	    cout << "\tAccount Number: " << acn << "\n";
	    cout << "\tAccount Holder Name: " << acname << "\n";
	    cout << "\tAccount Type: " << actype << "\n";
	
	    cout << "\n\n\tMinimum amount to be deposited is 2000..\n";
	    cout << "Enter amount to deposit: ";
	    cin >>a;
	
	    if (a >= 2000)
		{
	        cout << "AMOUNT SUCCESSFULLY ADDED...!\n";
	    } else {
	        cout << "MINIMUM AMOUNT MUST BE 2000..! Try again.\n";
	        a = 0;
	    }
	}

};
class withdrawal: public bankac
{
	public:
	void withdraw() 
	 {
        char choice;
        cout << "Do you want to withdraw? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            float amount;
            cout << "Enter amount to withdraw: ?";
            cin >> amount;
            if (amount <= (a-500)) 
			{
                a-= amount;
                cout<<"Withdrawal successful."<<amount<<" withdrawn.\n";
            } else {
                cout<<"Insufficient balance. You must maintain a minimum balance of 500.\n";
            }
        } 
		else 
		{
            cout << "No withdrawal performed.\n";
        }
	}
};
class statement:public withdrawal
{
	public:
	 void printStatement()
	 {
        cout << "\n---- Account Statement ----\n";
        cout << "Account Holder: " << acname << "\n";
        cout << "Account Number: " << acn << "\n";
        cout << "Account Type: " << actype << "\n";
        cout << "Available Balance: " <<a<< "\n";
        cout << "---------------------------\n";
    }
    
	void showd()
	{
		int choice;
	do
	{
            cout << "\n---- Menu ----\n";
            cout << "1. Open Account\n";
            cout << "2. Withdraw\n";
            cout << "3. Show Statement\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
			{
                case 1:
                    acopening();
                    acdata();
                    break;
                case 2:
                    withdraw();
                    break;
                case 3:
                    printStatement();
                    break;
                case 4:
                    cout << "EXITING.... \n \t Thank you!\n";
                    break;
                default:
                    cout << "Invalid choice. Try again.\n";
            }

       } while (choice != 4);
   }
};

main()
{
	statement st;
	st.showd();
	
}

