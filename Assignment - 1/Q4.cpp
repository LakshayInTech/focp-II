#include <iostream>
using namespace std;

void printSpiral(int n) {
    int arr[n][n]; // Matrix to store numbers
    int num = 1;   // Number to be filled
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    // Fill the matrix in a spiral order
    while (num <= n * n) {
        // Fill top row
        for (int i = left; i <= right; i++) arr[top][i] = num++;
        top++;
        
        // Fill right column
        for (int i = top; i <= bottom; i++) arr[i][right] = num++;
        right--;
        
        // Fill bottom row
        for (int i = right; i >= left; i--) arr[bottom][i] = num++;
        bottom--;
        
        // Fill left column
        for (int i = bottom; i >= top; i--) arr[i][left] = num++;
        left++;
    }
    // Print the spiral matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " "; // Print each element
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    
    if (n <= 0) { // Check for valid input
        cout << "Please enter a positive number." << endl;
        return 1;
    }
    
    printSpiral(n); // Generate and print spiral matrix
    return 0;
}