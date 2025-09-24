#include<iostream>
using namespace std;
int main(){
    int n,h,a,w=0;
    cin >> n >> h;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a<=h){
             w = 1;
             sum += w;
    }
        else if(a>h){
             w = 2;
             sum += w;
    }
    }
    cout << sum << endl;
    return 0;
}