// Hardware merupakan kelas orang tua kedua dengan urutan
// Produk <- Hardware <- Memory

class Hardware : public Product
{
	// atribut private
	private:
		string brand;
		string model;

	// atribut publik	
	public:
		// parameter konstruktor
		Hardware(string brand, string model)
		{
			this->brand = brand;
			this->model = model;
		}
		// Konstruktor
		Hardware(){
			this->brand = "";
			this->model = "";
		}

		// untuk menyimpan data brand
		void setBrand(string brand)
		{
			this->brand = brand;
		}

		string getBrand()
		{
			return this->brand;
		}

		// untuk menyimpan data model
		void setModel(string model)
		{
			this->model = model;
		}

		string getModel()
		{
			return this->model;
		}

		// Destruktor untuk membersihkan memory
		~Hardware(){

		}

};