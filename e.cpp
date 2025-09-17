#include <iostream>

using namespace std;
int main() {
    int a = 3;
    int b = 2;

    bool hasil;

    // operator logika : && (and), || (or), ! (not)

    // not
    cout << "NOT" << endl;
    hasil = (a == 3);
    cout << hasil << endl;
    hasil = !(a == 3);
    cout << hasil << endl;

    // and : kedua kondisi harus true
    cout << "AND" << endl;
    hasil = (a == 3) && (b == 2); // true && true = true
    cout << hasil << endl;
    hasil = (a == 4) && (b == 2); // false && true = false
    cout << hasil << endl;
    hasil = (a == 3) && (b == 3); // true && false = false
    cout << hasil << endl;
    hasil = (a == 4) && (b == 3); // false && false = false
    cout << hasil << endl;

    // or : salah satu kondisi harus true
    cout << "OR" << endl;
    hasil = (a == 3) || (b == 2); // true || true = true
    cout << hasil << endl;
    hasil = (a == 4) || (b == 2); // false || true = true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 3); // true || false = true
    cout << hasil << endl;
    hasil = (a == 4) || (b == 3); // false || false = false
    cout << hasil << endl;

    
    cin.get();
    return 0;
}