#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n,k,s,ad=0;
     vector<int> a;
     cin >> n >> k;
     for (int i = 1; i <=n; i++){
         cin >> s;
         a.push_back(s);
     }
     for (int i = 0; i <n; i++){
         if (a[i] >= a[k-1] && a[i]>0)
         {
             ad++;
         }
     }
     cout << ad;
     return 0;
}