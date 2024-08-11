//Name:-Saaj Mulik
//Prn:-23070123109
//Class:-E&TC B2 
#include <iostream>
using namespace std;
int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    else 
        cout << "Largest number: " << n3;
    return 0;
}
/* OUTPUT:
PS C:\Users\sriha> cd 'c:\Users\sriha\OneDrive\Desktop\C++ coding\output'
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> & .\'Only if-else.exe'
Enter three numbers: 11 55 49
Largest number: 55
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> */
