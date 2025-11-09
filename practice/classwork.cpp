#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;

    int chinese_year = year % 12;

    switch (chinese_year) {
        case 0 : cout << "Rat"; break;
        case 1 : cout << "Ox"; break;
        case 2 : cout << "Tiger"; break;
        case 3 : cout << "rabbit"; break;
        case 4 : cout << "dragon"; break;
        case 5 : cout << "snake"; break;
        case 6 : cout << "horse"; break;
        case 7 : cout << "sheep"; break;
        case 8 : cout << "Monkey"; break;
        case 9 : cout << "rooster"; break;
        case 10 : cout << "dog"; break;
        case 11 : cout << "pig"; break;
    }
    return 0;
}
