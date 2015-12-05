// Lab 4
// Programmer: Dhanush Patel
// Editor(s) used: Xcode 7.0 beta
// Compiler(s) used: Xcode 7.0 beta

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int age1 = 19;
    int age2 = 21;
    int age3 = 30;
    
    double averageAge = (double)(age1 + age2 + age3)/3;
    
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program calculates the average of 3 predetermined ages." << endl;
    cout << endl;
 
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    //show the average age
    cout << "The average of three ages is " << averageAge << "." << endl;
}
