#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <iomanip> 
using namespace std;

int Sum(int mas[], const int n);
int Kil(int mas[], const int n);
int Nmas(int mas[], const int n);

int main()
{
	const int n = 23;
	int r[n]{};
	srand(time(NULL));
	for (int i = 0; i < 23; i++)
	{
		r[i] = rand() % 45 - 19;
	}
	cout << endl << "mas from -19 to 25: ";
	for (int i = 0; i <23; i++)
	{
		cout << r[i] << "  ";
	}
	cout << endl;
	cout << "Suma = " << Sum(r, n) << endl;
	cout << "Kilkist = " << Kil(r, n) << endl;
	Nmas(r, n);

}
int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] % 4 != 0 && mas[i] > 0) {
			s += mas[i];
		}
	return s;
}

int Kil(int mas[], const int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] % 4 != 0 && mas[i] > 0) {
			k += 1;
		}
	return k;
}

int Nmas(int mas[], const int n)
{
	cout << endl << "New mas :";
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 4 != 0 && mas[i] > 0)
		{
			mas[i] = 0;
		}
		cout << mas[i] << "  ";
	}
	return 0;
}






