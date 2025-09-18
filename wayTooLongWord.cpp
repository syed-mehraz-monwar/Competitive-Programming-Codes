#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string s;
    if(n>=1 && n<=100){
        for(int i=1;i<=n;i++){
            cin >> s;
            if(s.size()>10){
                int len = s.size() - 2;
                cout << s.front() << len << s.back() << endl;
            }
            else{
                cout << s << endl;
            }
        }
    }
    else{
        return 1;
    }
    return 0;
}