<?php 
    // Produk merupakan kelas orang tua tertinggi dengan urutan
    // Produk <- Hardware <- Memory

    class Product
    {
        // atribut publik
        public $price;
        public $idProduct;
        
        // konstruktor
        public function __construct($price = 0, $idProduct = "")
        {   
            $this->price = $price; 
            $this->idProduct = $idProduct;          
        }

        // metode untuk menyimpan data harga
        public function setPrice($price)
        {
            $this->price = $price;
        }   
        public function getPrice()
        {
            return $this->price;
        }

        // metode untuk menyimpan id Product
        public function setIDProduct($idProduct)
        {
            $this->idProduct = $idProduct;
        }   
        public function getIDProduct()
        {
            return $this->idProduct;
        }

        // Destruktor untuk membersihkan memory
        public function __destruct()
        {
            
        }
    }
?>