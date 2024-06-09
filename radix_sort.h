#include <iostream>
#include <vector>
using namespace std;
class radix_sort
{
private:
	int getMax(int arr[], int ukuran)
	{
		int max = arr[0];
		for (int i = 1; i < ukuran; i++)
			if (arr[i] > max)
				max = arr[i];
		return max;
	}
	void countingSort(int arr[], int n, int exp)
	{
		vector<int> output(n); // output array
		int count[10] = {0};

		// Store count of occurrences in count[]
		for (int i = 0; i < n; i++)
			count[(arr[i] / exp) % 10]++;

		// Change count[i] so that count[i] now contains the actual position of this digit in output[]
		for (int i = 1; i < 10; i++)
			count[i] += count[i - 1];

		// Build the output array
		for (int i = n - 1; i >= 0; i--)
		{
			output[count[(arr[i] / exp) % 10] - 1] = arr[i];
			count[(arr[i] / exp) % 10]--;
		}

		// Copy the output array to arr[], so that arr[] now contains sorted numbers according to the current digit
		for (int i = 0; i < n; i++)
			arr[i] = output[i];
	}

public:
	void process(int arr[], int ukuran)
	{
		// Find the maximum number to know the number of digits
		int m = getMax(arr, ukuran);

		// Do counting sort for every digit. Note that instead of passing the digit number, exp is passed.
		// exp is 10^i where i is the current digit number
		for (int exp = 1; m / exp > 0; exp *= 10)
			countingSort(arr, ukuran, exp);
	}
};