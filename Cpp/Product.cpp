// Produk merupakan kelas orang tua tertinggi dengan urutan
// Produk <- Hardware <- Memory

class Product
{
	// atribut private
	private:
		int price;
		string idProduct;

	// atribut publik
	public:
		// parameter Konstruktor
		Product(int price, string idProduct)
		{
			this->price = price;
			this->idProduct = idProduct;
		}
		// konstruktor
		Product()
		{
			this->price = 0;
			this->idProduct = "";
		}

		// untuk menyimpan data harga
		void setPrice(int price)
		{
			this->price = price;
		}

		int getPrice(){
			return this->price;
		}

		// untuk menyimpan id Product
		void setIdProduct(string idProduct)
		{
			this->idProduct = idProduct;
		}

		string getIdProduct()
		{
			return this->idProduct;
		}

		// Destruktor untuk membersihkan memory
		~Product(){

		}
};