#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input for matrix size (NxN)
    cout << "Enter the size of square matrix: ";
    cin >> n;

    int matrix[n][n]; // Declare a square matrix of size n x n
    
    // Taking user input for matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element for Row " << i + 1 << " Column " << j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }
    
    // Display the original matrix
    cout << "\nOriginal Matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t"; // Print each element with a tab space
        }
        cout << "\n";
    }
    
    // Step 1: Transpose the matrix (convert rows to columns)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]); // Swap elements to transpose
        }
    }
    
    // Step 2: Reverse each row to complete 90-degree rotation
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[i][j], matrix[i][n - 1 - j]); // Swap left and right elements
        }
    }
    
    // Display the rotated matrix (90-degree clockwise)
    cout << "\nRotated Matrix (90-degree clockwise): \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t"; // Print each element with a tab space
        }
        cout << "\n";
    }
    
    return 0;
}