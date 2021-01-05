#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){
	double money, percent, pay;
	cout << "Enter initial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> percent;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	double inter, total, NewBalance;
	double PrevBalance = money;
	double payment = pay;

	for (int i = 0; PrevBalance > 0; i++ ){

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << PrevBalance;
		inter = PrevBalance*(percent/100);
		cout << setw(13) << left << inter;
		total = PrevBalance + inter;
		cout << setw(13) << left << total;
		if(total < payment) payment = total;
		cout << setw(13) << left << payment;
		NewBalance = total - payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		PrevBalance = NewBalance;	

	}
	
	return 0;
}
