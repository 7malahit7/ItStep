#include <iostream>
#include <io.h>

using namespace std;

//_A_RDONLY; //файл только для чтения
//_A_NORMAL; // для редактирования и чтения
//_A_ARCH; // архив
//
//time_t time_create; //время создания
//time_t time_access; //открытия
//time_t time_write; //редактирования
//
//_fsize_t size; //размер файла
//char name[260];

int main()
{
	system("chcp 1251"); system("cls");
	//const char* path = "D:\\Ilya\\b_data.dat";
	//int n = 10, imax, imin, i;
	//int* a, max, min;
	//FILE* f;
	//if (fopen_s(&f, path, "wb") != NULL)
	//	cout << "The file can't be opened";
	//else
	//{
	//	for (int i = 0; i < n; i++)
	//	{
	//		fwrite(&i, sizeof(short), 1, f);
	//	}
	//	fclose(f);
	//}
	//if (fopen_s(&f, path, "rb") != NULL)
	//	cout << "The file can't be opened";
	//else
	//{
	//	a = new int[n];
	//	fread(a, sizeof(int), n, f);
	//	for (imax = imin = 0, max = min = a[0], i = 1;i < n; i++)
	//	{
	//		if (a[i] > max)
	//		{
	//			max = a[i];
	//			imax = i;
	//		}
	//		if (a[i] < min)
	//		{
	//			min = a[i];
	//			imin = i;
	//		}
	//	}
	//	fseek(f, sizeof(int) + imax * sizeof(double), SEEK_SET);
	//	fseek(f, sizeof(int) + imin * sizeof(double), SEEK_SET);
	//	fwrite(&max, sizeof(double), 1, f);
	//	fclose(f);
	//	delete[]a;
	//}
	//int fseek(FILE *fileName, long int offset, int origin);

	//struct _finddata_t myfileinfo;
	//char str[200] = "D:\\Ilya\\example\\*.dat";
	//long done = _findfirst(str, &myfileinfo);
	//cout << myfileinfo.name;
	//if (done == -1)
	//	cout << "The search was unsuccsessful" << endl;
	//else
	//	cout << myfileinfo.name;
	//while (done != -1)
	//{
	//	cout << myfileinfo.name << endl;
	//	done = _findnext(done, &myfileinfo);
	//}

	//int math[] = { 0, 1, 4, 5, 7, 8, 10, 12, 15, 17, 30, 41 };
	//for (auto number : math)
	//{
	//	cout << number << "\t";
	//}
	const string names[] = { "Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly" };
	string  username;
	cout << "Введите имя: ";
	cin >> username; bool found(0);
	for (const auto& name : names)
	{
		if (name == username)
		{
			found = 1;
			break;
		}
	}
	if (found)
		cout << "Имя найдено";
	else
		cout << "Имя не найдено";
	return 0;
}
