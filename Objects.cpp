#include <iostream>

using namespace std;

class Student {
    public: 
        string name;
        int age;

        void introduce() {
            cout << "My name is " << name << " and I am " << age << " years old" << endl;
        }
};

int main() {
    Student s;
    s.name = "Gilbert";
    s.age = 23;
    s.introduce();
}