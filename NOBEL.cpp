// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main(){

//     ll t;
//     cin>>t;
//     while(t--){

//         ll m, n;

//         cin>>n>>m;
//         ll a[m];
//         ll number;
        
//         for(int i = 1; i <= n; i++)
//         {
//             cin>>number;
//             a[number] = 1;
//         }

//         // for(int i = 0; i < n; i++)
//         // {
//         //     cout<<a[i]<<" ";
//         // }
//         // cout<<endl;

//         int flag = 0;
//         for(int i = 1; i <= n && flag == 0; i++)
//         {
//             if(a[i]!=1)
//             {
//                 flag = 1;
//                 a[i] = 0;
                
//             }
//             a[i] = 0;
//         }


//         if(flag ==0)
//         cout<<"NO"<<endl;
//         else
//         cout<<"YES"<<endl;

//     }
//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n, m;

        cin>>n>>m;

        vector<bool> taken(m,false);

        while(n--)
        {
            ll topic;
            cin>> topic;
            topic--;
            taken[topic] = true;
        }
        bool poss = false;
        for(int i = 0; i < m; i++)
        {
            if(!taken[i])
            poss = true;
        }


        if(poss)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}