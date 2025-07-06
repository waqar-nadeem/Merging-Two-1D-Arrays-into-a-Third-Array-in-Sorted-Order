#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements for the first array:\n";
    for(int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements for the second array:\n";
    for(int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    int mergedSize = n1 + n2;
    int merged[mergedSize];

    for(int i = 0; i < n1; ++i) {
        merged[i] = arr1[i];
    }
    for(int i = 0; i < n2; ++i) {
        merged[n1 + i] = arr2[i];
    }

    for(int i = 0; i < mergedSize - 1; ++i) {
        for(int j = i + 1; j < mergedSize; ++j) {
            if(merged[i] > merged[j]) {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    cout << "Merged and sorted array:\n";
    for(int i = 0; i < mergedSize; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
