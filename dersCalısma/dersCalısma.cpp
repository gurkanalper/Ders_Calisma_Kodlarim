#include<iostream>

using namespace std;

class ATM {
public:

	void withdrawl(int *money) {
		int dep;
		cout << "Your balance is:" << *money << endl;
		cout << "Enter the amouth that yo want to withdrawl :" << endl;
		cin >> dep;
		*money -= dep;
		cout << "New balance is :" << *money;		
	}
	void deposite(int *money) {
		int dep;
		cout << "Your balance is:" << *money << endl;
		cout << "Enter the amouth that yo want to deposit :" << endl;
		cin >> dep;
		*money += dep;
		cout << "New balance is :" << *money;
	}
	void checkBalance(int money) {
		printf("Your balance is %d", money);
	}
	int cancel(int *x) {
		*x += 1;
		cout << endl;
		return *x;
	}

private:
	int balance = 1000;

};

int main() {
	ATM atm;

	int x = 0, y, a = 1000;
	cout << "YOUR BALANCE ıS 1000" << endl;
	cout << "****TRANSACTION****" << endl;
	cout << "1. Withdrawl" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Check Balance" << endl;
	cout << "4. Cancel" << endl;
	while (x == 0) {
		cout << "Enter Your Transaction" << endl;
		cin >> y;


		if (y == 1) {
			atm.withdrawl(&a);
		}
		else if (y == 2) {
			atm.deposite(&a);
		}
		else if (y == 3) {
			atm.checkBalance(a);
		}
		else if (y == 4) {
			atm.cancel(&x);
			cout << "Have a nice day" << endl;
		}

	
		else {
		cout << "Enter one of these numbers";
		atm.cancel(&x);
		}
	}
	 

	return 0;


}

