
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;


class atm										
{
private:	
    string Name;
	string Mobile_No;
	int PIN;
	long int Account_No;
	double Balance;							



public:											

	void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
	{
		Account_No = account_No_a;
		Name = name_a;
		PIN = PIN_a;
		Balance = balance_a;
		Mobile_No = mobile_No_a;
	}

	long int getAccountNo()
	{
		return Account_No;
	}

	string getName()
	{
		return Name;
	}

	int getPIN()
	{
		return PIN;
	}

	double getBalance()
	{
		return Balance;
	}

	string getMobileNo()
	{
		return Mobile_No;
	}

	void setMobile(string mob_prev, string mob_new)
	{
		if (mob_prev == Mobile_No)						
		{
			Mobile_No = mob_new;						
			cout << endl << "Sucessfully Updated Mobile no.";
							 																			
		}

		else							
		{
			cout << endl << "Incorrect !!! Old Mobile no";
						  
		}
	}

	void cashWithDraw(int amount_a)
	{
		if (amount_a > 0 && amount_a < Balance)		
		{
			Balance -= amount_a;		
			cout << endl << "Please Collect Your Cash";
			cout << endl << "Available Balance :" << Balance;
						
		}

		else
		{
			cout << endl << "Invalid Input or Insufficient Balance";
						
		}
	}

};

int main()
{
	int choice = 0, enterPIN;		
	long int enterAccountNo;

	

	
	atm user1;
	atm user2,user3,user4;
	
	user1.setData(12121212, "SACHIN VERMA", 1234, 100000, "9503707070");
	user2.setData(13131313,"SHASHANK SRIVASTAVA",1234,500,"9503717171");
	user3.setData(14141414,"ABHISHEK GUPTA",1234,10000,"9503727272");
	user4.setData(15151515,"AMIT KUMAR",1234,40000,"9503737373");




	do
	{
		

		cout << endl << "****Welcome to ATM*****" << endl;
		cout << endl << "Enter Your Account No ";	
		cin >> enterAccountNo;

		cout << endl << "Enter PIN ";				 
		cin >> enterPIN;



		if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
		{
			do
			{
				int amount = 0;
				string oldMobileNo, newMobileNo;

				

				cout << endl << "**** Welcome to ATM *****" << endl;
				cout << endl << "Select Options ";
				cout << endl << "1. Check Balance";
				cout << endl << "2. Cash withdraw";
				cout << endl << "3. Users Details";
				cout << endl << "4. Update Mobile no.";
				cout << endl << "5. Exit" << endl;
				cin >> choice;						

				switch (choice)						
				{
				case 1:							
					cout << endl << "Your Bank balance is :" << user1.getBalance();
				
					break;


				case 2:								
					cout << endl << "Enter the amount :";
					cin >> amount;
					user1.cashWithDraw(amount);			
														
					break;


				case 3:								
					cout << endl << "*** User Details are :- ";
					cout << endl << "  Account no :" << user1.getAccountNo();
					cout << endl << "  Name      :" << user1.getName();
					cout << endl << "  Balance   :" << user1.getBalance();
					cout << endl << "  Mobile No. :" << user1.getMobileNo();

					_getch();
					break;


				case 4:								 
					cout << endl << "Enter Old Mobile No. ";
					cin >> oldMobileNo;							

					cout << endl << "Enter New Mobile No. ";
					cin >> newMobileNo;							

					user1.setMobile(oldMobileNo, newMobileNo);	
					break;


				case 5:
					exit(0);						

				default:							
					cout << endl << "Enter Valid Data !!!";
				}

			} while (1);													
		}

		else
		{
			cout << endl << "User Details are Invalid !!! ";
			
		}
	} while (1);																

	return 0;
}