#include <bits/stdc++.h>

using namespace std;


int main()

{   unsigned long long int n,x = 0;
    cin >> n;

    for(int i=2;i<n;i++)
    {   int count = 0;
        if(n%i==0)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%j == 0)
                {
                    count++;
                }
            }


            if(count == 2)
            {
                if(i>x)
                {
                    x = i;
                }
            }

        }


    }

    cout << x;



   return 0;
}
