#include <iostream>
#include <vector>
using namespace std;
class counting_sort{
		public:
		void process(int arr[], int n){
			  // Mencari nilai maksimum dari elemen array
		    int max = arr[0];
		    for (int i = 1; i < n; i++) {
		        if (arr[i] > max) {
		            max = arr[i];
		        }
		    }
		
		    vector<int> count(max + 1, 0);
		
		    for (int i = 0; i < n; i++) {
		        count[arr[i]]++;
		    }
		
	
		    for (int i = 1; i <= max; i++) {
		        count[i] += count[i - 1];
		    }
		
		    vector<int> output(n);
		    for (int i = n - 1; i >= 0; i--) {
		        output[count[arr[i]] - 1] = arr[i];
		        count[arr[i]]--;
		    }
		
		    for (int i = 0; i < n; i++) {
		        arr[i] = output[i];
			}
	}
};