/// week05-3 p2 output
/// p3 stringstream p4 reverse�ϹL�� p5�����Y+���[
/// CPE �ĤG�D UVA 483 �˹L��
#include <iostream>
#include <sstream>///p3
#include <algorithm>///p4:reverse�t��k
using namespace std;
int main()
{
    string line; /// �@��r���r�� p1 INPUT
    while ( getline(cin, line) ){ ///Ū�i��
        stringstream ss(line); ///P3 ��stringstream �_�r
        string word;/// �r��o��
        ss >> word; ///
        reverse( word.begin(), word.end() );
        cout << word ; /// �����Y�S���Ů�
        while ( ss >> word ) {/// P3: �� ss �_�r
            reverse(word.begin(), word.end() );///P4
            cout<< " " << word;///���[
            ///cout << "Ū��F" << word << endl;///p3
        }
        cout << endl;///cout << line << endl; /// Part 2: Output
    }
}
