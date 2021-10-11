#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
#define mp make_pair
#define pb push_back
#define forN(x) for(int i=0;i<x;i++)
#define vii vector<int>
#define vLL vector<long long>
using LL = long long;
using ull = unsigned long long int;
const int Monke = 0;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}

void solve(){
    vector<char> v[301];
    int f=1;
    int n;
    cin>>n;
    char x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>x;
        v[i].pb(x);
        }
    }
    char main = v[0][0];
    char sec = v[0][1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || j==(n-i-1)) {
                if(v[i][j]!=main) {
                    f=0;
                    break;
            }
            }
            else {
                if(v[i][j]!=sec) {
                    f=0;
                    break;
                }
            }
    }
    if(f==0) break;
    }
    if(sec==main) f=0;
    if(f) cout<<"YES"<<NL;
    else cout<<"NO"<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}