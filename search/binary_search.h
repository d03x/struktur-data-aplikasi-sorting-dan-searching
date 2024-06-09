#include <iostream>
using namespace std;
class binary_search
{
public:
	int process(int arr[], int nilai)
	{
		 int left = 0;
    int right = sizeof(arr) / sizeof(int);
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == nilai) {
            return mid;
        } else if (arr[mid] < nilai) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }

    return -1;
	}
};