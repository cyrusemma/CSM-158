#include <iostream>
#include <vector>

int main() {
    // Number of classmates
    int numClassmates;
    std::cout << "Enter the number of classmates: ";
    std::cin >> numClassmates;

    // Vector to store ages and marks
    std::vector<int> ages(numClassmates);
    std::vector<int> marks(numClassmates);

    // Input ages and marks
    std::cout << "Enter ages and marks for each classmate:\n";
    for (int i = 0; i < numClassmates; ++i) {
        std::cout << "Classmate " << (i + 1) << " - Age: ";
        std::cin >> ages[i];
        std::cout << "Classmate " << (i + 1) << " - Marks: ";
        std::cin >> marks[i];
    }

    // Output concatenation and product of age and marks
    std::cout << "Concatenation of ages and marks:\n";
    for (int i = 0; i < numClassmates; ++i) {
        std::cout << "Age: " << ages[i] << ", Marks: " << marks[i] << ", Product: " << ages[i] * marks[i] << "\n";
    }

    return 0;
}