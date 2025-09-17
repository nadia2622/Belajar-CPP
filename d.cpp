#include <iostream>

using namespace std;
int main() {
    int a = 2;
    int b = 2;

    bool hasil1, hasil2;

    // komparasi, relation expression

    // sebanding
    hasil1 = (a == b);
    // tidak sebanding
    hasil1 = (a != b);
    // Kurang dari
    hasil1 = (a < b);
    // lebih dari
    hasil1 = (a > b);
    // Kurang dari sama dengan
    hasil1 = (a <= b);
    // lebih dari sama dengan
    hasil1 = (a >= b);

    cout << hasil1 << endl; // true (1)
    cout << hasil1 << endl; // false (0)

    cin.get();
    return 0;
}