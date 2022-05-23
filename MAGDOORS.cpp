#include<bits/stdc++.h>

using namespace std;


// string conversion(string a){
//     int l = a.length();

//     for(int j = 0; j < l; j++)
//     {
//         if(a[j] == '0')
//         {
//             a[j] = '1';
//         }
//         else if(a[j] == '1')
//         {
//             a[j] = '0';
//         }
//     }
//     // cout<<a<<endl;
//     // return a;
// }

int main(){

    int t;
    cin>>t;
    while(t--){
           
    string a;

    cin>>a;

    int length = a.length();
    int count = 0;

    if(a[0]== '0')
    {
        count = count + 1;
    }
    for(int i = 1 ; i < length; i++){
        if(a[i]!=a[i-1])
        count = count + 1;
    }

        
        cout<<count<<endl;
    
    }
    return 0;
}