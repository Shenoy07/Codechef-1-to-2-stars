#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        string s;

        cin>>s;

        int count = 0;
        string v;
        int n = s.length();

        for(int i = 0; i< s.length();i++)
        {
             v = s[i];
            s = s+v[i];

            if(s[n-i] == s[i])
                break;

                count++;
        }

        cout<<count<<endl;
    }
    return 0;
}