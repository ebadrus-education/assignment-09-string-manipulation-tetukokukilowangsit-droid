#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

void demo_char_toupper() {
    char c = 'a';
    char upper = std::toupper(c);
    std::cout << "Karakter awal: " << c << '\n';
    std::cout << "Setelah toupper: " << upper << '\n';
}

void demo_string_toupper() {
    std::string text = "halo dunia";
    std::cout << "\nString awal: " << text << '\n';

    for (char &ch : text)
        ch = std::toupper(static_cast<unsigned char>(ch));

    std::cout << "Setelah toupper semua huruf: " << text << '\n';
}

void demo_transform_toupper() {
    std::string kalimat = "Belajar C++ itu seru!";
    std::cout << "\nKalimat awal: " << kalimat << '\n';

    std::transform(kalimat.begin(), kalimat.end(), kalimat.begin(),
                   [](unsigned char c){ return std::toupper(c); });

    std::cout << "Setelah transform toupper: " << kalimat << '\n';
}

int main() {
    std::cout << "=== Demo toupper pada karakter dan string ===\n\n";
    demo_char_toupper();
    demo_string_toupper();
    demo_transform_toupper();
    std::cout << "\n=== Selesai ===\n";
    return 0;
}
