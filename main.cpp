#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long faktorial = 1;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    // Memastikan bilangan yang dimasukkan adalah positif
    if (n < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
    } else {
        // Menghitung faktorial
        for (int i = 1; i <= n; ++i) {
            faktorial *= i;
        }
        // Menampilkan hasil
        cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;
    }

    return 0;
}
