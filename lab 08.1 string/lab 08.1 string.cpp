#include <iostream>
#include <string>
using namespace std;

int FindFourthDotFromEnd(const string& s) {
    int dotCount = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 4) {
                return i;  // ��������� ������ �������� ������ � ����
            }
        }
    }
    return -1;  // ���� ���� �������� ������
}

string ReplaceDots(string& s) {
    size_t pos = 0;
    while ((pos = s.find('.', pos)) != string::npos) {
        s.replace(pos, 1, "**");
        pos += 2;  // ���������� �� ��� ���������� ������
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // �������� 1: ������ ������ �������� ������ � ����
    int index = FindFourthDotFromEnd(str);
    if (index != -1) {
        cout << "Index of the fourth dot from the end: " << index << endl;
    }
    else {
        cout << "There are less than four dots in the string." << endl;
    }

    // �������� 2: ������� ����� ������ �� �� ������
    string modifiedStr = ReplaceDots(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
