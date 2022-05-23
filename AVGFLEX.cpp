//usecpptemp
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;

        cin>>n;

        int a[n];
        int count = 0;
        int sum = 0 ;
        int scoreLessOrEqual;
        int scoreGreat;
        for(int i = 1 ; i<=n; i++)
        {
            cin>>a[i];
        }

        for(int i = 1 ; i <= n; i++)
        {           scoreLessOrEqual = 0;
                    scoreGreat = 0;
                for(int j = 1; j <= n ; j++)
                {
                    if(i!=j){
                        if(a[j]>a[i])
                    {
                        scoreGreat += 1;
                    }
                    if(a[j]<=a[i])
                    {
                        scoreLessOrEqual += 1;
                    }
                    }
                    
                    
                }

                if(scoreLessOrEqual >= scoreGreat )
                count += 1;
        }

        cout<<count<<endl;
    }
    return 0;
}