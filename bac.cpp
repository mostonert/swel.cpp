# swel.cpp
load
#include <iostream>
#include <string>
using namespace std;

double evaluateExpression(string expression) {
    return stod(expression);
}

int main() {
    string expression;
    cout << "Введите выражение: ";
    getline(cin, expression);
    try {
        double result = evaluateExpression(expression);
        cout << "Результат: " << result << endl;
    } catch (...) {
        cout << "Ошибка при вычислении" << endl;
    }
    return 0;
}
