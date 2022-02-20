// Produk merupakan kelas orang tua tertinggi dengan urutan
// Produk <- Hardware <- Memory

public class Product {
    // deklarasi atribut
    private int price = 0;
    private String idProduct = "";

    // parameter konstruktor
    public Product(int price, String idProduct) {
        this.price = price;
        this.idProduct = idProduct;
    }

    // Konstruktor
    public Product() {

    }

    // Methods Set dan get seluruh atribut ..

    public void setPrice(int price) {
        this.price = price;        
    }
    public int getPrice() {
        return this.price;        
    }

    public void setIdProduct(String idPString) {
        this.idProduct = idProduct;
    }
    public String getIdProduct() {
        return this.idProduct;
    }
}