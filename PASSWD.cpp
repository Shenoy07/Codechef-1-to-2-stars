#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;

        cin>>s;
        int small,big,number,sc = 0;

        string ans = "NO";

        if(s.length()>=10){
            for(int i = 0 ; i < s.length()-1; i++){
                if(s[i] >= 'a' && s[i] <= 'z')
                small = 1;
                if( i > 0 && i < s.length()-1)
                {
                    if(s[i] >= 'A' && s[i] <='Z')
                    big = 1;

                    if(s[i] >= '0' && s[i] <= '9')
                    number = 1;

                    if(s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?' )
                    sc = 1 ;
                }
            }
            
        }
        if(small > 0 && big > 0  && number > 0 && sc == 4)
        ans = "YES";

        cout<<ans<<endl;
        
        
    }
    return 0;
}