#include <iostream>
#include <cmath>

using namespace std;

bool isEven(int number);
bool isPositive(int number);
int digitSum(int number);
int digitCount(int number);
bool isPrime(int number);

int main() {
    setlocale(LC_ALL, "Russian");

    int number;
    int choice;

    do {
        cout << "Enter number: ";
        cin >> number;
        cout << "\n";

        cout << "Even: " << (isEven(number) ? "yes" : "no") << "\n";
        cout << "Positive: " << (isPositive(number) ? "yes" : "no") << "\n";
        cout << "Digit sum: " << digitSum(number) << "\n";
        cout << "Digit count: " << digitCount(number) << "\n";
        cout << "Prime: " << (isPrime(number) ? "yes" : "no") << "\n\n";

        cout << "Continue? (1 - yes, 0 - no): ";
        cin >> choice;
        cout << "\n";

    } while (choice != 0);

    return 0;
}

bool isEven(int number) {
    return number % 2 == 0;
}

bool isPositive(int number) {
    return number > 0;
}

int digitSum(int number) {
    int sum = 0;
    number = abs(number);
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int digitCount(int number) {
    if (number == 0) return 1;
    int count = 0;
    number = abs(number);
    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
