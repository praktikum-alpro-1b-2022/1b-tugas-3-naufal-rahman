#include <iostream>
using namespace std;

int main (){
    int praktikum = 75, UTS = 70, UAS = 88, nilai_akhir;
    nilai_akhir = praktikum*0.2 + UTS*0.3 + UAS*0.5; //20%, 30%, 50%

    cout << "Jika nilai praktikum, UTS, dan UAS: " << praktikum << ", " << UTS << ", "<< UAS << endl;
    cout << "Maka nilai akhir dari mata kuliah Algoritma dan Pemrograman Anda adalah: " << nilai_akhir << endl;

    return 0;
}
