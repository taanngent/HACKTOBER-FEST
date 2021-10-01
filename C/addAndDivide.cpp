#include <bits/stdc++.h>

using namespace std;
int main(){
    int t,tt;
    cin >> tt;
    t=tt;
    int arr[t];
    while (t>0){
        t--;
        int a,b,n,count=0;
        cin >> a >> b;
        while(1){
            if(b<a){
                n=a/b;
                a=n;
            }
            else if (b=a){
                b=b+1;
            }
            else if (b>a){
                arr[t]=count;
                break;
            }
            count++;
        }
    }
    for (int i=t;i>=0;i--){
        cout << arr[i];
    }

    return 0;
}
