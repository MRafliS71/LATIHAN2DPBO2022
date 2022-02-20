<?php 

    // Hardware merupakan kelas orang tua kedua dengan urutan
    // Produk <- Hardware <- Memory

    class Hardware extends Product
    {
        // atribut publik    
        public $brand;
        public $model;

        // Konstruktor
        public function __construct($brand = "", $model = "")
        {
            $this->brand = $brand;
            $this->model = $model;            
        }   

        // metode untuk menyimpan data brand
        public function setBrand($brand)
        {
            $this->brand = $brand;
        }   
        public function getBrand()
        {
            return $this->brand;
        }

        // metode untuk menyimpan data model
        public function setModel($model)
        {
            $this->model = $model;
        }   
        public function getModel()
        {
            return $this->model;
        }

        // Destruktor untuk membersihkan memory
        public function __destruct(){
            
        }
    }
?>