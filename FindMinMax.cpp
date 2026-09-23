#include<iostream>
using namespace std;
pair<int,int>MinMaxElement(int a[],int size)
{
    int min=a[0];
    int max=a[0];
    for(int i=0;i<size;i++)
    {
        if(max<a[i])max=a[i];
        else if(min>a[i])min=a[i];
    }
    return {min,max};
}
int main()
{
    int size;
    cout<<"Enter the Size :";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    // int min=a[0];
    // int max=a[0];
    // for(int i=0;i<size;i++)
    // {
    //     if(max<a[i])max=a[i];
    //     else if(min>a[i])min=a[i];
    // }
    // cout<<"Min : "<<min<<","<<"Max : "<<max;
    pair<int,int>MinMax = MinMaxElement(a,size);
    cout<<"Min : "<<MinMax.first<<","<<"Max : "<<MinMax.second;
    return 0;
}