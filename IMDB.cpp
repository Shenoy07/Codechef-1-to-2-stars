#include<iostream>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){


        int n , x;

        cin>>n>>x;

        int rating = 0;

        int s, r;

        for(int i = 0; i < n; i++){
            cin>> s >> r;
            if((x-s)>=0 && r > rating){
                rating = r;
            }
        }
        cout<<rating<<endl;

    }
    return 0;
}