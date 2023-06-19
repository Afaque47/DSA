#include <iostream>
using namespace std;                                              // time complexity O(log N) base 10
int digitSum(int n){
    if(n==0) return 0;                                           //  binarySearch time :- O(log N) base 2
   
    return digitSum(n/10) + n%10;                                   /*   int lastDigit=n%10;
                                                                        int previousDigit=n/10;
                                                                         digitSum(n)=digitSum(previousDigits)+lastDigit;     */
}
int main()
{
    int n;
    cin>>n;
    
    cout<<digitSum(n);

    return 0;
}
