#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> give(n);
    vector<int> rec(n);
    for(int i=0;i<n;i++){
        cin >> give[i];
        rec[give[i] - 1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout << rec[i] << " ";
    }
    return 0;
}