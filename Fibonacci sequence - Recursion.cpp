#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) 
{
    // Base Cases: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    if (n == 0) {return 0;} 
    else if (n == 1) {return 1;} 
    else 
    {
        // Recursive Step: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() 
{
    int n;

    // Read the value of n from the user
    cout << "Enter the value of n for Fibonacci: ";
    cin >> n;

    // Calculate and display the nth Fibonacci number
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
