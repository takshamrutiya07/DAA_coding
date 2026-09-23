#include<bits/stdc++.h>
using namespace std;

long long karatsuba(long long x,long long y)
{
    if(x<10 || y<10)
    return x*y;

    int digitx = to_string(x).length();
    int digity = to_string(y).length();

    int n=max(digitx,digity);
    int m=n/2;

    long long power = pow(10,m);
    long long a = x/power;
    long long b = x % power;
    long long c = y/power;
    long long d = y % power;

    long long ac = karatsuba(a,c);
    long long bd = karatsuba(b,d);
    long long abcd = karatsuba((a+b),(c+d))-ac-bd;

    return (ac * power*power + bd + abcd*power);

}

int main()
{
    long long x,y;
    cout<<"Enter the Number x and y : ";
    cin>>x>>y;
    cout<<karatsuba(x,y);
    return 0;

}