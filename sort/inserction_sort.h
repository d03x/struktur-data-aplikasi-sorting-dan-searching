#include <iostream>
using namespace std;
class inserction_sort{
	public:
		void process(int arr[], int ukuran){
		 for (int i = 1; i < ukuran; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    	}
	}
};