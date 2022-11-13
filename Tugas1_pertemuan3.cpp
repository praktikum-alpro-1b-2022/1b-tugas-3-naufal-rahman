#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float alas = 8, tinggi = 10, sisi_miring;

    sisi_miring = sqrt (pow(alas, 2)+ pow(tinggi, 2));

    cout << "Diketahui sebuah segitiga siku-siku yang memiliki panjang alas "<< alas
    << " cm dan tinggi " << tinggi << " cm, \nmemiliki sisi miring sebesar " << sisi_miring <<" cm." << endl;

    return 0;
}
