#include <iostream>
using namespace std;

int main() {
    double radius, area;

    cout << "Enter radius: ";
    cin >> radius;

    area =  radius * radius * 3.14159;
    cout << " Area of the circle = " << area;

    return 0;
}
