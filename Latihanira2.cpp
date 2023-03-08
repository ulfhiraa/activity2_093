#include <iostream>
using namespace std;

double Luas, P, L;
void input(){
    cout << "Masukkan Panjangnya = ";
    cin >> P;
    cout << "Masukkan Lebarnya = ";
    cin >> L;
}

void proses(){
    Luas = P*L;
}

void output(){
    cout << "Luasnya = " << Luas;
}

int main (){
    input();
    proses();
    output();
}