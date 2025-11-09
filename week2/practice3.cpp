#include <iostream>
#include <cmath>  // for sqrt() function
using namespace std;

int main() {
    double a, b, hypotenuse;

    cout << "Enter the first side: ";
    cin >> a;
    cout << "Enter the second side: ";
    cin >> b;

    hypotenuse = sqrt((a * a) + (b * b));

    cout << "The hypotenuse is: " << hypotenuse << endl;

    return 0;
}
