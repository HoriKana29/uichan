#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	cout << "Enter initial loan: ";
	double loan,intercent,payment,interest;
	int eyear = 1;
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> intercent;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
		while(loan>0){
	    cout << setw(13) << left << eyear; 
	    cout << setw(13) << left << loan; 
	    interest = (intercent/100)*loan;
	    cout << setw(13) << left << interest;
	    loan+=interest;
	    cout << setw(13) << left << loan;
	    if(loan<payment) payment = loan;
	    cout << setw(13) << left << payment;
	    loan-=payment;
	    cout << setw(13) << left << loan;
	    cout << "\n";
	    eyear+=1;
	}
	return 0;
}