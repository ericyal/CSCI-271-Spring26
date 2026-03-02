
// Eric Yalov
// CSCI 271
// Lesson 4 - Iteration and Loop Patterns
// Program : (while Example - Class Average)
// Description: A counter-controlled iteration statement


#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) {
    if (i == 3) {
        continue; 
    }

    if (i == 6) {
        break; 
    }

    cout << i << " ";
}
}

// 1. I understand what break and continue does
// 2. The difficulty being faced here is the syntax. I kept forgetting to put the semi colons at the end of my lines.
// 3. I reviewed the slides
// 4. No AI.
// 5. Break immediately stops the loop, where as continue jumps to the next iteration.
