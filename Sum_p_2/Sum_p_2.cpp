#include <iostream>
#include <list>
using namespace std;

void printList(const list<double>& L) {
    int count = 0;
    for (double value : L) {
        cout << value << " ";
        count++;
        if (count % 5 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int main() {
    list<double> L;

    int n;
    cout << "Input n: ";
    cin >> n;

    cout << "Input value:" << endl;
    double value;
    for (int i = 0; i < n; i++) {
        cin >> value;
        L.push_back(value);
    }

    bool isOrdered = true;
    double prevValue = L.front();

    // Перевірка, чи числа упорядковані за неспаданням
    for (double value : L) {
        if (value < prevValue) {
            isOrdered = false;
            break;
        }
        prevValue = value;
    }

    // Модифікація списку, якщо числа не упорядковані за неспаданням
    if (!isOrdered) {
        L.reverse();
    }

    // Виведення модифікованого списку по п'ять елементів у рядку
    printList(L);

    return 0;
}