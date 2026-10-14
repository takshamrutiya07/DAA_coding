#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ccount = 0;
    cout<<"Enter count of coins : ";
    cin>>ccount;
    vector<int>coins(ccount,0);
    cout<<"Enter all coins value in sorted order(asc) : ";
    for(int i=0;i<ccount;i++)
    {
        cin>>coins[i];
    }
    int target = 0;
    cout<<"Enter target amount : ";
    cin>>target;

    vector<int>dp(target+1,INT_MAX-1);
    dp[0] = 0;
    for(int i=1;i<=target;i++)
    {
        for(int j=0;j<ccount;j++)
        {
            if(coins[j]<=i)
            {
                dp[i] = min(dp[i],1+dp[i-coins[j]]);
            }
        }
    }
    if(dp[target == INT_MAX-1])cout<<"We can not get target";
    else
    cout<<"Required coins is : "<<dp[target];
}