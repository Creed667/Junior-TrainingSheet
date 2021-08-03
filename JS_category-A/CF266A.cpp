#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
using LL = long long;
using ull = unsigned long long int;

void solve(){
    int n,cn=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++){
        while (s[i]==s[i+1])
        {
            cn++;
            i++;
        }  
    }
    cout<<cn<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}