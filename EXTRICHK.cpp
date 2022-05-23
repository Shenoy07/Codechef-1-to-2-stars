#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,c;

    cin>>a>>b>>c;
    
    if(a+b > c && b+c > a && a+c >b){
        if((a==b && b==c) || (b==c && c==a)||(c==b && b==a))
    {
        cout<<1;
        exit(0);
    }
    else if((a==b)||(b==c)||(c==a))
    {
        cout<<2;
        exit(0);
    }
    else{
        cout<<3;
        exit(0);
    }
    
    
    }
    else
    {
        cout<<-1;
        exit(0);
    }
    


    return 0;
}