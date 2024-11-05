#include <iostream>
#include <vector>
#include <cmath>

template <typename T>
T square(T a) {
    return a * a;
}

template <typename T>
std::vector<T> square(const std::vector<T>& vec) {
    std::vector<T> result;
    result.reserve(vec.size());
    for (const auto& element : vec) {
        result.push_back(square(element));
    }
    return result;
}

template <typename T>
void printVector(const std::vector<T>& vec) {
    std::cout << "[ ";
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    int num = 5;
    std::cout << "Sqrt of simple num " << num << ": " << square(num) << std::endl;
    std::vector<int> intVector = { 1, 2, 3, 4, 5 };
    std::cout << "incoming vector: ";
    printVector(intVector);
    std::cout << "Vector in sqrt: ";
    printVector(square(intVector));
    std::vector<double> doubleVector = { 1.5, 2.5, 3.5 };
    std::cout << "Incoming double_vector: ";
    printVector(doubleVector);
    std::cout << "Double_vector in sqrt: ";
    printVector(square(doubleVector));
    return 0;
}