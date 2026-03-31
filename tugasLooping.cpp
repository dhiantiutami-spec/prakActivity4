#include <iostream>
using namespace std;

// Variabel global
int n;
int pilihan;

// fungsi untuk cek bilangan prima
bool isPrima(int x) {
    if (x <= 1) return false;

    int i = 2;
    while (i <= x / 2) {

    int i = 2;
    while (i <= x / 2){
        if (x % i == 0) {
            return false;
        }
        i++; 
        }
    } 
    return true; 
}

// Fungsi untuk cek bilangan Fibonacci
bool isFibonacci(int x){
    int a = 0, b = 1, c = 0;

    while (c < x) {
        c = a + b;
        a = b;
        b = c;
    }
    if (x == 0 || x == 1 || c == x) {
        return true;
    } else {
        return false;
    }
}

// Prosedur input
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> n;
}

// Prosedur output hasil prima
void tampilPrima() {
     if (isPrima(n)) {
        cout << n << " adalah bilangan prima" << endl;
     } else {
        cout << n << " bukan bilangan prima" << endl;
     }
}

// Prosedur output hasil fibonacci
void tampilFibonacci() {
    if (isFibonacci(n)) {
        cout << n << " termasuk bilangan Fibonacci" << endl;
    } else {
        cout << n << " bukan bilangan Fibonacci" << endl;
    }
}

// fungsi menu
void tampilMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}
       