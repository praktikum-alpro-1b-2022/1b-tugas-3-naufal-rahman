#include <iostream>
using namespace std;

int main(){
    int b=25, x=15, c=20;
    float Y;
    cout << "Berapa nilai Y pada Y = bx^2 + 0,5x - c, jika " << endl;
    cout << "b= " << b << endl;
    cout << "x= " << x << endl;
    cout << "c= " << c << endl;
    Y = b*x*x + 0.5*x - c;
    cout << "..."<< endl;
    cout << "Maka nilai Y adalah " << Y << endl;

    return 0;
}
