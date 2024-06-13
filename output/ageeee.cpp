#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Function to concatenate age and marks as a string
string concatenateAgeAndMarks(int age, int marks) {
    stringstream ss;
    ss << age << marks;
    return ss.str();
}

// Function to calculate the product of age and marks
int calculateProduct(int age, int marks) {
    return age * marks;
}

int main() {
    int numClassmates;
    cout << "Enter the number of classmates: ";
    cin >> numClassmates;

    vector<int> ages(numClassmates);
    vector<int> marks(numClassmates);

    // Collecting ages and marks
    for (int i = 0; i < numClassmates; ++i) {
        cout << "Enter age of classmate " << i + 1 << ": ";
        cin >> ages[i];
        cout << "Enter marks of classmate " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display results
    cout << "\nResults:\n";
    for (int i = 0; i < numClassmates; ++i) {
        string concatenated = concatenateAgeAndMarks(ages[i], marks[i]);
        int product = calculateProduct(ages[i], marks[i]);

        cout << "Classmate " << i + 1 << ":\n";
        cout << "Concatenated Age and Marks: " << concatenated << endl;
        cout << "Product of Age and Marks: " << product << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}
