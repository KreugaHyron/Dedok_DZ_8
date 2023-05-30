#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    int num{};

    cout << "Введите число: " << "\n";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Число " << num << " является четным." << "\n";
    }
    else {
        cout << "Число " << num << " является нечетным." << "\n";
    }
    cout << "\n";

    //Task_2
    int number1;
    int number2;
    int number3;

    cout << "Введите первое число: ";
    cin >> number1;

    cout << "Введите второе число: ";
    cin >> number2;

    cout << "Введите третье число: ";
    cin >> number3;

    int minNumber = number1;
    if (number2 < minNumber) {
        minNumber = number2;
    }
    else if (number3 < minNumber) {
        minNumber = number3;
    }
    cout << "Наименьшее число: " << minNumber << "\n";
    cout << "\n";

    //Task_3
    int some_number;

    cout << "Введите число для проверки ";
    cin >> some_number;

    if (some_number > 0) {
        cout << "Число " << some_number << " является положительным." << "\n";
    }
    else if (some_number < 0) {
        cout << "Число " << some_number << " является отрицательным." << "\n";
    }
    else if (some_number == 0) {
        cout << "Число равно нулю." << "\n";
    }
    cout << "\n";

    //Task_6
    int number_1;
    int N;
    int M;

    cout << "Введите число: ";
    cin >> number_1;

    cout << "Введите начало диапазона N: ";
    cin >> N;

    cout << "Введите конец диапазона M: ";
    cin >> M;

    if (number_1 >= N && number_1 <= M) {
        cout << "Число " << number_1 << " принадлежит диапазону от " << N << " до " << M << "." << "\n";
    }
    else {
        cout << "Число " << number_1 << " не принадлежит диапазону от " << N << " до " << M << "." << "\n";
    }
    cout << "\n";

    //Task_7
    int X, Y;

    cout << "Введите число X: ";
    cin >> X;

    cout << "Введите число Y: ";
    cin >> Y;

    if (X % Y == 0) {
        cout << "Число " << X << " кратно числу " << Y << "\n";
    }
    else {
        cout << "Число " << X << " не кратно числу " << Y << "\n";
    }
    cout << "\n";

    //Task_8
    int number_2;

    cout << "Введите число: ";
    cin >> number_2;

    if (number_2 % 3 == 0 && number_2 % 5 == 0 && number_2 % 7 == 0) {
        cout << "Число " << number_2 << " кратно 3, 5 и 7 одновременно." << "\n";
    }
    else {
        cout << "Число " << number_2 << " не является кратным 3, 5 и 7 одновременно." << "\n";
    }
    cout << "\n";

    //Task_10
    int number_4;

    cout << "Введите число (не более 4 разрядов): ";
    cin >> number_4;

    int digitCount = 0;
    int tempNumber = number_4;

    while (tempNumber != 0) {
        tempNumber /= 10;
        digitCount++;
    }
    cout << "Количество цифр в числе " << number_4 << ": " << digitCount << "\n";
    cout << "\n";

    //Task_11
    int number_5;

    cout << "Введите пятизначное число: ";
    cin >> number_5;

    int origNumber = number_5;
    int reversNumber = 0;

    while (number_5 != 0) {
        int remainder = number_5 % 10;
        reversNumber = reversNumber * 10 + remainder;
        number_5 /= 10;
    }

    if (origNumber == reversNumber) {
        cout << "Число " << origNumber << " является палиндромом." << "\n";
    }
    else {
        cout << "Число " << origNumber << " не является палиндромом." << "\n";
    }
    cout << "\n";

    //Task_13
    int a, b, c, d;

    cout << "Введите четыре числа: ";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    int max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));

    cout << "Максимальное значение: " << max << "\n";
}
