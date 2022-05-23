#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
    
    string a;
    int x;
    cin>>x;
    cin>>a;

    int countOfC = 0;
    int countOfN = 0;

    for(int i = 0;i<14;i++)
    {
        if(a[i]=='C')
        countOfC = countOfC + 1;
        
        if(a[i]=='N')
        countOfN = countOfN + 1;
        
        if(a[i]=='D'){
        countOfC = countOfC + 1;
        countOfN = countOfN + 1;
        } 
    }

    if(countOfC > countOfN)
    cout<<60*x<<endl;

    if(countOfC < countOfN)
    cout<<40*x<<endl;

    if(countOfC == countOfN)
    cout<<55*x<<endl;

    }
    
    return 0;
}

