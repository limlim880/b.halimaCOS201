#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string fullName, courseName, locationName;
    int isPau, days, regFee, lodgingPerDay;

    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Is PAU student? (1=yes, 0=no): ";
    cin >> isPau;
    cout << "Enter course name: ";
    cin >> ws;
    getline(cin, courseName);
    cout << "Enter location name: ";
    getline(cin, locationName);
    cout << "Enter number of days: ";
    cin >> days;
    cout << "Enter registration fee: ";
    cin >> regFee;
    cout << "Enter lodging cost per day: ";
    cin >> lodgingPerDay;

    int lodgingCost = lodgingPerDay * days;
    int lodgingDiscount = 0;
    int regDiscount = 0;
    int promo = 0;

    if (isPau == 1 && (locationName == "A" || locationName == "B" || locationName == "Camp House A" || locationName == "Camp House B")) {
        lodgingDiscount = lodgingCost * 5 / 100;
    }

    if (days > 5 || regFee > 12000) {
        regDiscount = regFee * 3 / 100;
    }

    srand((unsigned)time(0));
    int randomNum = (rand() % 100) + 1;
    if (randomNum == 7 || randomNum == 77) {
        promo = 500;
    }

    int total = (regFee - regDiscount) + (lodgingCost - lodgingDiscount) - promo;

    cout << "\n--- SUMMARY ---\n";
    cout << "Name: " << fullName << "\n";
    cout << "PAU student: " << (isPau == 1 ? "Yes" : "No") << "\n";
    cout << "Course: " << courseName << "\n";
    cout << "Location: " << locationName << "\n";
    cout << "Days: " << days << "\n";
    cout << "Registration Fee: " << regFee << "\n";
    cout << "Registration Discount: " << regDiscount << "\n";
    cout << "Lodging Cost: " << lodgingCost << "\n";
    cout << "Lodging Discount: " << lodgingDiscount << "\n";
    cout << "Random Draw: " << randomNum << "\n";
    cout << "Promo: " << promo << "\n";
    cout << "TOTAL: " << total << "\n";

    return 0;
}
