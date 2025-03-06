#include <iostream>

using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    // Taking user input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Displaying result
    cout << "Sum: " << add(num1, num2) << endl;
    
    return 0;
}
