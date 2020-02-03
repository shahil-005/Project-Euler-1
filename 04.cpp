#include <bits/stdc++.h>

using namespace std;


int main()

{   long long int x=0;
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {
            long long int a=0,s=0,r,b=0;
            a = i * j;
            b = a;

            while(a>0)
            {
                r = a % 10;
                a = a / 10;
                s = s*10 + r;
            }

            if(s==b)
            {
                if(s>x)
                {
                    x = s;
                }
            }
        }
    }

    cout << x;

   return 0;
}
