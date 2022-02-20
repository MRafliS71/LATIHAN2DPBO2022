from Hardware import Hardware

# Memory merupakan kelas orang tua kedua dengan urutan
# Produk <- Hardware <- Memory

class Memory(Hardware):
    
    # konstruktor
    def __init__(self):
        self.frequency = "blank"
        self.memorySize = 0
        self.supportsCuda = "blank"
    
    # semua metode set dan gett disetiap atribut
    
    def setFrequency(self, frequency):
        self.frequency = frequency
        
    def getFrequency(self):
        return self.frequency 

    
    def setMemorySize(self, memorySize):
        self.memorySize = memorySize
        
    def getMemorySize(self):
        return self.memorySize 


    def setSupportsCuda(self, supportsCuda):
        self.supportsCuda = supportsCuda
        
    def getSupportsCuda(self):
        return self.supportsCuda 