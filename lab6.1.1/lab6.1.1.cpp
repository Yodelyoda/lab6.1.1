#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int Sum(int mas[], const int n);
int main()
{
	const int i = 23;
	int r[i]{};
	srand(time(NULL));
	for (int i = 0; i < 23; i++)
	{
		r[i] = rand() % 45 - 19;	
	}
	cout << endl << "mas from -19 to 25: ";
	for (int i = 0; i < 23; i++)
	{
		cout << r[i] << "  ";
	}
	cout << endl;
	cout << "S = " << Sum(r, i) << endl;
}
int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (mas[n] % 4 != 0) {
			s += mas[i];
			//mas[i] = 0;
			//cout << mas[i] << "  ";
			return s;
		}

}

