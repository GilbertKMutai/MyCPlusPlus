#include <iostream>
#include <cmath>

using namespace std;

struct Student {
    int id;
    string name;
};

class Staff {

};

int main() {
    double totalRevenue = 123456.789;
    int arr[5] = {2, 4, 8, 12, 16};
    int number = 10;
    int* ptr = &number;
    double num1 = 25.0;
    double base = 2;
    double exponent = 3;
    Student s1;

    s1.id = 1;
    s1.name = "Gilbert";
    cout << "ID: " << s1.id << endl;
    cout << "NAME: " << s1.name << endl;

    cout << base << " power " << exponent << " is = " << pow(base, exponent) << endl;
    cout << "S R of " << num1 << " is " << sqrt(num1) << endl;

    cout << "Address stored by the pointer: " << ptr << endl;
    cout << "VALUE pointed to by the pointer: " << *ptr << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " \n";
        if (arr[i] == 12)
        {
            cout << "Found at index: " << i << endl;
        }
    }

    cout << "The last digit is: " << arr[4] << endl;

    cout << "Total revenue is: " << totalRevenue << endl;
    return 0;
}


