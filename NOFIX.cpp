#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int count = 0;
        int x = 0;

        for(int i = 0; i<n;i++)
        cin>>a[i];

        for(int i = 0; i<n;i++)
        {
            x  = i+count+1;
            if(x==a[i]){
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}