#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        if(l<=3){
            cout<<"Error"<<endl;
        }
        else{
            if(s[0]=='<' && s[1]=='/' && s[l-1]=='>'){
                bool flag=true;
                for(int i=2; i<l-1; i++){
                    if((s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9')){
                        continue;
                    }
                    flag=false;
                }
            if(flag){
                cout<<"Success"<<endl;
            }
            else{
                cout<<"Error"<<endl;
            }
          }
          else{
            cout<<"Error"<<endl;
            }
        }
    }
    return 0;
}

