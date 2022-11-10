#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, int Low, int High, int i)
{
	
	if (i < size)
	{
		a[i] = Low + rand() % (High - Low + 1);
		return Create(a, size, Low, High, i + 1);
	}
}
void Print(int* a, const int size, int i)
{
	if (i <= size)
	{
		cout << setw(4) << a[i];
		return Print(a, size, i + 1);
		cout << endl;
	}
}
int Sum(int* a, const int size, int i)
{
	if (i < size)
	{
		if (i % 2 == 0 )
			return a[i] + Sum(a, size, i + 1);
		else
			return Sum(a, size, i + 1);
	}
	else
		return 0;
	
}
int main()
{
	srand((unsigned)time(NULL));
	const int size = 21;
	int i = 0;
	int a[size];
	int Low = 15;
	int High = 85;
	Create(a, size, Low, High, i);
	Print(a, size, i);
	cout << "                            S = " << Sum(a, size, i) / 10.0<< endl;
}