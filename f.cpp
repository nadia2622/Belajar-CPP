#include <iostream>

using namespace std;
int main() {
    int a;

    cout << "Masukkan angka =  ";
    cin >> a;

    // if statement
    // kondisi dalam bentuk boolean
    if (a == 5) {
        cout << "nilai ini adalah 5" << endl;
    } else if (a == 3){
        cout << "nilai ini adalah 3" << endl;
    } else if (a == 1){
        cout << "nilai ini adalah 1" << endl;
    } else {
        cout << "nilai ini bukan 1, 3, atau 5" << endl;
    }

    cout << "selesai" << endl;
    cin.get();
    return 0;
}