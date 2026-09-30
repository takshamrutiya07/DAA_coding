#include<bits/stdc++.h>
using namespace std;
//price and weight;
int main(){
    int n;
    cout<<"How many Total items are there : ";
    cin>>n;
    vector<pair<int, int>>v = {{100,10},{250,20},{300,25},{210,30},{260,40},{350,50}};
    // vector<pair<int, int>>v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i].first;//entering price
    //     cin>>v[i].second;//entering weight
    // }
    int w;
    cout<<"Enter Capacity : ";
    cin>>w;
    vector<vector<int>> dp(n+1, vector<int>(w+1, 0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(v[i-1].second>j)
            dp[i][j] = dp[i-1][j];
            else if(v[i-1].second<=j)
            {
                dp[i][j] = max(dp[i-1][j],v[i-1].first+dp[i-1][j-v[i-1].second]);
            }
        }
    }
    cout<<"Maximum Profit : "<<dp[n][w];
    return 0;
}