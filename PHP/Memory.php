<?php 

    // Memory merupakan kelas orang tua kedua dengan urutan
    // Produk <- Hardware <- Memory

    class Memory extends Hardware
    {
        // atribut publik
        public $frequency;
        public $memorysize;
        public $cuda;

        // Konstruktor
        public function __construct($frequency = "", $memorysize = "", $cuda = "")
        {
            $this->frequency = $frequency;
            $this->memorysize = $memorysize;
            $this->cuda = $cuda;            
        }

        // methods untuk menyimpan frequency
        public function setFrequency($frequency)
        {
            $this->frequency = $frequency;
        }   
        public function getFrequency()
        {
            return $this->frequency;
        }

        // methods untuk menyimpan ukuran memori
        public function setMemorySize($memorysize)
        {
            $this->memorysize = $memorysize;
        }   
        public function getMemorySize()
        {
            return $this->memorysize;
        }
        
        // methods untuk menyimpan indikator kuda
        public function setCuda($cuda)
        {
            $this->cuda = $cuda;
        }   
        public function getCuda()
        {
            return $this->cuda;
        }

        // Destruktor untuk membersihkan memory
        public function __destruct()
        {
            
        }
    }
?>