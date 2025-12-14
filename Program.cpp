#include <iostream> // Header files

using namespace std; // Namespace declaration

// Optional: Class or function definition
class Greeter {
    public:
        void sayHello() {
            cout << "Hello Gilbert!" << endl;
        }
};

// Main function
int main(void) {
    Greeter g; // Create object
    g.sayHello(); // Call method
    return 0; // Exit status
}