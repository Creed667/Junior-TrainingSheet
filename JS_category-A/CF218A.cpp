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
    int n,k;
    cin>>n>>k;
    n = (2*n)+1;
    vector<int>v;
    int x;
    forN(n){
    cin>>x;
    v.pb(x);
    }

    for(int i=0;i<v.size()-1;i++){
       if(i%2!=0 && k && (v[i-1]<(v[i]-1)) && ((v[i]-1)>v[i+1])){ 
        cout<<v[i]-1<<" ";
        k--;
       continue;
       }
       cout<<v[i]<<" ";

    }
    cout<<v[v.size()-1];
    cout<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}