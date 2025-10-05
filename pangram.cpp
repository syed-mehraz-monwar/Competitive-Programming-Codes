#include <iostream>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    set<char> letters;
    for (char ch : s) {
        if (isalpha(ch)) {
            letters.insert(tolower(ch));
        }
    }

    cout << (letters.size() == 26 ? "YES" : "NO") << endl;
    return 0;
}
