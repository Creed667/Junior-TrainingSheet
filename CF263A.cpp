#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
using LL = long long;
using ull = unsigned long long int;

int main()
{
   int a[7][7];
   int n,m;
  for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
          cin>>a[i][j];
          if(a[i][j]) {
              n = i;
              m =j;
          }
      }
  }
  cout<<abs(n-3)+abs(m-3)<<NL;
}