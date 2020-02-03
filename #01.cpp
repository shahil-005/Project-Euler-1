#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,sum=0,n;
    cin >> n;
    for(i=3;i<n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum = sum +i;
        }

    }
     cout << sum;
    return 0;
}
