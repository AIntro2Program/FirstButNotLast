#include <iomanip>
#include <iostream>

using namespace std;
int main() {
    // Problem 1
    int age;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Your name is " << name << " and your age is " << age << endl;
    // Problem 2
    for (int i = 1; i <= 5; i++) {
        cout << setw(5) << i << endl;
        //if (i == 5) {
        //   cout << endl;
        //}
    }
    // Problem 3
    int v1;
    int v2;
    cout << "Enter value 1: ", cin >> v1, cout << "Enter value 2: ", cin >> v2;
    const int v3 = v1;
    v1 = v2;
    v2 = v3;
    cout << "Your first value is " << v1 << " and your second value is " << v2 << endl;
    // Problem 4
    int number;
    cout << "Enter your n number: ",cin >> number;
    cout << setw(12.5) << "Number" << setw(10) << "Square" << endl;
    int i = 1;
    while (i <= number) {
        cout << setw(10) << i << setw(10) << i*i<< endl;
        i++;
    }
    // Problem 5
    string smth;
    cout << "Enter your string: ", cin >> smth;
    cout << setw(25), cout << smth, cout << setw(25);































    return 1;
}

