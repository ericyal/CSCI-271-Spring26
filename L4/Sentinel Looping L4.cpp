
// Eric Yalov
// CSCI 271
// Lesson 4 - Iteration and Loop Patterns
// Program : Sentinel Looping
// Description: what if the limit is based on the user?


#include <iostream>

using namespace std;

int main()
{
    int total = 0, counter = 0, grade;

cout << "Enter grade or -1 to quit: ";
cin >> grade; 

while (grade != -1) { 
    total += grade;    
    counter++;

    cout << "Enter next grade or -1 to quit: ";
    cin >> grade;      
}


if (counter != 0) {
    double average = static_cast<double>(total) / counter;
    cout << "Class average is " << average;
} else {
    cout << "No grades were entered."; 
}
    return 0;
}

// 1. I understand the difference between a sentinel and counter controlled loop.
// 2. The difficulty being faced here is the syntax. Too many times I misspelled a variable or condition and got confused on why
// the program wasn't running
// 3. I reviewed the slides
// 4. No AI.
// 5. It's best to use a sentinel loop if the limit is reliant on the user rather than the progammer.
