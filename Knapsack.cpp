#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v = {{100, 10}, {250, 20}, {300, 25}, {210, 30}, {260, 40}, {350, 50}};

    sort(v.begin(), v.end(), [](pair<int, int> &p1, pair<int, int> &p2)
    { 
        return (p1.first * 1.0) / p1.second > (p2.first * 1.0) / p2.second; 
    });
    int capacity = 100;
    int i=0;
    int profit=0;
    while(v[i].second<=capacity)
    {
        profit += v[i].first;
        capacity -= v[i].second;
        i++;
    }
    if(capacity != 0)
    profit += ((v[i].first*1.0)/v[i].second)*capacity;//fractional knapsack
    cout<<"Maximum Profit is : "<<profit;
}