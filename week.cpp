//Name:-Saaj Mulik
//Prn:-23070123109
//Class:-E&TC B2 
#include<iostream>
using namespace std;
int main() {
    int choice;
    cout << "1. Monday" << endl
         << "2. Tuesday" << endl
         << "3. Wednesday" << endl
         << "4. Thursday" << endl
         << "5. Friday" << endl
         << "6. Saturday" << endl
         << "7. Sunday" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
            break;
    }
    return 0;
}
/* OUTPUT:
PS C:\Users\sriha> cd 'c:\Users\sriha\OneDrive\Desktop\C++ coding\output'
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> & .\'week.exe'
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
Enter your choice: 5
Friday
PS C:\Users\sriha\OneDrive\Desktop\C++ coding\output> */
