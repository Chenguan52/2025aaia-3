//week02-3.cpp 使用c++2011年新版的字串 stoi()功能
//在 codeblocks 裡 必須開啟settings-Complier... 把 c++11 打勾勾
// SOTT106 ADVANCE_001 Using C++
#include <iostream> // cin cout
#include <string> //string 字串的功能
using namespace std; // 使用命名空間標準的std
int main()
{
	string a;/// 宣告字串a
	cin >> a;/// 讀入字串a

	string ans;///宣告字串 ans 放答案用的
	int N = a.length();///字串a的長度
	for(int i=N-1; i>=0; i--){///倒過來的迴圈
            ans += a[i];
	}

	cout << a << "+" << stoi(ans) << '='
		 << stoi(a) + stoi(ans) << endl;

} // stoi() is "string to int"
