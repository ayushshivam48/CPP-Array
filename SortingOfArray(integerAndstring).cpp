// Class  contain to sort an array of integer and string 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Sorter {
public:
    // Function to sort an array of integers
    void sortIntegers(vector<int>& intArray) {
        sort(intArray.begin(), intArray.end()); // Sorting using STL
        cout << "Sorted integer array: ";
        for (int num : intArray) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Function to sort an array of strings
    void sortStrings(vector<string>& strArray) {
        sort(strArray.begin(), strArray.end()); // Sorting using STL
        cout << "Sorted string array: ";
        for (const string& str : strArray) {
            cout << str << " ";
        }
        cout << endl;
    }
};

int main() {
    Sorter sorter;

    // Example integer array
    vector<int> intArray = {5, 2, 9, 1, 7};
    cout << "Original integer array: ";
    for (int num : intArray) {
        cout << num << " ";
    }
    cout << endl;

    // Example string array
    vector<string> strArray = {"banana", "apple", "cherry", "date"};
    cout << "Original string array: ";
    for (const string& str : strArray) {
        cout << str << " ";
    }
    cout << endl;

    // Sort the arrays
    sorter.sortIntegers(intArray);
    sorter.sortStrings(strArray);

    // Display your details
    cout << "\nName: Ayush Shivam" << endl;
    cout << "Enrollment no: A45304823048" << endl;
    cout << "Class: BCA 3 A" << endl;

    return 0;
}
