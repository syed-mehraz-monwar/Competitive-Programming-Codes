#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,s=0;
    cin >> x;
    if(x<=5){
        s = 1;
    }
    if(x%5 == 0){
        s = x/5;
    }
    else{
        s = (x/5) + 1;
    }
    cout << s << endl;
    return 0;
}