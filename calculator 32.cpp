//Name:-Saaj Mulik
//Prn:-23070123109
//Class:-E&TC B2 
#include<iostream>
using namespace std;
int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! The operator is not correct" << endl;
            break;
    }
    return 0;
}
/* OUTPUT:
PS C:\Users\sriha> cd 'c:\Users\sriha\OneDrive\Desktop\C++ coding\output'
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> & .\'calculator 32.exe'
Enter an operator (+, -, *, /): *
Enter two numbers: 
4 4
4 * 4 = 16
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> */
