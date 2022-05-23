#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin>>n;
    
    long int sum=0;
    if(n>=1 && n<=1000000000)
    {
        sum = (n*(n+1))/2;
        cout<<sum;
    }
    else
    exit(0);

    return 0;
}