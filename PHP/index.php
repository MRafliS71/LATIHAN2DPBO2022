<?php
	// pemanggilan sesuai urutan yaitu
	// Produk <- Hardware <- Memory
	include "Product.php";
	include "Hardware.php";
	include "Memory.php";

	// menuliskan input dengan hardcode
	$memori1 = new Memory();

	$memori1->setIDProduct("CR64");

	$memori1->setPrice("4500000");

	$memori1->setBrand("Corsair");

	$memori1->setModel("Vegeance");

	$memori1->setFrequency("6400 MHz");

	$memori1->setMemorySize("16 GB");

	$memori1->setCuda("Yes");

	// menuliskan input data ke 2 dengan hardcode
	$memori2 = new Memory();

	$memori2->setIDProduct("AU23");

	$memori2->setPrice("1600000");

	$memori2->setBrand("Aorus");

	$memori2->setModel("EntryLvl");

	$memori2->setFrequency("2333 Mhz");

	$memori2->setMemorySize("8 Gb");

	$memori2->setCuda("No");
	
	// output yang akan di keluarkan
	echo "=======Memori 1=========="."<br/>";
	echo "Identitas Produk		: " .$memori1->getIDProduct()."<br/>";
	echo "Harga memori  		: " .$memori1->getPrice()."<br/>";
	echo "Brand yang tertera	: " .$memori1->getBrand()."<br/>";
	echo "Model memori 			: " .$memori1->getModel()."<br/>";
	echo "Frekuensi memori   	: " .$memori1->getFrequency()."<br/>";
	echo "Size memori			: " .$memori1->getMemorySize()."<br/>";
	echo "sdh support cuda 		: " .$memori1->getCuda()."<br/>";
	echo "========================="."<br/>";
		
	echo "<br/>";

	echo "=======Memori 2=========="."<br/>";
	echo "Identitas Produk		: " .$memori2->getIDProduct()."<br/>";
	echo "Harga memori  		: " .$memori2->getPrice()."<br/>";
	echo "Brand yang tertera	: " .$memori2->getBrand()."<br/>";
	echo "Model memori 			: " .$memori2->getModel()."<br/>";
	echo "Frekuensi memori   	: " .$memori2->getFrequency()."<br/>";
	echo "Size memori			: " .$memori2->getMemorySize()."<br/>";
	echo "sdh support cuda 		: " .$memori2->getCuda()."<br/>";
	echo "========================="."<br/>";

?>