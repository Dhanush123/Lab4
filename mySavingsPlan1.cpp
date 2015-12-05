// Lab 4
// Programmer: Dhanush Patel
// Editor(s) used: Xcode 7.0 beta
// Compiler(s) used: Xcode 7.0 beta

#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
    int moneyBorrowed = 100000;
    double annualInterestRate = 0.025;
    double monthlyInterestRate = annualInterestRate/12;
    double yearsForPayback = 30;
    double monthsforPayback = yearsForPayback * 12;
    double monthlyPayment = (moneyBorrowed * pow(1+(monthlyInterestRate),monthsforPayback) * monthlyInterestRate)/((pow(1+monthlyInterestRate,monthsforPayback))-1);
    
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program calculates a mortgage given a predetermined amount of money borrowed." << endl;
    cout << endl;
    
    //Show amount borrowed, annual interest rate, payback period, and monthly payment
    cout << "Amount borrowed = $" << moneyBorrowed << endl;
    cout << "Annual interest rate = " << annualInterestRate * 100 << "%" << endl;
    cout << "Payback period = " << yearsForPayback << " Years" << endl;
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(2);
    cout << "Monthly payment = $" << monthlyPayment << endl;
}
