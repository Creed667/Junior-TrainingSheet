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


string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
   
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if (carry)
        str.push_back(carry+'0');
 
    reverse(str.begin(), str.end());
 
    return str;
}
void solve(){
  
}

int main()
{
  fastio;
  string x,y,ans,subans;

  while(cin>>x>>y){

  int current_dig,carry=0,mlt,ans_dig,cnt=1;
  for(int i=x.size()-1;i>=0;i--){
   current_dig= x[i]-'0';
    for(int j=y.size()-1;j>=0;j--){
      mlt = y[j]-'0';
      mlt = (current_dig*mlt)+carry;
    ans_dig = mlt%10;
    carry = mlt/10;
    subans+=ans_dig+'0';
    }
    if(carry!=0) subans+=carry+'0';
    carry=0;
    reverse(all(subans));
    
    if(i==x.size()-1) ans = subans;
    else{
     for(int k=0;k<cnt;k++) subans+='0';
      ans = findSum(subans,ans);
      cnt++;
    }
    subans.clear();
  }
  cout<<ans<<NL;
}
  return Monke;
}