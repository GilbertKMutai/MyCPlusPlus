#include <iostream>

using namespace std;

class Student {
    public:
        virtual void study() = 0; 
};

class MaleStudent : public Student {
    public:
        void study() override { cout << "The male student is studying." << endl; }
};

class FemaleStudent : public Student {
    public:
        void study() override { cout << "The female student is studying." << endl; }
};

int main() {
    Student *maleS = new MaleStudent();
    Student *femaleS = new FemaleStudent();

    maleS -> study();
    femaleS -> study();
}