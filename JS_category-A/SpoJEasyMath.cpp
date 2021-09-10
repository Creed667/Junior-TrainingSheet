#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

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

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(LL a,  LL b)
{
    return (a / gcd(a, b)) * b;
}



void solve(){
  LL n2,m,a,d,cnt1,cnt2,cnt3,cnt4,cnt5,ans;
  cin>>n2>>m>>a>>d;
  LL n3,n4,n5;
  if(a!=d){
  int n[6];
  n[0] =a;
  n[1] = a+d;
  n[2] = a+(2*d);
  n[3] = a+(3*d);
  n[4] = a+(4*d);
  vii v;
  LL Twosum=0,Threesum=0,foursum =0, fivesum=0;
  LL lc=0;

  for(int i=0;i<5;i++){
   for(int j=i+1;j<5;j++){
      lc= lcm(n[i],n[j]);
      (n2%lc==0)  ? Twosum += ((m/lc)-(n2/lc))+1 : Twosum += (m/lc) - (n2/lc);
   }
  }
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      for(int k=j+1;k<5;k++){
        lc= lcm(n[i],lcm(n[j],n[k]));
        (n2%lc==0)  ? Threesum += ((m/lc)-(n2/lc))+1 : Threesum += (m/lc) - (n2/lc);
      }
    }
  }
    for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      for(int k=j+1;k<5;k++){
       for(int l=k+1;l<5;l++){
        lc = lcm(n[i],lcm(n[j],lcm(n[k],n[l])));
        (n2%lc==0)  ? foursum += ((m/lc)-(n2/lc))+1 : foursum += (m/lc) - (n2/lc);
       }
      }
    }
  }
  lc = lcm(n[0],lcm(n[1],lcm(n[2],lcm(n[3],n[4]))));
  (n2%lc==0)  ? fivesum += ((m/lc)-(n2/lc))+1 : fivesum += (m/lc) - (n2/lc);

  (n2%n[0]==0) ? cnt1 = ((m/n[0])-(n2/n[0]))+1 : cnt1 = (m/n[0]) - (n2/n[0]);
  (n2%n[1]==0) ? cnt2 = ((m/n[1])-(n2/n[1]))+1 : cnt2 = (m/n[1]) - (n2/n[1]);
  (n2%n[2]==0) ? cnt3 = ((m/n[2])-(n2/n[2]))+1 : cnt3 = (m/n[2]) - (n2/n[2]);
  (n2%n[3]==0) ? cnt4 = ((m/n[3])-(n2/n[3]))+1 : cnt4 = (m/n[3]) - (n2/n[3]);
  (n2%n[4]==0) ? cnt5 = ((m/n[4])-(n2/n[4]))+1 : cnt5 = (m/n[4]) - (n2/n[4]);

  
  ans = ((m-n2)+1) - ((cnt1+cnt2+cnt3+cnt4+cnt5) - Twosum +Threesum-foursum +fivesum);

}
 else {
   (n2%a==0) ? cnt1 = ((m/a) - (n2/a))+1 : cnt1 = (m/a) - (n2/a);
   ans = ((m-n2)+1) - cnt1;
 }
   
  cout<<ans<<NL;
}

int main()
{
   fastio;
   tc(x)
   solve();
    cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return Monke;
}