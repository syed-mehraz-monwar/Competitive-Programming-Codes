#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string line;
    cin >> line;
    sort(line.begin(),line.end());
    int size = line.size();
    int s=0;
    for(int i=size/2;i<size;i++){
        if(s != 0){
            cout << "+";
        }
        cout << line[i];
        s = 1;
    }
    return 0;
}