#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    string x1;
    cin >> n;
    if(n>=1 && n<=150){
        for(int i=1;i<=n;i++){
            cin >> x1;
            if(x1 == "++X" || x1 == "X++"){
                ++x;
            }
            else if(x1 == "X--" || x1 == "--X"){
                --x;
            }
            else{
                return 1;
            }
        }
    }
    cout << x << endl;
    return 0;
}