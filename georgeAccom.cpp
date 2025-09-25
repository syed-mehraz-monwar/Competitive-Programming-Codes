#include<iostream>
using namespace std;
int main(){
    int n,p,q,room=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p >> q;
        if (q - p >= 2){
            room++;
        }
    }
    cout << room << endl;
    return 0;
}