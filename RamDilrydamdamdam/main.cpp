#include<iostream>
#include<cstdlib>

using namespace std;
void Fill(int* adr, int num1, int num2);
void FillDynArr(int*& arr, int size);
void CrDynArr(int*& arr, int& size);
void DelDynArr(int*& arr);
void ChangeNegNums(int*& arr, int size);

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	cout << "Hello world\n"; //первое задание

	int num1, num2;//второе задание
	cout << "¬ведите первое число \n";
	cin >> num1;
	cout << "¬ведите второе число: \n";
	cin >> num2;
	
	int num3 = 0;//третье задание
	int* adr = &num3;
	Fill(adr, num1, num2);
	cout << num3 << endl;

	//четвЄртое задание
	int* arr;
	CrDynArr(arr, num3);
	FillDynArr(arr, num3);
	for (int i = 0; i < num3; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//п€тое задание
	ChangeNegNums(arr, num3);
	for (int i = 0; i < num3; i++)
	{
		cout << arr[i] << " ";
	}
	DelDynArr(arr);
}

void CrDynArr(int*& arr, int& size)
{
	arr = new int[size];
}

void DelDynArr(int*& arr)
{
	delete[] arr;
}

void Fill(int* adr, int num1, int num2)
{
	*adr = rand() % num2;
}

void FillDynArr(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
	}
}

void ChangeNegNums(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
		}
	}
}