#include <iostream>
#include <math.h>
using namespace std;

int main()
{       int n;
        cin>>n;
        int sum=0;
        while(n)
        {
          int  digit=n%10;
            sum=(sum*10)+digit;
            n=n/10;
        }
        cout<<sum;

    return 0;
}
