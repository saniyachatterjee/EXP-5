//Name:-Saaj Mulik
//Prn:-23070123109
//Class:-E&TC B2 
#include <iostream>
using namespace std;
int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
    return 0;
}
/* OUTPUT: 
PS C:\Users\sriha> cd 'c:\Users\sriha\OneDrive\Desktop\C++ coding\output'
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> & .\'nested if else.exe'
Enter three numbers: 7 9 2
Largest number: 9
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> */
