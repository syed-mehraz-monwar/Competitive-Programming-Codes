#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> colors;
    int s;
    for (int i = 0; i < 4; i++) {
        cin >> s;
        colors.insert(s);
    }
    cout << 4 - colors.size() << endl;
    return 0;
}
