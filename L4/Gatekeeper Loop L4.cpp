
// Eric Yalov
// CSCI 271
// Lesson 4 - Iteration and Loop Patterns
// Program : (Gatekeeper Loop)
// Description: Gate Keeper loop


#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter age (1-120): ";
    cin >> age;


    while (age < 1 || age > 120) {
        cout << "Invalid. Please enter a realistic age: ";
        cin >> age;
}
}

// 1. I understand the gatekeeper loop
// 2. I faced no difficulty here
// 3. I reviewed the slides
// 4. No AI.
// 5. The gatekeeper loop acts only when necessary (here, it's when a user inputs an invalid input)
