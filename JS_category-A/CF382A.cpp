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
   string s,s2,left,right;
   int lft=0,rg=0,dif,flag=1,f=1;
   cin>>s>>s2;
   int i=0;
    while (s[i]!='|')
    {
     i++;
    }
    lft=i;
    rg = s.length()-lft-1;
    for(int j=0;j<lft;j++) left+=s[j];
    for(int j=lft+1;j<s.length();j++) right+=s[j];
    //cout<<left<<" "<<right<<NL;
    int leftL = left.length();
    int rightL= right.length();


    if(leftL==rightL && (s2.length()%2!=0)) cout<<"Impossible"<<NL;

    else if(rightL>=leftL){
     dif = rightL-leftL;
    if(dif<=s2.length()){
      if((s2.length()-dif)%2!=0) {
        cout<<"Impossible"<<NL;
        f=0;
      }
      else {
        for(int j=0;j<dif;j++) left+=s2[j];
        //leftL = left.length();
        for(int j=dif;j<s2.length();j++){
         if(flag) left+=s2[j];
         else right+=s2[j];
         if(flag) flag=0;
         else flag=1;
        }
      }
      if(f) cout<<left<<"|"<<right<<NL;
    }
    else cout<<"Impossible"<<NL;
    }

    else if(leftL>=rightL){
     dif = leftL-rightL;
    if(dif<=s2.length()){
      if((s2.length()-dif)%2!=0) {
        cout<<"Impossible"<<NL;
        f=0;
      }
      else {
        for(int j=0;j<dif;j++) right+=s2[j];
        //leftL = left.length();
        for(int j=dif;j<s2.length();j++){
         if(flag) left+=s2[j];
         else right+=s2[j];
         if(flag) flag=0;
         else flag=1;
        }
      }
       if(f)  cout<<left<<"|"<<right<<NL;
    }
    else cout<<"Impossible"<<NL;
    
    }
}

int main()
{
  fastio;
  solve();
  return Monke;
}