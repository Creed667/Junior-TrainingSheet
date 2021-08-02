#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
using LL = long long;
using ull = unsigned long long int;

void solve(){
   int up=0,low=0;
   string s;
   cin>>s;
   for(int i=0;i<s.length();i++){
       if(s[i]>='A'&&s[i]<='Z') up++;
       else low++;
   }
   if(low>=up)
     for(int i=0;i<s.length();i++){
       if(s[i]>='A'&&s[i]<='Z') s[i] +=32;
   }
   else 
   for(int i=0;i<s.length();i++){
       if(s[i]>='a'&&s[i]<='z') s[i] -=32;
   }
       cout<<s<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}