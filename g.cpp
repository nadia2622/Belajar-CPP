#include <iostream>

using namespace std;
int main() {
    int a;

    cout << "Masukkan nilai =  ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "a = 1" << endl; // kalau input = 1, maka case 1, 2, 3, 4, 5 akan dieksekusi
        case 2:
            cout << "a = 2" << endl;
        case 3:
            cout << "a = 3" << endl; // kalau input = 3, maka case 3, 4, 5 akan dieksekusi
        case 4:
            cout << "a = 4" << endl;
        case 5:
            cout << "a = 5" << endl;
        default:
            cout << "default" << endl; // kalau input < 1 atau > 5, maka default yang dieksekusi
    }

    cout << "ini adalah akhir dari program" << endl;

    return 0;
}