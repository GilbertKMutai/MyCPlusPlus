#include <iostream>

using namespace std;

class Student {
    private:
        string name;
        string gender;
    
    public:
        Student(string n, string g) : name(n), gender(g) {}
        void display() { cout << "My name is " << name << ", Gender: " << gender << endl; }

};

int main() {
    Student s1("Gilbert", "Male");
    Student s2("Metrine", "Female");

    s1.display();
    s2.display();
}