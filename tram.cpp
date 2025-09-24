#include<iostream>
using namespace std;
int main(){
    int n,a,b,cap=0;
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        sum = (sum - a) + b;
        if(sum>cap){
            cap = sum;
        }
    }
    cout << cap << endl;
    return 0;
}