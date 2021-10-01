#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int w=(100-k);
	    int a=__gcd(k, w);
	    int m=k/a;
	    int h=w/a;
        int ans=m+h;
	    cout<<ans<<endl;
	}
    return 0;
}