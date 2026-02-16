#include <iostream>
using namespace std;

int main()
{
	int arr[8];
	int n = 8;
	
	
	
	for (int i = 0; i < 8; i ++)
	{
		cout << "Nhap mang[" << i <<"]: ";
		cin >> arr[i];
	}
	
	
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n - 1; j ++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	cout << "Mang sau khi sap xep: ";
	
	for (int i = 0; i < 8; i ++)
	{
		cout << arr[i] << "  ";
	}
	
	cout << endl;
	
	return 0;
}
