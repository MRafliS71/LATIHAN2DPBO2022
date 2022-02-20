#include <iostream>
#include <string>

using namespace std;

#include "Product.cpp"
#include "Hardware.cpp"
#include "Memory.cpp"

// recall semua file yang akan digunakan, urutan perlu diperhatikan

int main()
{	
	// masukan jumlah data yang akan di input
	cout << "========TOKO KOMPUTER========\n";
	cout << "Berapa banyak memori yang akan di beli? ";
	int n;
	cin >> n;

	// deklarasi array
	Data arr[n];

	// variable input 
	int price = 0, 
		frequency = 0, 
		memorySize = 0;
	string idProduct = "";
	string brand = "";
	string model = "";
	string supportCuda = "";

	// menerima masukan user

	int i = 0; // variable iterasi
	for (i = 0; i < n; i++)
	{
			cout << "===================================" << endl;
			cout << "Masukan detail produk dari memori ke " << (i+1) << " :" << endl;

			// input tiap data produk
			cout << "Produk ID: ";
			cin >> idProduct;
			arr[i].setIdProduct(idProduct);

			cout << "Brand: ";
			cin >> brand;
			arr[i].setBrand(brand);

			cout << "Model: ";
			cin >> model;
			arr[i].setModel(model);

			cout << "Harga: ";
			cin >> price;
			arr[i].setPrice(price);

			cout << "Frequency(MHz): ";
			cin >> frequency;
			arr[i].setFrequency(frequency);

			cout << "Size Memori(Gb): ";
			cin >> memorySize;
			arr[i].setMemorySize(memorySize);

			cout << "Apakah Memori Supports Cuda? (Yes/No)";
			cin >> supportCuda;
			arr[i].setSupportCuda(supportCuda);
	}
	
	// Print out

	cout << "===================================" << endl;
	for(i = 0; i < n; i++)
	{
		cout << "Berikut merupakan resi dan spesifikasi memori ke" << (i+1) << ":" << endl;

		cout << "Identitas Produk	: " << arr[i].getIdProduct() << endl;

		cout << "Brand yang tertera	: " << arr[i].getBrand() << endl;

		cout << "Model memori 		: " << arr[i].getModel() << endl;

		cout << "Frekuensi memori   : " << arr[i].getFrequency() << " MHz" << endl;

		cout << "Size memori		: " << arr[i].getMemorySize() << " Gb" << endl;

		cout << "sdh support cuda 	: " << arr[i].getSupportCuda() << endl;

		cout << "Harga memori  		: " << arr[i].getPrice() << endl;
	}
	cout << "============Terima Kasih==========" << endl;
	
	return 0;
}