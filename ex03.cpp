#include <iostream>

// Funkcja znajduje min i max w tablicy
// Wyniki zapisuje przez wskaźniki min i max
void min_max(int* arr, int size, int* min, int* max) {
    // Inicjalizacja - przyjmujemy pierwszy element jako startowy
    *min = arr[0];
    *max = arr[0];
    
    // Iterujemy przez pozostałe elementy
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];  // Znaleziono mniejszą wartość
        }
        if (arr[i] > *max) {
            *max = arr[i];  // Znaleziono większą wartość
        }
    }
}

int main() {
    // Test 1
    int arr1[] = {10, 5, 30, 2, 50};
    int min1, max1;
    min_max(arr1, 5, &min1, &max1);
    std::cout << "Test 1 - Min: " << min1 << ", Max: " << max1 << "\n";
    
    // Test 2
    int arr2[] = {-5, -10, 0, 15, -3};
    int min2, max2;
    min_max(arr2, 5, &min2, &max2);
    std::cout << "Test 2 - Min: " << min2 << ", Max: " << max2 << "\n";
    
    // Test 3
    int arr3[] = {42};
    int min3, max3;
    min_max(arr3, 1, &min3, &max3);
    std::cout << "Test 3 - Min: " << min3 << ", Max: " << max3 << "\n";
    
    return 0;
}
