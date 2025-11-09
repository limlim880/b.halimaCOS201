#include <iostream>
using namespace std;

int main() {
    double balance, interestRate, interest, newBalance;

    cout << "Interest calculation program\n";
    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter annual interest rate (%): ";
    cin >> interestRate;

    interest = balance * (interestRate / 100);
    newBalance = balance + interest;

    cout << "Balance after one year = " << newBalance << endl;

    return 0;
}
