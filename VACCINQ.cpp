#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;

    cin>>t;

    while(t--){

        int n,p,x,y;

        // x minutes to vaccinate a child
        // y minutes to vaccinate an elderly
        // p is the location of chef who is elderly
        // 0 is for child
        // 1 is for elderly
        cin>>n>>p>>x>>y;

        int a[n];

        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        int time = 0;

        for(int i = 1; i <= p ; i++)
        {
            if(a[i]==1)
                time = time + y;

            if(a[i]==0)
                time = time + x;
        }

                cout<<time<<endl;

    }

    return 0;
}