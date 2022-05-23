#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    int n,m;
    

    cin>>n>>m;
    int x, y;
    cin>>x>>y;
    char s[m];
    for(int g= 0; g < n; g++){

        int countF = 0;
        int countP = 0;

        for(int i = 0 ; i < m; i++){
            cin>>s[i];
            if(s[i]=='P')
            {
                countP += 1;
            }
            else if(s[i]=='F')
            {
                countF += 1;
            }
        } 
        if(countF >= x )
        {
            cout<<"1";
        }
        else if(countF == x-1 && countP >= y )
        {
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        
    }
    
    cout<<endl;
    }
    return 0;
}