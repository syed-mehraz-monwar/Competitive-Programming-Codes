#include<iostream>
using namespace std;
int main(){
    int k,n,w,b=0;
    cin >> k >> n >> w;
    int sum =0;
    for(int i=1;i<=w;i++){
        sum += i*k;
    }
    b = sum - n;
    if(b<0){
        b = 0;
    }
    else{
        b = b;
    }
    cout << b << endl;
    return 0;
}