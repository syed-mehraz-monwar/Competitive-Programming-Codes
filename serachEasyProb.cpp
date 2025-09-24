#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> r;
        sum +=r; 
    }
    if(sum>0){
        cout << "HARD";
    }
    else{
        cout <<"EASY";
    }
    return 0;
}