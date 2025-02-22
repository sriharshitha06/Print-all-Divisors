#include <bits/stdc++.h> 
using namespace std;
int* printDivisors(int n, int &size) {
    int *divisors = new int[n]; 
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            divisors[count++] = i; 
        }
    }
    size = count; 
    return divisors; 
}
int main() {
    int num;
  cin>>num;
    int size;
    int *divisors = printDivisors(num, size);
    cout << "Divisors of " << num << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << std::endl;
    delete[] divisors;
  return 0;
}
                                
                            
