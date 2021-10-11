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
    LL n,hE,hO,sumO,sumE;
    cin>>n;
    if(n%2==0) {
   hE =n/2;
   hO = n/2;
    }
    else{
        hE = n/2;
        hO= (n/2)+1;
    } 
    sumE = (hE*(hE+1));
    sumO = (-1*(hO*hO));
    //cout<<sumO<<NL;
   cout<<sumO+sumE<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}