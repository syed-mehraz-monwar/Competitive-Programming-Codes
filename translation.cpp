#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    string s_rev = s;
    reverse(s_rev.begin(),s_rev.end());
    if(t == s_rev){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}