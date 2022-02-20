import java.util.Scanner;
// recall semua file yang akan digunakan

class Main {
    
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        // deklarasi variable yang akan dimasukan di main
        int Price = 0, Frequency = 0, Memory = 0;
        String IDProduct = "";
        String Brand = "";
        String Model = "";
        String SupportsCuda = "";
        
        // melakukan perulangan untuk input data
        int n = 0;   
        System.out.print("Berapa banyak memori yang akan di beli? ");

        try{
            n = sc.nextInt();
        }catch(Exception e){}

        // deklarasi array
        Memory arr[] = new Memory[n];

        // memasukan inputan user
        int i = 0;
        for (i = 0; i < n; i++) 
        {
            arr[i] = new Memory();
            
            System.out.println("-----------------------------");

			System.out.println("Detail Spesifikasi Memori ke" + (i+1));

            System.out.println("-----------------------------");
            
            System.out.print("Brand         : ");
			try{
				Brand = sc.next();
			}catch(Exception e){}
			arr[i].setBrand(Brand);

            System.out.print("Produk ID      : ");
            try{
                IDProduct = sc.next();
            }catch(Exception e){}
            arr[i].setIdProduct(IDProduct);

            System.out.print("Model        : ");
			try{
				Model = sc.next();
			}catch(Exception e){}
			arr[i].setModel(Model);

            System.out.print("Frequency(Mhz)    : ");
			try{
				Frequency = sc.nextInt();
			}catch(Exception e){}
			arr[i].setFrequency(Frequency);

            System.out.print("Ukuran Memory(Gb)       : ");
			try{
				Memory = sc.nextInt();
			}catch(Exception e){}
			arr[i].setMemorySize(Memory);

            System.out.print("Harga          : ");
            try{
                Price = sc.nextInt();
            }catch(Exception e){}
            arr[i].setPrice(Price);
            
            System.out.print("Apakah Memori Supports Cuda? (Yes/No)");
			try{
				SupportsCuda = sc.next();
			}catch(Exception e){}
			arr[i].setSupportsCuda(SupportsCuda);

        }
        
        // output atau keluaran yang akan dihasilkan

        System.out.println("----------------------------------");

        for (i = 0; i < n; i++) 
        {
            System.out.println("Berikut merupakan resi dan spesifikasi memori ke" + (i+1));
            System.out.println("----------------------------------");

            System.out.println("Brand yang tertera  : " + arr[i].getBrand());

            System.out.println("Identitas Produk    : " + arr[i].getIdProduct());

            System.out.println("Model memori        : " + arr[i].getModel());

            System.out.println("Frekuensi memori    : " + arr[i].getFrequency());

            System.out.println("Size memori         : " + arr[i].getMemorySize());

            System.out.println("sdh support cuda    : " + arr[i].getSupportsCuda());

            System.out.println("Harga memori        : " + arr[i].getPrice());
        } 
        
        System.out.println("----------------------------------");   
    }
}