#include <iostream>
using namespace std;

class sorting {
public:
    void sort(int arr[], int n) {
        // Sorting the array using Bubble Sort
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swap if the current element is greater than the next element
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    int binary_search(int arr[], int n, int target) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target)
                return mid; // Return the index where the target is found
            else if (arr[mid] < target)
                low = mid + 1; // Search the right half
            else
                high = mid - 1; // Search the left half
        }
        return -1; // Return -1 if target not found
    }
};

int main() {
    sorting bs; // Object of class sorting
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Perform sorting
    bs.sort(arr, n); // Sort the array

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Perform binary search
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int index = bs.binary_search(arr, n, target);
    if (index != -1) {
        cout << "Element found at index number: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
