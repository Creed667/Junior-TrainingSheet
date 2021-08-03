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
    int n,sum=0,x,cnt=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0) sum+=x;
        else {
        if(sum==0)
         cnt++;
        else sum--;
        }
    }
    cout<<cnt<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}