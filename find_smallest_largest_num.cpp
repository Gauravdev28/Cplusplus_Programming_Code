#include <iostream>
using namespace std;

int main() {
    int n, num, largest, smallest;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter first number: ";
    cin >> num;

    largest = smallest = num;

    for (int i = 1; i < n; i++) {
        cout << "Enter next number: ";
        cin >> num;

        if (num > largest)
            largest = num;

        if (num < smallest)
            smallest = num;
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    return 0;
}
