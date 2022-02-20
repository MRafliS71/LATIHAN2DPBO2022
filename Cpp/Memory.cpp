// Memory merupakan kelas orang tua kedua dengan urutan
// Produk <- Hardware <- Memory

class Memory : public Hardware
{
	// deklarasi atribut
	private:
		
		int frequency;
		int memorySize;
		string supportCuda;

	// atribut publik
	public:
		// parameter konstruktor
		Memory(int frequency, int memorySize, string supportCuda)
		{
			this->frequency = frequency;
			this->memorySize = memorySize;
			this->supportCuda = supportCuda;
		}
		// Konstruktor
		Memory()
		{
			this->frequency = 0;
			this->memorySize = 0;
			this->supportCuda = "";
		}

		// methods untuk menyimpan frequency
		void setFrequency(int frequency)
		{
			this->frequency = frequency;
		}

		int getFrequency()
		{
			return this->frequency;
		}

		// methods untuk menyimpan ukuran memori
		void setMemorySize(int memorySize)
		{
			this->memorySize = memorySize;
		}

		int getMemorySize()
		{
			return this->memorySize;
		}

		// methods untuk menyimpan indikator kuda
		void setSupportCuda(string supportCuda)
		{
			this->supportCuda = supportCuda;
		}

		string getSupportCuda()
		{
			return this->supportCuda;
		}

		// Destruktor untuk membersihkan memory
		~Memory(){

		}

};