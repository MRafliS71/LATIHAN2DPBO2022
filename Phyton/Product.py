# Produk merupakan kelas orang tua tertinggi dengan urutan
# Produk <- Hardware <- Memory

class Product:

    #  konstruktor
    def __init__(self):
        self.price = 0
        self.idProduct = "blank"

    # semua metode set dan gett disetiap atribut

    def setPrice(self, price):
        self.price = price
    
    def getPrice(self):
        return self.price 

    def setIdProduct(self, idProduct):
        self.idProduct = idProduct

    def getIdProduct(self):
        return self.idProduct 

    