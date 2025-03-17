#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Task 1: Pointers
void pointerDemo() {
    int num = 10;
    int* ptr = &num;
    cout << "Before modification: " << num << endl;
    *ptr = 20;
    cout << "After modification using pointer: " << num << endl;
}

// Task 2: Simulating a Car's Actions
void startCar() { cout << "Car is starting..." << endl; }
void accelerateCar() { cout << "Car is accelerating..." << endl; }
void stopCar() { cout << "Car is stopping..." << endl; }

// Task 3: Multidimensional Arrays
void multiArrayDemo() {
    int arr[3][3];
    srand(time(0));
    cout << "2D Array Values:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Accessed Element (1,1): " << arr[1][1] << endl;
}

// Task 4: Implicit Conversions
void implicitConversionDemo() {
    int intValue = 5;
    float floatValue = intValue + 2.5; // Implicit conversion to float
    double doubleValue = floatValue * 2; // Implicit conversion to double
    cout << "Int: " << intValue << ", Float: " << floatValue << ", Double: " << doubleValue << endl;
}

// Task 5: String Manipulation
void stringManipulationDemo() {
    string text = "Hello, World!";
    cout << "Original: " << text << endl;
    cout << "Length: " << text.length() << endl;
    cout << "Substring (0-5): " << text.substr(0, 5) << endl;
    cout << "Find 'World': " << text.find("World") << endl;
    text.replace(7, 5, "C++");
    cout << "Replaced String: " << text << endl;
}

// Task 6: Memory Leak Fix
void my_function() {
    int* ptr = new int[10]; // Allocate memory
    delete[] ptr; // Free allocated memory to prevent memory leak
}

void memoryLeakFix() {
    my_function();
    cout << "Memory leak fixed!" << endl;
}

int main() {
    cout << "\n=== Pointer Demonstration ===" << endl;
    pointerDemo();
    
    cout << "\n=== Car Simulation ===" << endl;
    startCar();
    accelerateCar();
    stopCar();
    
    cout << "\n=== Multidimensional Array ===" << endl;
    multiArrayDemo();
    
    cout << "\n=== Implicit Conversion ===" << endl;
    implicitConversionDemo();
    
    cout << "\n=== String Manipulation ===" << endl;
    stringManipulationDemo();
    
    cout << "\n=== Memory Leak Fix ===" << endl;
    memoryLeakFix();
    
    return 0;
}
