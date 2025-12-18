#include <iostream>

using namespace std;

class Student {
    public:
        virtual void study() { cout << "The student is studying." << endl; }
};

class HighSchoolStudent : public Student {
    public:
        void study() override { cout << "The highschool student is revising past K.C.S.E papers" << endl; }
};

class UniversityStudent : public Student {
    public:
        void study() override { cout << "The university student is reading a research paper" << endl; }
};

int main() {
    Student *highSchoolS = new HighSchoolStudent();
    Student *universityS = new UniversityStudent();
    
    highSchoolS -> study();
    universityS -> study();
}