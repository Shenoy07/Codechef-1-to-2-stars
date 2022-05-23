#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        string s;
        
        cin>>n>>s;

        string copy = s;
        string x = s;
        int count = 0;
        for(int i = 1; i<=n; i++)
        {
            if(s[i]!=s[i-1])
            {
                count = count + 1;
            }
        }

        
        cout<<count<<endl;
        

    }
    return 0;
}