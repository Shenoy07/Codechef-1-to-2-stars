// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
//     int n;
//     cin>>n;
//     string b;
//     for(int i = 0 ; i < n; i++){
//         cin>>b;
//         sort(b.begin(), b.end());
//         if(s.compare(b) == 0)
//         cout<<"Yes"<<endl;
//         else{
//             cout<<"No"<<endl;
//         }
//     }



//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int n;
    cin>>n;

    bool isKnown[26] = { 0 };
    for(char c:s)
    isKnown[c -'a'] = true;

    while(n--){
        string w;
        cin>>w;

        bool ans = 1;

        for(char c:w){
            if(!isKnown[c - 'a'])
            ans = false;
        }

        if (ans)cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }   
    return 0;
}