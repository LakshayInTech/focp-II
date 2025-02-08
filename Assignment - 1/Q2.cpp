#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Now, enter the numbers one by one:\n";

    // Taking input for the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying the original array
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    // Printing the reversed array
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;

    // Checking if there are enough elements to find second largest and second smallest
    if (n < 2) {
        cout << "Minimum 3 elements required to find second largest and second smallest number.";
        return 0;
    }

    // Initializing variables for largest and smallest values
    int largest = arr[0], secondLargest = arr[0];
    int smallest = arr[0], secondSmallest = arr[0];

    // Finding the largest and smallest elements in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }

    // Initializing second largest and second smallest values
    secondLargest = smallest;
    secondSmallest = largest;

    // Finding the second largest and second smallest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) secondLargest = arr[i];
        if (arr[i] < secondSmallest && arr[i] != smallest) secondSmallest = arr[i];
    }

    // Displaying the second smallest and second largest elements
    cout << "Second smallest: " << secondSmallest << endl;
    cout << "Second largest: " << secondLargest << endl;

    return 0;
}