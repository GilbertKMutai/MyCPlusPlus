#include <iostream>

using namespace std;

class Print {
    public:
        // Method overloading
        void show(int number) { cout << number << endl; }
        void show(string letters) { cout << letters << endl; }
};

int main() {
    Print print;
    print.show(10);
    print.show("Hello");
}