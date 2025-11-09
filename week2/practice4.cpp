#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, taxRate = 0.06, totalTax, totalAmount;

    cout << "Enter the total purchase amount: ";
    cin >> purchaseAmount;

    totalTax = purchaseAmount * taxRate;
    totalAmount = purchaseAmount + totalTax;

    cout << "Sales tax (6%): " << totalTax << endl;
    cout << "Total amount to pay: " << totalAmount << endl;

    return 0;
}
