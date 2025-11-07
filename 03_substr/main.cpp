#include <iostream>
#include <string>
int main() {
    std::string kalimat = "Belajar C++ itu menyenangkan!";
    std::string kata = kalimat.substr(8, 3);
    std::cout << "Kalimat asli  : " << kalimat << std::endl;
    std::cout << "Hasil substr  : " << kata << std::endl;
    std::string sisa = kalimat.substr(12);
    std::cout << "Substring dari posisi 12 hingga akhir: " << sisa << std::endl;
    return 0;
}
