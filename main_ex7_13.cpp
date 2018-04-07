
#include <cstdlib>
#include <iostream>
#include "ex7_13_class.h"
using namespace std;

int main() {
    Chaine a;
    cout << "Chaine a : " << a << endl;
    Chaine b("Hello world!");
    cout << "Chaine b : " << b << endl;
    Chaine c = b;
    cout << "Chaine c : " << c << endl;
    return EXIT_SUCCESS;
}

