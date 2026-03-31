#include <iostream>
using namespace std;

// Variabel global
int n;
int pilihan;

// fungsi untuk cek bilangan prima
bool isPrima(int x) {
    if (x <= 1) return false;