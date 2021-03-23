#include <iostream>
#include <locale.h>

using namespace std;

int zadanie_1(int N,int p)
{
	if (N == 1 || N == 0)
	{
		if (N == 1)
			return N;
		if (N == 0)
			return N;
	}
	int* SS = new int[10];
	int END = 0;
	int i = 0;
	while (END == 0)
	{
		SS[i] = N % p;
		N = N / p;
		i++;
		if (N < p)
		{
			SS[i] = N;
			END = i;
		}
	}
	for (int i = 0; i <= END; i++)
	{
		cout << SS[i];
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	zadanie_1(10, 2);
}
