/// week 07-1.cpp 像畫星星一樣
/// 畫出超大正方形 數字包起來
/// TAICA 交大基礎程式設計(C++) 期中考題
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; ///part1.input
    cin >> n;

    for(int i=1; i<n*2; i++){///part2. Output
        for(int j=1; j<n*2; j++) {
            /// 印出來後 發現中心的1很有意思
            int d = max(abs(i-n),abs(j-n));
            cout << d + 1;
        }
        cout << endl; /// 樓層的概念
    }
}
