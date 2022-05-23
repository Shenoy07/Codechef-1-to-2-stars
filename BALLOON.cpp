#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){
        int n;

        cin>>n;
        int a[n];
        int problem = 7;

        for(int i = 1 ; i <= n; i++)
        cin>>a[i];

        int b;

        for(int i = 1; i <= n & problem!=0; i++)
        {
            if(a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 4 || a[i] == 5 || a[i] == 6 || a[i] == 7 )
            {
                problem = problem - 1;
            }
            
            b = i;

        }

        cout<<b<<endl;
    }
    return 0;
}