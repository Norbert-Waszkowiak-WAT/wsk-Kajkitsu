#include <iostream>

int main() {
    int n;
    
    // Zapytaj użytkownika o rozmiar
    std::cout << "Podaj rozmiar tablicy: ";
    std::cin >> n;
    
    // Alokacja dynamiczna
    int* arr = new int[n];
    
    // Wypełnienie tablicy (np. kolejne liczby parzyste)
    std::cout << "Wypelniam tablice liczbami parzystymi...\n";
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    
    // Wypisanie wszystkich elementów
    std::cout << "Elementy tablicy: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    // WAŻNE: Zwolnienie pamięci
    delete[] arr;
    std::cout << "Pamiec zwolniona.\n";
    
    return 0;
}
