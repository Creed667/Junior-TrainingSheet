#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
using LL = long long;
using ull = unsigned long long int;

void solve(){
    int a,b;
    int y=0,n;
    cin>>a>>b;
    while (a<=b)
    {
       a=a*3;
       b=b*2;
       y++;
    }
    cout<<y<<NL;
    
}

int main()
{
    fastio;
    solve();
    return Monke;
}