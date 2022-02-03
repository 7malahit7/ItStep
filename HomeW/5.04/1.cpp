#include<iostream>

using namespace std;

void main()
{
    setlocale(0, "");
    while (1) {

        int a = 0, f = 11;
        int answer;
        cout << "Введите число от 1 до 10: "; cin >> answer;

        switch (answer)
        {
        case 1:
            for (int i = 10; i >= 0; i--) {
                for (int j = 0; j <= a * 2; j++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;
        case 2:
            for (int i =0; i <= 9; i++) {
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 3:

            for (int i = 10; i >= 0; i--) {
                for (int k = 0; k <= a; k++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;

        case 4:
            for (int i = 10; i >= 0; i--) {

                for (int j = 0; j <= i; j++) {
                    cout << " ";
                }
                for (int k = 0; k <= a; k++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;

        case 5:

            for (int i = 10; i >= 0; i--) {
                for (int k = 0; k <= a; k++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            a = 0;
            for (int i = 10; i >= 0; i--) {

                for (int j = 0; j <= i; j++) {
                    cout << " ";
                }
                for (int k = 0; k <= a; k++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;
        case 6:
            for (int i = 0; i <= 10; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 9; i >= 0; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;




        case 7:
            for (int i = 0; i <= 10; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 9; i >= 0; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 8:
            a = 11;
            for (int i = 0; i <= 10; i++) {
                for (int j = 0; j <= a * 2; j++) {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
                a--;
            }
            a = 0;
            for (int i = 10; i >= 0; i--) {
                for (int l = 0; l <= a * 2; l++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;

        case 9:
            for (int i = 9; i >= 0; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 10:
            a = 11;
            for (int i = 0; i <= 9; i++) {
                for (int k = 0; k <= a * 2; k++) {
                    cout << " ";
                }
                for (int j = 0; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
                a--;
            }
            break;

        default:
            if (answer < 1 || answer > 10) {
                cout << "Неверное число" << endl;
            }
            break;
        }
    }

}
