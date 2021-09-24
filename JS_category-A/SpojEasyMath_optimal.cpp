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
#include <numeric>
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

bool sortBySize(vector<int> a, vector<int> b){
return a.size()<b.size();
}

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
   LL  n,m,a,d,lc;
    cin>>n>>m>>a>>d;
    LL divisorSets[5];

    for(int i=0;i<5;i++) {
        divisorSets[i] = a+(i*d); //making sets of a,a+d,a+2d,a+3d,a+4d
    }

    LL sum=0,sum2=0,sum3=0,ans;
    
       for(int mask = 1; mask < (1 << 5); mask++){  //generating all possible subset
     vector<int>subset;
        for(int i = 0; i < 5; i++) {
            if(mask & (1 << i)) {
                subset.pb(divisorSets[i]); 
            }
        }
       lc = subset[0];
       for(int j=0;j<subset.size();j++){
        lc = lcm(lc,subset[j]);
       }
      (n%lc==0)  ? sum2 += ((m/lc)-(n/lc))+1 : sum2 += (m/lc) - (n/lc);
      if(subset.size() %2 == 0) sum-=sum2;
      else sum +=sum2;
      //applying PIE method of set 
      sum2 =0;
    }
  
    ans = ((m-n)+1) - sum;
    cout<<ans<<NL;
}

int main()
{
    fastio;
    tc(x)
    solve();
    return Monke;
}