#include <bits/stdc++.h>
using namespace std;

// Print divisors of n
int* printDivisors(int n, int &size) {
    int *divisors = new int[n]; // Dynamic array for divisors
    int count = 0; // Counter for divisors

    // Loop through all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { // If i is a divisor
            divisors[count++] = i; // Store divisor
        }
    }
    
    size = count; // Set size of divisor array
    return divisors; // Return array of divisors
}

int main() {
    int num; 
    cin >> num; 

    int size; // Size of divisors array
    int *divisors = printDivisors(num, size); // Get divisors
    cout << "Divisors of " << num << " are: "; // Output message

    // Print each divisor
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " "; 
    }
    cout << std::endl; 
    
    delete[] divisors; 
    return 0; 
}
