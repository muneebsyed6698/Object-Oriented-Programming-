#include <iostream>

using namespace std;

class BankAccount{
int accountId;
double balance;
int * transactionHistory;
int numTransactions;
public:
	BankAccount(int id, double balance , int * history, int size){
		accountId = id;
		this -> balance = balance;
		transactionHistory = new int(size);
		for (int i = 0 ; i < size ;i ++ ){
			transactionHistory[i]  = history[i];
		}
		numTransactions = size;
	}
	
	BankAccount(BankAccount &tocopy){
		this-> accountId = tocopy.accountId;
		this-> balance = tocopy.balance;
		this-> numTransactions = tocopy.numTransactions;
		transactionHistory = new int(numTransactions);
		for (int i = 0 ; i < numTransactions ;i++ ){
			this->transactionHistory[i]  = tocopy.transactionHistory[i];
		}
	}
	
	void display(){
		cout << "Account ID: " << accountId << endl;
		cout << "Balance: " << balance << endl;
		cout << "Num of Transactions : " << numTransactions << endl;
		cout << "Transaction History : " << endl;
		for (int i = 0 ; i < numTransactions ;i ++ ){
			cout << i + 1 << " --- " << transactionHistory[i] << endl;
		}
	}
	void updateTransactionHistory(int * history, int size){
		delete[] transactionHistory;
		transactionHistory = new int(size);
		for (int i = 0 ; i < size ;i ++ ){
			transactionHistory[i]  = history[i];
		}
		numTransactions = size;
	}
};

int main(){
	int tr1[5] = {1000,550,2000,8880,330};
	
	int tr2[9] = {1000,550,2000,8880,330,4000,770,900,5000};
	BankAccount muneeb(230038,555555.f,tr1,5);

	BankAccount yesa (muneeb);

	yesa.updateTransactionHistory(tr2,9);
	
	
	yesa.display();
	muneeb.display();
	
}