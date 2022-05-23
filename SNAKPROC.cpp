#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    
        int n;
        cin>>n;
        char s[n];

        for(int i = 0 ; i < n; i++)
        {
            cin>>s[i];
        } 
        int t = 0;
        int h =  0;
        int flag = 0;
        int dot = 0;
        for(int i = 0 ; i < n; i++)
        {
            if(s[i] == 'H')
            {
                h = h + 1;
            }
            if(s[i] == 'T')
            {
                t = t + 1;
            }
            if(s[i]== '.')
            dot = dot + 1;
            if( t > h || (h-t > 1))
            {
                flag = 1;
            }
        }

        if(h == t && flag == 0)
        cout<<"Valid"<<endl;
        else if(dot == n)
        cout<<"Valid"<<endl;
        else if(flag == 1)
        cout<<"Invalid"<<endl;
        else
        cout<<"Invalid"<<endl;
    }
    return 0;
}