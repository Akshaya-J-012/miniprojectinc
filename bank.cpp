#include<iostream>
using namespace std;
class Bankbal{
	public:
		int balance=5000;
		void deposite(){
			int amt;
			cout<<"Enter Amount: ";
			cin>>amt;
			balance+=amt;
			cout<<"After Deposite: "<<balance<<"\n";
		}
		void withdraw(){
			int amt;
			cout<<"Enter Amount: ";
			cin>>amt;
			if(balance>amt){
				balance-=amt;
				cout<<"Amount Withdraw: "<<balance<<"\n";
			}
			else{
				cout<<"Insufficient balance";
			}
		}
		void showbalance(){
			cout<<"Current balance: "<<balance<<"\n";
		}
};
int main(){
	Bankbal b;
	int choice;
	do{
	
	cout<<"1.Deposite"<<"\n";
	cout<<"2.Withdraw"<<"\n";
	cout<<"3.Show Balance"<<"\n";
	cout<<"4.Exit"<<"\n";
	cout<<"Enter choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			b.deposite();
			break;	
		case 2:
			b.withdraw();
			break;
		case 3:
			b.showbalance();
			break;
		case 4:
			cout<<"Thank You!";
			break;
		deafult:
			cout<<"INVALID CHOICE"<<"\n";
	}
}	while(choice!=4);
		return 0;
}	
