#include <iostream>
#include <string>
#include <algorithm> // For reverse() func
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin >> ws, str);  // Read input including spaces

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end()); // Reverse the string

    // Check if the string is a palindrome
    if (str == reversedStr)
        cout << "String is a palindrome!\n";
    else
        cout << "String is not a palindrome!\n";

    // Frequency count of characters (ignoring spaces)
    cout << "\nFrequencies:\n";
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ' )         //If str[i] is a space (' '), the loop skips to the next iteration.
        continue;
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (str[j] == str[i]) count++;
        }
        cout << str[i] << ": " << count << endl;
    }

    // Replace vowels with a user-specified symbol
    char symbol;
    cout << "\nEnter the symbol you want to replace vowels with: ";
    cin >> symbol;

    string vowels = "aeiouAEIOU";
    for (char& c : str) {                    // c is a reference, so modifying c directly modifies str
        if (vowels.find(c) != string::npos) {   //(a special value indicating "not found")
            c = symbol;
        }
    }
    cout << "\nModified string: " << str << endl;

    return 0;
}