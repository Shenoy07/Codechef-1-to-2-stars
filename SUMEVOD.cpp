#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    long int even = 0;
    long int odd  = 0;
    cin>>n;
    
    if(n<1 || n>1000000)
    exit(0);

    even = n*(n+1);
    odd = n*n;
    cout<<odd<<" "<<even;

    return 0;
}