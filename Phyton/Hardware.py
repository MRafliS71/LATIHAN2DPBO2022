from Product import Product

# Hardware merupakan kelas orang tua kedua dengan urutan
# Produk <- Hardware <- Memory

class Hardware(Product):
    
    #  konstruktor
    def __init__(self):
        self.brand = "blank"
        self.model = "blank"
        
    # semua metode set dan gett disetiap atribut

    def setBrand(self, brand):
        self.brand = brand
        
    def getBrand(self):
        return self.brand 

   
    def setModel(self, model):
        self.model = model
        
    def getModel(self):
        return self.model 