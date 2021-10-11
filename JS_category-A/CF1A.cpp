#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double n,m,a;
    cin>>n>>m>>a;
    unsigned long long  n1 = ceil(n/a);
    unsigned long long  n2= ceil(m/a);

    cout<<(n1*n2)<<endl;
    return 0;
}