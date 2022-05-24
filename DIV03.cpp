#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        
        int a[11];
        int k;

        for(int i = 1 ; i <= 10; i++)  //input number of questions per difficulty for array 
        {
            cin>>a[i];
        }

        cin>>k;  //input number of problems to be deleted   
        int ans = 0;
        for(int i = 10; i >=1 ; i--){
            if(a[i]>k && a[i]!=0)
            {
                ans = i;
                break;
            }
            if(a[i] <=k && a[i]!=0)
            {
                k = k - a[i];
            }

        }
        cout<<ans<<endl;

    }
    return 0;
}