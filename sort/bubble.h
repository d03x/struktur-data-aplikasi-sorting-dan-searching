#include <iostream>
using namespace std;
class BuubleSort
{
public:
	void process(int arr[], int ukuran)
	{
		for (int i = 0; i < ukuran - 1; i++)
		{
			bool swapped = false;
			for (int j = 0; j < ukuran - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);
					swapped = true;
				}
			}
			if (!swapped)
			{
				break;
			}
		}
	}
};