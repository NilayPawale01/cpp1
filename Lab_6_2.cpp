//2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
//Add  constr. (2 constrs : first to accept all details )
#include <iostream>
using namespace std;

class BankAccount{
	private: int acctno;
			 string name;
			 double balance;
	public: BankAccount(){
		cout<<"----------Default-------------"<<endl;
		cout<<"Account No"<<endl;
		cin>>acctno;
		cout<<"Account No "<<acctno<<endl;
	}
};

int main()
{
	BankAccount a1;
	
}
