#include <iostream>
#include <limits>


using namespace std;
int main() {

    // bilangan bulat
    // int a = 1; //32-bit. btw ini signed (jadi dia nanti bakal ada tanda +/- di depannya)
    unsigned int a = 2;
    // long ada 64-bit
    // short ada 16-bit

    // decimal
    // float

    // character
    // char a = 'a';

    // boolean
    // bool k = true;

    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << std::numeric_limits<unsigned int>::max() << endl;
    cout << std::numeric_limits<unsigned int>::min() << endl;
    cin.get();
    return 0;
}