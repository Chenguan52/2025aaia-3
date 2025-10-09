/// week05-2.cpp
/// 熟悉 stringstream
#include <iostream> /// cin, cout, getline
#include <sstream> /// stringstream 需要他
#include <string> /// 我們的字串 string
using namespace std;
int main()
{
    cout <<"請輸入一段英文, 裡面可有空格: ";
    string s; /// 字串S
    getline(cin, s); ///一次讀入一整行,放入S
    cout << "讀到了S字串:" << s << endl;

    stringstream ss(s);
    string word;
    while ( ss >> word ){
        cout << "有一個字: " << word << endl;
    }
}
