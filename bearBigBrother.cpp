#include<iostream>
using namespace std;
int main(){
    int a,b,y=1;
    cin >> a >> b;
    while((3*a)<=(2*b)){
        a=3*a;
        b=2*b;
        y++;
    }
    cout << y << endl;
    return 0;
}