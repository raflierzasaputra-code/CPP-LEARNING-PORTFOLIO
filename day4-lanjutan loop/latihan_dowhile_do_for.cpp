#include <iostream>
using namespace std;

int main(){

    //MENGGUNAKAN FOR//
    cout << "=====LATIHAN A=====" << endl;
    for ( int i = 1; i <= 5; i++) {
        cout << i;
    } cout << endl << "program A selesai" << endl << endl;

    //MENGGUNAKAN WHILE//
    cout << "=====LATIHAN B=====" << endl;
    int i = 5;
    while (i >= 1) {
        cout << i;
        i--;
    } cout << endl << "program B selesai" << endl << endl;

    //MENGGUNAKAN DO WHILE//
    cout << "=====LATIHAN C=====" << endl;
    int b = 1;
    do {
        cout << "Saya belajar C++" << endl;
        b++;
    } while (b <= 5);

    return 0;
}