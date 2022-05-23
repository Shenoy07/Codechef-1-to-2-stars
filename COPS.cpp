#include<bits/stdc++.h>

using namespace std;

int main(){


    int t;

    cin>>t;

    while(t--){

        int M, x, y;

        cin>>M>>x>>y;

        int cops[M];

        for (int i = 0; i < M; i++)
        {
            cin>>cops[i];
        }
        
        int housesCovered = x*y;
        
        int count = 0;
        
        for(int i = 1; i<=100;i++)
        {
            bool isSafe = true;
            for(int j =0;j<M;j++)
            {
                int leftRange = max(cops[j] - housesCovered, 1);
                int rightRange = min(cops[j] + housesCovered, 100);

                if(i >= leftRange && i <= rightRange)
                    isSafe = false;
            }
            if(isSafe)
            count = count + 1;

        }
        cout<<count<<endl;

    }

    return 0;
}