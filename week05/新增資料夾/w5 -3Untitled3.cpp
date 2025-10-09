/// week05-3 p2 output
/// p3 stringstream p4 reverse反過來
/// CPE 第二題 UVA 483 倒過來
#include <iostream>
#include <sstream>///p3
#include <algorithm>///p4:reverse演算法
using namespace std;
int main()
{
    string line; /// 一行字的字串 p1 INPUT
    while ( getline(cin, line) ){ ///讀進來
        stringstream ss(line); ///P3 用stringstream 斷字
        string word;/// 字放這裡
        while ( ss >> word ) {/// P3: 用 ss 斷字
            reverse(word.begin(), word.end() );///P4
            cout << "讀到了" << word << endl;///p3
        }

        cout << line << endl; /// Part 2: Output
    }
}
