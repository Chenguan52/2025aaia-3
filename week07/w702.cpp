/// week 07-1.cpp ���e�P�P�@��
/// �e�X�W�j����� �Ʀr�]�_��
/// TAICA ��j��¦�{���]�p(C++) �������D
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; ///part1.input
    cin >> n;

    for(int i=1; i<n*2; i++){///part2. Output
        for(int j=1; j<n*2; j++) {
            /// �L�X�ӫ� �o�{���ߪ�1�ܦ��N��
            int d = max(abs(i-n),abs(j-n));
            cout << d + 1;
        }
        cout << endl; /// �Ӽh������
    }
}
