#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    unsigned long long n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='T') {
            sum+=4;
        }
        else if(s[0]=='C') sum+=6;
        else if(s[0]=='O') sum+=8;
        else if(s[0]=='D') sum+=12;
        else sum+=20;
        }
        cout<<sum<<endl;
    return 0;
}