#include <iostream>
using namespace std;
double P,L;

void input(){
    cout << "Masukkan Panjangnya = ";
    cin >> P;
    cout << "Masukkan Lebarnya = ";
    cin >> L;
}

double proses(){
    return P*L;
}

double proses2(double a, double b){
    return a*b;
}

void output(){
    cout << "Luasnya = " << proses();
    cout << "\nLuasnya ke 2 = " << proses2(P,L);
}

int main(){
    input();
    proses();
    output();
}