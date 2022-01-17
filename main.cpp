#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

void Write() {
    std::ofstream out("test.txt");
    if (!out) {
        std::cout << "Couldnt open for writing" << std::endl;
        return; //zakoñczenie dzia³ania funkcji
    }
    std::string message{ "C++ Bjarne" };
    for (char ch : message) {
        out.put(ch);
    }
}
void Read() {
    std::ifstream input("test.txt");
    if (!input) {
        std::cout << "File not found" << std::endl;
        return; //zakoñczenie dzia³ania funkcji
    }
    char ch{};
    while (input.get(ch)) {
        std::cout << ch;
    }
}
int main()
{
    Write();
    Read();
    return 0;
}