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
    int n,cnt=0;
    cin>>n;
    vector<pair<int,int>>v;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==j) continue;
           if(v[i].first==v[j].second) cnt++;
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