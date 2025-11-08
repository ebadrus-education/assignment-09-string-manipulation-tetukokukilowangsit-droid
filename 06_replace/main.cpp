#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void demo_string_replace() {
    std::string text = "Halo dunia!";
    std::cout << "String awal: " << text << '\n';

    text.replace(5, 5, "C++");
    std::cout << "Setelah text.replace(5,5,\"C++\"): " << text << '\n';

    std::string s = "abcdef";
    s.replace(s.begin() + 2, s.begin() + 4, "XY");
    std::cout << "Setelah replace iterator range: " << s << '\n';

    std::string kalimat = "Saya suka kopi, kopi itu enak.";
    size_t pos = kalimat.find("kopi");
    if (pos != std::string::npos)
        kalimat.replace(pos, 4, "teh");
    std::cout << "Ganti 'kopi' pertama dengan 'teh': " << kalimat << '\n';
}

void demo_vector_replace() {
    std::vector<int> angka = {1, 2, 3, 4, 2, 5, 2};
    std::cout << "\nVector awal: ";
    for (int x : angka) std::cout << x << ' ';
    std::cout << '\n';

    std::replace(angka.begin(), angka.end(), 2, 9);
    std::cout << "Setelah std::replace(2 -> 9): ";
    for (int x : angka) std::cout << x << ' ';
    std::cout << '\n';

    std::replace_if(angka.begin(), angka.end(),
                    [](int x) { return x > 5; },
                    0);
    std::cout << "Setelah std::replace_if(x>5 -> 0): ";
    for (int x : angka) std::cout << x << ' ';
    std::cout << '\n';
}

int main() {
    std::cout << "=== Demo replace pada string dan container ===\n\n";
    demo_string_replace();
    demo_vector_replace();
    std::cout << "\n=== Selesai ===\n";
    return 0;
}
