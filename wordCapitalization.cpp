#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string line;
cin >> line;
if(!line.empty()){
line[0] = toupper(line[0]);
}
cout << line << endl;
return 0;
}