#include <iostream>
#include <fstream>
#include <string>
int main() {
    std::string filename = "output.txt";
    std::ofstream file;
    file.open(filename, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Gagal membuka file: " << filename << std::endl;
        return 1;
    }
    std::string text;
    std::cout << "Masukkan teks yang ingin ditambahkan: ";
    std::getline(std::cin, text);
    file << text << std::endl;
    file.close();
    std::cout << "Teks berhasil ditambahkan ke " << filename << std::endl;
    return 0;
}
