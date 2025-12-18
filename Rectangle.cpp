#include <iostream>

using namespace std;

class Rectangle {
    private:
        int height;
        int width;
    
    public:
        Rectangle(int h, int w) : height(h), width(w) {}
        int getArea() { return height * width; }
};

int main() {
    Rectangle rect(10, 15);
    cout << "The aea is: " << rect.getArea();
}