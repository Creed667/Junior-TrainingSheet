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
    int n,x,i,j,s=0,d=0,sf=1;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
     cin>>x;
     v.push_back(x);
    }
    i=0;j=n-1;
     while (i<=j)
     {
         if(v[i]>=v[j]){
          if(sf){
              s+=v[i];
          }
          else {
              d+=v[i];
          }
          i++;
         }
         else {
             if(sf){
                 s+=v[j];
            
             }
             else {
                 d+=v[j];
             }
             j--;
         }
         if(sf) sf =0;
         else sf=1;
     }
    cout<<s<<" "<<d<<NL; 
}

int main()
{
    fastio;
    solve();
    return Monke;
}