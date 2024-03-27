// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Rational {
private:
    int numerator;
    int denumerator;

public:
    Rational(int num, int denum) : numerator(num), denumerator(denum) {}

    Rational operator+(Rational r) {
        int newDenumerator = denumerator * r.denumerator;
        int newNumerator = (numerator * r.denumerator) + (r.numerator * denumerator);
        return Rational(newNumerator, newDenumerator);
    }

    Rational operator-(Rational r) {
        int newDenumerator = denumerator * r.denumerator;
        int newNumerator = (numerator * r.denumerator) - (r.numerator * denumerator);
        return Rational(newNumerator, newDenumerator);
    }

    Rational operator*(Rational r) {
        int newDenumerator = denumerator * r.denumerator;
        int newNumerator = numerator * r.numerator;
        return Rational(newNumerator, newDenumerator);
    }

    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& os, const Rational& r) {
        os << r.numerator << "/" << r.denumerator;
        return os;
    }
};

int main() {
    Rational a(1, 2);
    Rational b(1, 3);

    Rational c = a + b;
    Rational d = a - b;
    Rational e = a * b;

    std::cout << "a + b = " << c << std::endl;
    std::cout << "a - b = " << d << std::endl;
    std::cout << "a * b = " << e << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
