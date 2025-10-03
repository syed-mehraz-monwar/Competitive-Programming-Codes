#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    string prev,now;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> now;
        if(i == 0 || now != prev){
            count++;
        }
        prev = now;
    }
    cout << count << endl;
    return 0;
}