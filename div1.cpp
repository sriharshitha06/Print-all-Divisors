#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Find divisors of n
vector<int> findDivisors(int n) {
    vector<int> divisors; // Store divisors
    int sqrtN = sqrt(n); // Calculate square root of n

    // Loop through numbers from 1 to sqrt(n)
    for (int i = 1; i <= sqrtN; ++i) {
        if (n % i == 0) { // If i is a divisor
            divisors.push_back(i); // Add i to divisors
            if (i != n / i) { // Check for distinct divisor
                divisors.push_back(n / i); // Add paired divisor
            }
        }
    }
    return divisors; // Return list of divisors
}

int main() {
    int num; // Input number
    cin >> num; // Read input

    vector<int> divisors = findDivisors(num); // Find divisors
    cout << "Divisors of " << num << " are: "; // Output message
    for (int divisor : divisors) { // Print each divisor
        cout << divisor << " "; 
    }
    cout << endl; 
    return 0; 
}
