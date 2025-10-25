#include <iostream>

using namespace std;

int main ()
{
	int no, amount, choise, balance = 0.0;
	
	do {
	
	cout <<"1. balance check  ";
	cout <<"2. deposite   ";
	cout <<"3. withdraw" <<endl;
	cin >> choise;
	
	switch (choise){
	case 1:
		cout <<"your current balance is  " <<balance<<endl;
	break;

	case 2:
		cout << "enter the amount you deposite  ";
		cin >> amount;
		if (amount > 0){
			balance += amount;
			
			cout <<" your current balance is   " <<balance <<endl; }
 			else {
				cout <<" invalid amount"<< endl; }
			break;
			case 3:
			cout <<" enter amount to withdraw  ";
			cin >> amount;
			
			if (amount > 0 && amount <= balance){
				balance -= amount;
				cout <<" your current balance is  "<<balance <<endl;
			}
			else if (amount > balance){
				cout << "insufficient  balance"<< endl;
			}
			else {
				cout <<"invalid amount";}
				break;
			case 4:
			cout << "thanks for choosing us";
			
			default:
			cout <<"try again "<<endl;
	}
			} while (choise != 4);
			
			return 0;
	
		




add mini banking system code!
