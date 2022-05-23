#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>200 || n<1)
    exit(0);

    int a=1;
    int b=n-1;
    while(n--)
    {
        for(int i=b;i>0;i--)
        {
            cout<<" ";
        }
        b--;
        for(int i=1;i<=a;i++){
            cout<<"*";
        }
        a++;
        cout<<endl;
    }



    return 0;

}