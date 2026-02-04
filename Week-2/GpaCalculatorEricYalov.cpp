
#include <iostream>

using namespace std;


int main(){
    double num1=0.0;
    double num2=0.0;
    double num3=0.0;
    
    cout << "enter three grades: ";
    cin >> num1 >> num2 >> num3;
    
    double GPA = (num1 + num2 + num3)/3;
    
    cout << "Average GPA:\t" << GPA << endl;
    
    return 0;
}
