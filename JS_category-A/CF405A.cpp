#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
using LL = long long;
using ull = unsigned long long int;

void solve(){
    int n;
    int a[103];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}