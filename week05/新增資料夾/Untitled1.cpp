/// week05-2.cpp
/// ���x stringstream
#include <iostream> /// cin, cout, getline
#include <sstream> /// stringstream �ݭn�L
#include <string> /// �ڭ̪��r�� string
using namespace std;
int main()
{
    cout <<"�п�J�@�q�^��, �̭��i���Ů�: ";
    string s; /// �r��S
    getline(cin, s); ///�@��Ū�J�@���,��JS
    cout << "Ū��FS�r��:" << s << endl;

    stringstream ss(s);
    string word;
    while ( ss >> word ){
        cout << "���@�Ӧr: " << word << endl;
    }
}
