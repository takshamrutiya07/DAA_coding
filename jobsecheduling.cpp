#include <bits/stdc++.h>
using namespace std;
struct Job{
    int id;
    int profit;
    int deadline;
};
void scheduleJobs(vector<Job>&jobs)
{
    sort(jobs.begin(),jobs.end(),[](Job &a,Job &b){
        return b.profit>a.profit;
    });
    int maxSlot=0;
    for(int i=0;i<jobs.size();i++)
    {
        maxSlot = max(maxSlot,jobs[i].deadline);
    }
    int slots[maxSlot]={0};
    int totalprofit = 0;
    for(auto j:jobs)
    {
        for(int i=j.deadline-1;i>-1;i--)
        {
            if(slots[i] == 0)
            {
                slots[i] = j.id;
                totalprofit += j.profit;
                break;
            }
        }
    }
    cout<<endl<<"Total Profit is : "<<totalprofit<<endl;
    cout<<"Allocated space : ";
    for(auto i:slots)cout<<i<<" ";
}
int main()
{
    vector<Job>jobs={
        {1,30,3},{2,10,2},{3,20,1},{4,40,1}
    };
    scheduleJobs(jobs);
    return 0;
}