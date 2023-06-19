#include <iostream>
using namespace std;

// Returns the number of integers in the range [1, n] that are divisible by either a or b.
int divisible(const int n, const int a, const int b)
{
    const int countA = n / a;       // Number of integers divisible by a.
    const int countB = n / b;       // Number of integers divisible by b.
    const int countAB = n / (a * b); // Number of integers divisible by both a and b.

    return countA + countB - countAB;
}

int main()
{
    const int n = 1000;
    const int a = 5;
    const int b = 7;

    cout << divisible(n, a, b) << endl;
    return 0;
}
