#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
   string s;
   cin>>n;
   for(int i=0;i<n;i++){
   cin>>s;
   m=s.length();
   if(m>10) {

    cout<<s[0]<<(s.length()-2)<<s[m-1]<<endl;
   }
   else cout<<s<<endl;

   }
     return 0;
}