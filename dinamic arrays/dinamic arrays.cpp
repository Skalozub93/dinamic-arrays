#include <iostream>
using namespace std;

void add(int*& ar, int x, int k)
{

	int* temp = new int[x + 1];
	for (int j = 0; j < x + 1; j++)
	{
		temp[j] = ar[j];
	}
	temp[x] = k;
	delete[] ar;
	ar = temp;
	x++;
	for (int i = 0; i < x; i++)
	{
		cout << ar[i] << ", ";
	}
}

void remove(int*& ar, int x, int k)
{
	int* temp = new int [x - 1];
	for (int i = k + 1; i < x; i++)
	{
		temp[i - 1] = ar[i];
	}
	delete[] ar;
	ar = temp;
	x--;
	for (int i = 0; i < x; i++)
	{
		cout << ar[i] << ", ";
	}
}
int main()
{
	int x = 5;
	int* ar = new int [x] {1,2,3,4,5};
	//add(ar, x, 10);

	cout << "\n\n";

	remove(ar, x, 1);
	delete[] ar;
	
}


