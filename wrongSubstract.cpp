#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    if(n>=2){
        for(int i=0;i<k;i++){
            if(n%2==0 && n%5==0){
                n /= 10;
            }
            else{
                n--;
            }
        }
    }
    cout << n << endl;
    return 0;
}