
#include <iostream>
#include <Windows.h>
using namespace std;


int fac(int ch) {
    int& a = ch;
    if (a == 1) {
        return 1;
    }
    return a * fac(a - 1);
}   

void input() {
    setlocale(LC_ALL, "Russian");
    int ch;
    cout << "Введите переменную: ";
    cin >> ch;
    
    cout << fac(ch);
    cout << "\n";
}

int main()
{
    input();
    return 0;
}
