#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int GCD( int n,int m)
{
    if (n=m)
        return m;
    else if (n>=m)
        return GCD(n-m,m);
    else
        return GCD(n,m-n);
}

int main()
{
    cout<<GCD(4,16)<<endl;
    return(0);
}
