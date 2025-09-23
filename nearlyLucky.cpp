#include<iostream>
using namespace std;
int main(){
    int luck_count=0;
    string numStr;
    cin >> numStr;
    for(char ch : numStr){
        if(ch == '4' || ch == '7'){
            luck_count ++;
        }
    }
    if(luck_count == 4 || luck_count == 7){
        cout << "YES" << endl;
    }
    else{
         cout << "NO" << endl;
    }
    return 0;
}