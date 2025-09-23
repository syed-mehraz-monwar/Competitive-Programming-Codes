#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin >> name;
    unordered_set<char> s;
    for(int i=0;i<name.size();i++){
        s.insert(name[i]);
    }
    int size = s.size();
    if(size%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}