
#include <iostream>

using namespace std;


int main(){
    double num1=0;
    double num2=0;
    
    cout << "enter two numbers: ";
    cin >> num1 >> num2;
    
    double sum = num1 + num2;
    
    cout << "Sum:\t" << sum << endl;
    
    double difference = num1 - num2;
    
    cout <<"Difference:\t" << difference << endl;
    
    double product = num1 * num2;
    
    cout <<"Product:\t" << product << endl;
    
    double quotient = num1 / num2;
    
    cout <<"Quotient:\t" << quotient << endl;

    return 0;
}