#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times;
    cout<<"Enter How many times you wants rotation : ";
    cin>>times;
    cout<<"press 1 for left roatate otherwise press 0 : ";
    int press;
    cin>>press;
    int n ;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the index - "<<i<<" element :- ";
        cin>>a[i];
    }
    times = times%n;
    if(press==1)
    {
        reverse(a,a+n);
        reverse(a,a+n-times);
        reverse(a+n-times,a+n);
    }else{
        reverse(a,a+n);
        reverse(a,a+times);
        reverse(a+times,a+n);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}