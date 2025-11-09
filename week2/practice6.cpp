#include <iostream>
using namespace std;

int main() {
    double balance, interestRate;

    cout << "Compound interest calculation\n";
    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter annual interest rate (%): ";
    cin >> interestRate;

    // Convert rate to decimal
    double rate = interestRate / 100;

    // After 1 year
    balance = balance + (balance * rate);

    // After 2 years (interest on new balance)
    balance = balance + (balance * rate);

    cout << "Balance after two years = " << balance << endl;

    return 0;
}
