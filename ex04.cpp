#include <iostream>

// Funkcja oblicza długość napisu (bez '\0')
int my_strlen(const char* s) {
    int length = 0;
    
    // Iterujemy do napotkania znaku '\0'
    while (*s != '\0') {
        length++;
        s++;  // Przesuwamy wskaźnik na kolejny znak
    }
    
    return length;
}

int main() {
    // Test 1
    const char* str1 = "Hello";
    std::cout << "Dlugosc \"" << str1 << "\": " << my_strlen(str1) << "\n";
    
    // Test 2
    const char* str2 = "C++ Pointers";
    std::cout << "Dlugosc \"" << str2 << "\": " << my_strlen(str2) << "\n";
    
    // Test 3
    const char* str3 = "";
    std::cout << "Dlugosc \"" << str3 << "\": " << my_strlen(str3) << "\n";
    
    // Test 4
    const char* str4 = "A";
    std::cout << "Dlugosc \"" << str4 << "\": " << my_strlen(str4) << "\n";
    
    return 0;
}
