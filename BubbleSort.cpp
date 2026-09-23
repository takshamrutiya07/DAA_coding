#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the index - "<<i<<" element :- ";
        cin>>a[i];
    } 
    for (int j = 0; j< n-1; j++)
    {   
        bool isSwap = false;
        for (int k = 0; k < n-1-j; k++)
        {
            if(a[k]>a[k+1]){
                int temp= a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
        if(!isSwap)break;  
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

