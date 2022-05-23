#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    if(t<1 || t>10000)
    exit(0);

    while(t--){

        int n;
        cin>>n;
        if(n<1 || n > 100000)
        exit(0);

        int a[n];

        for(int i = 1; i <= n; i++)
        cin>>a[i];

        int max = *max_element(a+1,a+n+1);
        int min = *min_element(a+1,a+n+1);

        cout<< max - min<<endl;
        
        

    }
    return 0;
}