#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            ans++;
        }
        else{
            ans = ans;
        }
    }
    cout << ans << endl;
    return 0;
}