#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);
int nextPrime(int n);
void findFactors(int n);

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "The next prime number greater than " << n << " is " << nextPrime(n) << "." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        findFactors(n); 
    }

    return 0;
}
// Function to determine if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // If n is less than 2, it is not prime.
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // If divisible by any number, it's not prime.
    }
    return true;
}
// Function to find the next prime number greater than n
int nextPrime(int n) {
    int prime = n + 1;
    while (!isPrime(prime)) { // Increment until a prime is found
        prime++;
    }
    return prime;
}
// Function to find and display all factors of a given number
void findFactors(int n) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " "; // Print factors
        }
    }
    cout << endl;
}