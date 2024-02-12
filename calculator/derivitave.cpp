// #include <iostream>

// using namespace std;

// int main(){
//     // decalre variable for radius and volume
//     float radius, volume;

//     cout <<"Please enter the radius: ";
//     cin >>radius;
//     cout << radius << endl;

//     volume = 4/3 * 3.14 * radius* radius * radius;
//     cout << "the volume of a sphere with radius " << radius  << " is " << volume << endl;
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // decalre variable for radius and volume
    float coefficient, exponent, equation;
    char x;
    cout <<"Please enter the coefficient: ";
    cin >>coefficient;
    cout << coefficient << endl;

    cout <<"Please enter the exponent ";
    cin >>exponent;
    cout << exponent << endl;

    equation = coefficient * pow(char(x),exponent);


    
    cout << "the volume of a sphere with coefficient and exponent " <<  coefficient << exponent << 
    " is " << equation << endl;
    return 0;
}