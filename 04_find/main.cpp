#include <iostream>
#include <fstream>
#include <string>
int main() {
    std::string filename = "data.txt"; // nama file yang akan dibaca
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Gagal membuka file: " << filename << std::endl;
        return 1;
    }
    std::string keyword;
    std::cout << "Masukkan kata yang ingin dicari: ";
    std::getline(std::cin, keyword);
    std::string line;
    int lineNumber = 0;
    bool found = false;
    while (std::getline(file, line)) {
        lineNumber++;
        if (line.find(keyword) != std::string::npos) {
            std::cout << "Ditemukan di baris ke-" << lineNumber << ": " << line << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Kata \"" << keyword << "\" tidak ditemukan dalam file." << std::endl;
    }

    file.close();
    return 0;
}
