#include <iostream>

// Function to reverse an array in-place
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Ensure k is within the valid range

    // Reverse the first n-k elements
    reverseArray(arr, 0, n - k - 1);

    // Reverse the remaining k elements
    reverseArray(arr, n - k, n - 1);

    // Reverse the entire array
    reverseArray(arr, 0, n - 1);
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the number of steps to rotate to the right: ";
    std::cin >> k;

    rotateArray(arr, n, k);

    std::cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
