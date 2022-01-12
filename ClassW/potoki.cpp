#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
#include<Windows.h>
#include<conio.h>
//макс. длина пути к файлу
#define MAX_PATH 260
//к-во столбцов  на экране
#define NUM_COLS 18
//к-во строк на экране
#define NUM_ROWS 24
using namespace std;



//int main()
//{
//	char path[MAX_PATH];
//	//запрос путя к файлу
//	cout << "Input Path to file: "; cin.getline(path, MAX_PATH);
//
//	int counter = 0, i = 0, j = 0;
//	char text[NUM_COLS];
//	//открытие файла в двоичном режиме
//	ifstream input(path, ios::in | ios::binary);
//	if (!input)
//	{
//		cout << "Can't open file for display!";
//		return 0;
//	}
//	//Режим отображения в верхнем регистре для 
//	//16-ричного вывода
//	cout.setf(ios::uppercase);
//	// пока не конец файла, читаем из него данные и производим форматированный вывод на экран
//	while (!input.eof())
//	{
//		//посимвольное чтение 
//		for (i = 0; (i < NUM_COLS && !input.eof()); i++)
//			input.get(text[i]);
//		if (i < NUM_COLS)
//			i--;
//		for (j = 0; j < i; j++)
//			if ((unsigned)text[j] < 0x10)
//				//к-во символов для отображения числа меньше двух
//				cout << setw(2) << 0 << hex << (unsigned)text[j];
//			else 
//				cout << setw(3) << 0 << hex << (unsigned)text[j];
//		//Вырвавнивание для незавершенной строки
//		for (; j < NUM_COLS; j++)
//			cout << "\t";
//		cout << "\t";
//		for (j = 0; j < i; j++)
//			//символ не является управляющим?
//			if (text[j] > 31 && text[j] <= 255)
//				cout << text[j];
//			else
//				cout << ".";
//		cout << endl;
//		//Eсли экран уже заполнен - производим остановку
//		if (++counter == NUM_COLS)
//		{
//			counter = 0;
//			cout << "Press any key to continue ..." << flush;//Ожидаем нажатия любой клавиши
//
//			cout << endl;
//		}
//		
//	}
//	//закрытие файла
//	input.close();
//
//
//	return 0;
//}


void main()
{
	char Answer;
	const int MessageCount = 8;
	int i, j;
	//Подсказки
	enum { CHOICE = 3, INPUT_FILENAME, INPUT_DIMENSIONS, INPUT_ELEMENTS, FILE_ERROR };
	//сообщение
	char Msg[MessageCount][50] =
	{
		"1. Вывод данных из текстового файла\n",
		"2. Записать данные в текстовый файл\n",
		"3. Выход из программы\n",
		" Ваш выбор: ",
		"Введите имя обрабатываемого файла: ",
		"Введите размерность матрицы: \n",
		"Введите элементы матрицы: \n",
		"Невозможно открыть файл\n"
	};
	//Русификация сообщений и вывод меню на экран
	for (i = 0; i < MessageCount; i++)
		CharToOemA(Msg[i], Msg[i]);
	do {
		for (int i = 0; i < 4; i++)
		{
			cout << Msg[i];
		}
		cin >> Answer;
	} while (Answer < '1' || Answer>'3');
	if (Answer == '3')
		return;
	char FileName[80];
	//Размерность матрицы
	int M, N;
	int num;
	cout << endl << Msg[INPUT_FILENAME];
	cin >> FileName;
	//Если выбран первый пункт меню
	//то выводим данные из текстового файла на экран
	if (Answer == '1')
	{
		//Если файл с указанным именем не существует сообщаем об ошибке
		ifstream inF(FileName, ios::in | ios::_Nocreate);
		if (!inF)
		{
			cout << endl << Msg[FILE_ERROR];
			return;
		}
		//считаем размерность массива
		inF >> M;
		inF >> N;
		//считаем элементы массива из файла и выводим их сразу на экран
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				for (j = 0; j < N; j++)
				{
					inF >> num;
					cout << setw(6) << num;
				}
				cout << endl;
			}
			inF.close();
		}
		//Если выбран второй пункт то запрашиваем у пользователя денные и выводим их в текстовой файл

	}
	else
	{
		//Открываем файл для записи
		//Если файл не сущесивуеи ир прнапамма создает его
		ofstream outF(FileName, ios::out);
		if (!outF)
		{
			cout << "\n" << Msg[FILE_ERROR];
			return;
		}
		//запрашиваем размерность матрицы
		//и записываем данные в файл
		cout << Msg[INPUT_DIMENSIONS];
		cout << "M: ";
		cin >> M;
		cout << "N: ";
		cin >> N;
		outF << M << ' ' << N << "\n";
		cout << Msg[INPUT_ELEMENTS];
		//Запрашиваем элементы массива и записываем их в файл

		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				cout << "A[" << i << "][" << j << "] = "; outF << num << " ";
			}
			outF << "\n";
		}
		outF.close();
	}
}
