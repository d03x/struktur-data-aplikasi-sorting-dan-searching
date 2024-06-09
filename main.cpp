#include <iostream>
#include <conio.h>
#include "sort/bubble.h"
#include "sort/inserction_sort.h"
#include "sort/radix_sort.h"
#include "sort/counting_sort.h"
#include "search/sequential_search.h"
#include "search/binary_search.h"
// entrypoint
using namespace std;
class utama
{
private:
	int *arr;
	int ukuran;
	BuubleSort a;
	inserction_sort b;
	radix_sort c;
	counting_sort d;
	sequential_search e;
	binary_search f;

public:
	utama(int n)
	{
		ukuran = n;
		arr = new int[n];
	}
	void insert()
	{
		for (int i = 0; i < ukuran; i++)
		{
			cout << "->Nilai Ke " << (i + 1) << ": ";
			cin >> arr[i];
		}
	}
	void baca()
	{
		cout << "===========ISI ARRAY===========" << endl;
		for (int i = 0; i < ukuran; i++)
		{
			cout << "->Isi Array Ke " << (i + 1) << ": " << arr[i] << endl;
		}
		cout << endl;
	}
	void pencarian(int nilai){
		int n,hasil,found;
		char metode;
		cout << "==================== SILAHKAN PILIH METODE PENCARIAN ================" << endl;
		cout << "1. Sequential Search " << endl;
		cout << "2. Binary Search " << endl;
		cout << "================================================================" << endl;
		cout << "Silahkan Metode Pencarian yang di inginkan: ";
		cin >> metode;
		cout << endl;
		switch( metode ){
			case '1':
				cout << nilai << " Ada di index ke "<< e.process(arr,nilai);
				break;
					case '2':
				cout << nilai << " Ada di index ke "<< f.process(arr,nilai);
				break;
		}
	}
	void pengurutan()
	{
		char n;
		cout << "==================== SILAHKAN PILIH PENGURUTAN ================" << endl;
		cout << "1. Bubble Sort " << endl;
		cout << "2. Inserction Sort " << endl;
		cout << "3. Radik Sort " << endl;
		cout << "4. Counting Sort " << endl;
		cout << "================================================================" << endl;
		cout << "Silahkan Teknik Pengurutan yang di inginkan: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case '1':
			a.process(arr, ukuran);
			break;
		case '2':
			b.process(arr, ukuran);
			break;
		case '3':
			c.process(arr, ukuran);
			break;
		case '4':
			d.process(arr, ukuran);
			break;
		default:
			cout << "Teknik Pengurutan tidak tersedia";
			break;
		}
		cout << endl
			 << "=================== ARRAY SETELAH DI URUTKAN =========================" << endl;

		for (int i = 0; i < ukuran; i++)
		{
			cout << "->Array Ke " << (i + 1) << ": ";
			cout << arr[i] << endl;
		}
	}
};

void DisplayHeader()
{
	cout << "==================================" << endl;
	cout << "Program Pencaharian dan Pengurutan" << endl;
	cout << "==================================" << endl;
}

int main()
{
	int ukuran, nilai;
	DisplayHeader();
	cout << "Masukan Nilai Ukuran: ";
	cin >> ukuran;
	utama a(ukuran);
	// untuk mendapatkan nilai
	a.insert();
	a.baca();
	a.pengurutan();
	cout << "Apakah Anda Ingin Melakukan Pencarian?"<<"Jika Iya masukan angka, Jika tidak masukan -88"<<endl;
	cin>>nilai;
	if( nilai != -88 ){
		a.pencarian(nilai);
	}else{
		cout << "Thanks And Bye-Bye ??";
	}
}               