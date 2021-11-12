#include <iostream>
#include<fstream>;
#include<string>;
using namespace std;

int main() {
    ifstream fin;
    string s;

    fin.open("tfile.txt");
    if (!fin)
    {
        cout << "no file" << endl;
        return 0;
    }

    while (!fin.eof()) {
        fin >> s;
    }
    fin.close();

        int ls = s.length();
        int r = 0;

        for (int i = 0; i < ls; i++) {
            cout << s[i] << endl;
        }
        cout << ' ' << endl;

        for (int i = 0; i < ls; i++) {
            if (s[i] == s[ls-i-1]) {
                r++;
            }
        }
        if (r == ls) cout<< "yes" << endl;
        else cout << "no" << endl;

    return 0;
}