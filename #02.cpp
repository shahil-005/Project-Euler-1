#include <bits/stdc++.h>

using namespace std;

int main()

{   long long int a=1,b=2,c,sum =0,n;
    cin >> n;
    while(b<n)
    {
        if(b%2==0)
        {
            sum = sum + b;
            cout << b << endl;
        }

        c= a+b;
        a=b;
        b=c;


    }
    cout << sum;

    return 0;
}
