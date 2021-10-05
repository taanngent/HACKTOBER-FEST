
#include<iostream>


using namespace std;

int main (){
    int x=0,n;
    string inp;

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> inp;
        if (inp.compare(1,1,"+")==0){
            x++;
        }
        else {
            x--;
        }
    }
    cout << x;
    return 0;


}
/*
inp.compare(1,1,"+")
*/
