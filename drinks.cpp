#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    double p,d,sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> p;
        p = p/100;
        sum += p;
    }
    d = sum/n;
    d = d*100;
    cout << setprecision(12) << d << endl;
    return 0;
}