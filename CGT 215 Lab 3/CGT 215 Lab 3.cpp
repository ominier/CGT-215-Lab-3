// CGT 215 Lab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
    cout << "Welcome to my program, please select an operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nYour Selection: ";
    cin >> choice;
}

void getChoices(float& A, float& B) {
    cout << "Please enter the first value: ";
    cin >> A;
    
    cout << "Please enter the second value: ";
    cin >> B;
    // The rest of this function is an exercise to the reader

}

void add (float A, float B) {
    cout << A << " + " << B << " = " << A + B << endl;
}

void subtract(float A, float B) {
    cout << A << " - " << B << " = " << A - B << endl;
}

void multiply(float A, float B) {
    cout << A << " * " << B << " = " << A * B << endl;
}

void divide(float A, float B) {
    cout << A << " / " << B << " = " << A / B << endl;
}

int main() {

    int choice;
    float A;
    float B;

    printMenu(choice);
    getChoices(A, B);


    if (choice == 1) {
        add(A, B);
    }

    if (choice == 2) {
        subtract(A, B);
    }

    if (choice == 3) {
        multiply(A, B);
    }

    if (choice == 4) {
        divide(A, B);
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
