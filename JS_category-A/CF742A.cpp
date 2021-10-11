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
    int n,mlt=1;
    map<int,int>m;
    m[1] = 8;
    m[2] = 4;
    m[3] = 2;
    m[4] = 6;
    
    cin>>n;
    int l = n%4;
    if(l==0) l=4;
    if(n==0) cout<<1<<NL;
    else cout<<m[l]<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}