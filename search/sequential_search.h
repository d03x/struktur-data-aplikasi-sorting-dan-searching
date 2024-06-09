#include <iostream>
using namespace std;
class sequential_search
{
public:
	int process(int arr[], int nilai)
	{
		for (int i = 0; i < sizeof(arr) / sizeof(int) ; i++)
		{
			if ( arr[i] == nilai )
			{
				return i;
			}
		}
		return -1;
	}
};