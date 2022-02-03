
#include <iostream>
using namespace std;

void main()
{
    setlocale(0, "");
    int n;
    int count = 0;
    int sum = 0;
    int zeroes = 0;

    cout << "Введите число: ";
    int num; cin >> num;


    while (num != 0)
    {
        n = num % 10;
        count++; num /= 10;

        sum += n;
        if (n == 0 && num != 0)
            zeroes++;
    }


    cout << "К-во цифр: " << count << endl;
    cout << "Сумма цифр: " << sum << endl;
    cout << "ср.ар:  " << 1.0 * sum / count << endl;
    cout << "число нулей: " << zeroes << endl;

}

      
