#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string teks = "Hello, World!";
    cout << "Sebelum erase: " << teks << endl;
    teks.erase(5, 7);
    cout << "Sesudah erase: " << teks << endl;
    vector<int> angka = {10, 20, 30, 40, 50};
    cout << "\nSebelum erase: ";
    for (int n : angka) cout << n << " ";
    angka.erase(angka.begin() + 1);
    cout << "\nSesudah erase satu elemen: ";
    for (int n : angka) cout << n << " ";
    angka.erase(angka.begin() + 1, angka.begin() + 3);
    cout << "\nSesudah erase range: ";
    for (int n : angka) cout << n << " ";
    cout << endl;
    return 0;
}
