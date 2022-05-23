#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

    int n, w;

    cin>>n>>w;

    int a[n];
    int sum = 0;
    int number = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a, a + n, greater<int>());

    // for(int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int flag = 0;
    for(int i = 0 ; i < n && flag == 0; i++)
    {
        sum = sum + a[i];

        if(sum>=w)
        {
            number = n - i - 1;
            flag = 1;
        }
    }

    cout<<number<<endl;

    }
    return 0;
}