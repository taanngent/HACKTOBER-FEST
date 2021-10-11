#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
#define ll long long
#define u unsigned
#define ull u ll
#define vi vector<ll>
#define vc vector<char>
#define MOD 1000000007
#define pb push_back
#define pop pop_back
#define umap unordered_map
#define mp make_pair
#define fill(a,k) memset(a,k,sizeof(a))
#define F first
#define S second

ll mod(ll k)
{
    if(k<0)
        return(-k);
    else
        return(k);
}

ll modI(ll a, ll m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}

int main()
{
// freopen("input.txt","r",stdin);// input from input.txt
//freopen("output.txt","w",stdout);// output into output.txt

 int t;
 cin>>t;
 while(t--)
 {
int h,m;
cin>>h>>m;
int ans=0;
if(m==0)
{

    ans+=(24-h)*60;
}
else
{
    ans+=(23-h)*60+(60-m);
}

cout<<ans<<"\n";
}
 return(0);


}
