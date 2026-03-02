
// Eric Yalov
// CSCI 271
// Lesson 4 - Iteration and Loop Patterns
// Program : Infinite loop
// Description: While condition being used


#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    
    while (x <= 5) {
        cout << x << " ";
        x++;
    }

    return 0;
}

// 1. I understand why updating is so important in a iteration. Without it, the loop stays in a infinite "yes" loop.
// 2. The difficulty being faced here is a infinite loop. The x wasn't being updated, so there was an infinite loop.
// 3. I reviewed the slides
// 4. No AI.
// 5. In order for a loop to eliminate itself, you have to update it. Here, x++ acts as the "updater", which allows the iteration to do its job
