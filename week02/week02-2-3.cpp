//week02-3.cpp �ϥ�c++2011�~�s�����r�� stoi()�\��
//�b codeblocks �� �����}��settings-Complier... �� c++11 ���Ĥ�
// SOTT106 ADVANCE_001 Using C++
#include <iostream> // cin cout
#include <string> //string �r�ꪺ�\��
using namespace std; // �ϥΩR�W�Ŷ��зǪ�std
int main()
{
	string a;/// �ŧi�r��a
	cin >> a;/// Ū�J�r��a

	string ans;///�ŧi�r�� ans �񵪮ץΪ�
	int N = a.length();///�r��a������
	for(int i=N-1; i>=0; i--){///�˹L�Ӫ��j��
            ans += a[i];
	}

	cout << a << "+" << stoi(ans) << '='
		 << stoi(a) + stoi(ans) << endl;

} // stoi() is "string to int"
