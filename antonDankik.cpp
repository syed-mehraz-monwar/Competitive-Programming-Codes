#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int anton=0,danik=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'A'){
            anton ++;
        }
        else if(s[i] == 'D'){
            danik++;
        }
    }
    if(anton > danik){
        cout << "Anton" << endl;
    }
    else if(anton < danik){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}