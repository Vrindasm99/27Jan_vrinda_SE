//Create a Project to demonstrate an ATM Banking Application which will help to get to 
//know the bank information..

#include<iostream>
#include <ctime>
using namespace std;

class bankac
{
	public:
	void welcome()
	{
		time_t now = time(0);        
	    char* dt = ctime(&now); 
		cout<<"\n\t==========================WELCOME TO ATM===========================\n";
		cout<<"\n\t\t---------------------------------------------------\n";
		cout<<"\n\t\t\tCurrent date :"<<dt;
		cout<<"\n\t\t---------------------------------------------------\n";	
		cout<<"\n\t====================================================================\n";
		cout<< "\n\tPress 1 and then Press enter to Access your Account via Pin Number\n";
		cout<<"\n\t\t\t\t\t OR \n\n\t\t\t Press 0 and Press Enter to Help\n";		
	}

};

class operations
{
	public:
	int amount;
	 double accountBalance;
     double initialBalance;
    
	void deposite()
	{
	    string name, address, location;
	    int accn;
	    cout<<"\n\t=================== ATM ACCOUNT DEPOSIT SYSTEM =====================\n";
	    cout<<"\n\tEnter Account Holder Name: ";
	    cin>>name;
	    cout<<"\n\tEnter Account Holder Address: ";
	    cin>>address;
	    cout<<"\n\tEnter Branch Location: ";
	    cin>>location;
	    cout<<"\n\tEnter Last Four Digits of Your Account Number: ";
	    cin>>accn;
	
	    initialBalance = 60000;
	    accountBalance = 20000;
	
	    cout<<"\n\tInitial Available Balance: Rs. "<<initialBalance;
	    cout<<"\n\tPresent Available Balance: Rs. "<<accountBalance;
	    cout<<"\n\tEnter Amount to Deposit: Rs. ";
	    cin>>amount;
	    
	    accountBalance+=amount;
	
	    cout<<"\n\tDeposit Successful!";
	    cout<<"\n\tYour New Available Balance is: Rs. \n"<<accountBalance;
	}

	void withdraw()
	{
	    cout<<"\n\t=================== ATM ACCOUNT WITHDRAWAL SYSTEM =====================\n";
	    cout<<"\n\tYour Current Available Balance is: Rs. "<<accountBalance;
	    cout<<"\n\tEnter Amount to Withdraw: Rs. ";
	    cin>>amount;
	
	    if(amount>accountBalance) 
		{
	        cout<<"\n\tWithdrawal Failed: Insufficient Funds!";
	    } 
		else 
		{
	        accountBalance -= amount;
	        cout<<"\n\tWithdrawal Successful!";
	        cout<<"\n\tRemaining Balance After Withdrawal is: Rs. " << accountBalance;
	    }
	    cout<<"\n";
	}
};
class methods : public operations
{
	public:
	void help()
	{
		cout<<"\n\t======================== ATM ACCOUNT ACCESSS=========================\n";
        cout << "\n\tYou must have the correct pin number to access this account.\n\t See your bank representative for assistance during bank opening hours\n\t\t";
		cout<<"\n\t\t Thank You..";	
	}
	void showmenu() 
	{
    int a;
    do 
	{
        cout<<"\n\t======================== ATM MENU ========================\n";
        cout<<"\tEnter [1] TO DEPOSIT CASH\n";
        cout<<"\tEnter [2] TO WITHDRAW CASH\n";
        cout<<"\tEnter [3] TO EXIT ATM\n";
        cout<<"\tPlease Enter a Selection and Press RETURN KEY: ";
        cin>>a;
		switch (a) 
		{
            case 1:
                deposite();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                cout<<"\n\tThank you for using ATM. Exiting...\n";
                break;
            default:
                cout<<"\n\tInvalid option. Please try again.\n";
        }
    } while (a != 3);
} 
	
	void failedattempt()
	{
		cout<<"\n\t======================== ATM ACCOUNT ACCESSS=========================\n";
	    cout << "\n\t You had made your attempt which failed! No More attempts allowed!!\n\t SORRY!!!\n\t\t";
		cout<<"\n\t\t Thank You..";	
	}
};

class entry: public methods, public operations
{
	public:	
	void checkPin() 
	 {
        int choice,enterpin;
        cout<<"\n\t Enter your choice :- ";
        cin>>choice;
        
        switch (choice) 
		{
          case 1:
        	cout<<"\n\t======================== ATM ACCOUNT ACCESSS=========================\n";
			cout <<"\n\tEnter your ATM PIN (One Attempt Only): \n\t\t";
        	cin >> enterpin;
        	if (enterpin==1234) 
			{
			 	showmenu();
			}
			else 
			{
				failedattempt();	            
		    }
			break;
         case 0: 
			help();
			break;
	     default: 
			cout << "Invalid option. Try again.\n";
   	    } 
    }
	
};

main()
{
	bankac ba;
	ba.welcome();
	entry e;
	e.checkPin();
}
