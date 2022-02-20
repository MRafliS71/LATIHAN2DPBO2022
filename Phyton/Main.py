from Memory import Memory
# recall memory dikarenakan jika di pyton memory telah mengandung semua atribut

print("Berapa banyak memori yang akan dibeli?", end = ' ')

# masukan user
n = int(input())

# array
arr = [Memory() for i in range(n)]

# perulangan untuk memasukan data dari user
for i in range(n):

    print("--------------------------------\n")

    print("Masukan detail produk dari memori ke " + str(i+1))

    print("--------------------------------\n")
    
    print("Produk ID: ", end = ' ') 
    idProduct = str(input())
    arr[i].setIdProduct(idProduct)
    
    print("Brand: ", end = ' ') 
    brand = str(input())
    arr[i].setBrand(brand)
    
    print("Model Produk: ", end = ' ') 
    model = str(input())
    arr[i].setModel(model)
    
    print("Frequency(MHz): ", end = ' ') 
    frequency = int(input())
    arr[i].setFrequency(frequency)
        
    print("Size Memori(Gb): ", end = ' ') 
    memorySize = str(input())
    arr[i].setMemorySize(memorySize)

    print("Apakah Memori Supports Cuda? (Yes/No)", end = ' ') 
    supportsCuda = str(input())
    arr[i].setSupportsCuda(supportsCuda)

    print("Harga: ", end = ' ') 
    price = int(input())
    arr[i].setPrice(price)

# perulangan untuk output atau keluaran
for i in range(n):
    print("\n")
    print("-------------------------------------------------\n")
    print("Berikut merupakan resi dan spesifikasi memori ke" + str(i+1))
    print("\n")
    print("-------------------------------------------------\n")

    print("Identitas Produk : " + str(arr[i].getIdProduct()))

    print("Brand yang tertera   : " + str(arr[i].getBrand()))

    print("Model memori         : " + str(arr[i].getModel()))

    print("Frekuensi memori   : " + str(arr[i].getFrequency()))

    print("Size memori      : " + str(arr[i].getMemorySize()))

    print("sdh support cuda     : " + str(arr[i].getSupportsCuda()))

    print("Harga memori         : " + str(arr[i].getPrice()))

    print("-------------------Terima Kasih--------------------\n")