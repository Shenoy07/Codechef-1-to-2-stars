#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        
        string s;

        cin>>s;

        string b;

        cin>>b;
        int flag = 1;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == b[i] || s[i] == '?' || b[i] == '?')
            {
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }

    }
    return 0;
}