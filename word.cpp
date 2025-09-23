#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string line;
    int up=0,low=0;
    cin >> line;
    for(char ch : line){
        if(isupper(ch)){
            up++;
        }
        else if(islower(ch)){
            low++;
        }
    }
    for(char ch : line){
        if(up <=low){
            ch = tolower(ch);
            cout << ch;
        }
        else if(up > low){
            ch = toupper(ch);
            cout << ch;
        }
    }
    return 0;
}
