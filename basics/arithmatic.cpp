#include<iostream>
using namespace std;

int main(){
    float a , b;
    cout << "Enter a number a: ";
    cin >> a;

    cout << "Enter a number b: ";
    cin >> b;

    double sum,sub,mul,div,mod;

    sum = a+b;
    cout << "Sum: " << sum << endl;

    sub = a-b;
    cout << "Sub: " << sub << endl;

    mul = a*b;
    cout << "Multiplication: " << mul << endl;

    div = a/b;
    cout << "Division: " << div << endl;

    // mod = a%b;
    // cout << "Modulo: " << mod << endl;



    return 0;
}