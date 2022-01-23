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

void swap(int* x, int* y)
{
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
}

void main()
{
	srand(time(NULL));
	char Answer;
	const int MessageCount = 10;
	int i, j;
	//Подсказки
	enum { CHOICE = 4, INPUT_FILENAME, INPUT_DIMENSIONS, INPUT_ELEMENTS, FILE_ERROR, CHOOSE_LANGUAGE };
	//сообщение
	char Msg[MessageCount][50] =
	{
		"1. Вывод данных из текстового файла\n",
		"2. Записать данные в текстовый файл\n",
		"3. Заполнить файл рандомно и отсортировать\n",
		"4. Выход из программы\n",
		" Ваш выбор: ",
		"Введите имя обрабатываемого файла: ",
		"Введите размерность матрицы: \n",
		"Введите элементы матрицы: \n",
		"Невозможно открыть файл\n",
		"Выберите язык (0 - english / 1 - русский ): \n"

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
	} while (Answer < '1' || Answer>'4');
	if (Answer == '4')
		return;
	char FileName[80];
	//Размерность матрицы
	int M, N;


	char symb;
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
					inF >> symb;
					cout << setw(6) << symb;
				}
				cout << endl;
			}

		//Если выбран второй пункт то запрашиваем у пользователя денные и выводим их в текстовой файл

	}
	else if (Answer == '3')
	{
		ofstream outF(FileName, ios::out);
		if (!outF)
		{
			cout << "\n" << Msg[FILE_ERROR];
			return;
		}
		cout << Msg[INPUT_DIMENSIONS];
		cout << "M: ";
		cin >> M;
		cout << "N: ";
		cin >> N;
		outF << M << ' ' << N << "\n";

		char** arr = new char* [M];
		for (i = 0; i < M; i++)
		{
			arr[i] = new char[N];
		}
		cout << Msg[CHOOSE_LANGUAGE];
		bool a; cin >> a; 
		if (a == 1)
		{
			system("chcp 1251"); system("cls");
			for (i = 0; i < M; i++)
			{
				for (j = 0; j < N; j++)
				{

					arr[i][j] = rand() % (192 - 223) + 192;
					
				}
			}
		}
		else if (a == 0)
		{
			for (i = 0; i < M; i++)
			{
				for (j = 0; j < N; j++)
				{

					arr[i][j] = rand() % (65 - 90) + 65;
					
				}
			}

		}

		
			for (int k = 0; k < N; k++)
			{
				for (int l = 0; l < M; l++)
				{
					for (int i = 0; i < N; i++)
					{
						for (int j = 0; j < M; j++)
						{
							if ((j != M - 1) && (arr[i][j] > arr[i][j + 1]))
								swap(arr[i][j], arr[i][j + 1]);
							else
							{
								if ((i != N - 1) && (arr[i][j] > arr[i + 1][0]))
									swap(arr[i][j], arr[i + 1][0]);
							}
						}
					}
				}
			}
		


		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{

				cout << arr[i][j] << "\t";

			}
			cout << endl;
		}

		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				symb = arr[i][j];
				outF << symb << " ";
			}
			outF << "\n";
		}
		outF.close();

	}
	else if (Answer == '2')
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

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				cout << "A[" << i << "][" << j << "] = "; cin >> symb; outF << symb << " ";
			}
			outF << "\n";
		}
		outF.close();
	}
}
