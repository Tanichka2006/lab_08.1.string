#include <iostream>
#include <string>
using namespace std;

int FindFourthDotFromEnd(const string& s) {
    int dotCount = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 4) {
                return i;  // Повертаємо індекс четвертої крапки з кінця
            }
        }
    }
    return -1;  // Якщо немає чотирьох крапок
}

string ReplaceDots(string& s) {
    size_t pos = 0;
    while ((pos = s.find('.', pos)) != string::npos) {
        s.replace(pos, 1, "**");
        pos += 2;  // Переходимо за межі вставлених зірочок
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // Завдання 1: Знайти індекс четвертої крапки з кінця
    int index = FindFourthDotFromEnd(str);
    if (index != -1) {
        cout << "Index of the fourth dot from the end: " << index << endl;
    }
    else {
        cout << "There are less than four dots in the string." << endl;
    }

    // Завдання 2: Замінити кожну крапку на дві зірочки
    string modifiedStr = ReplaceDots(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
