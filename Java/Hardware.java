// Hardware merupakan kelas orang tua kedua dengan urutan
// Produk <- Hardware <- Memory

public class Hardware extends Product{

    // deklarasi atribut

    private String brand = "";
    private String model = "";

    // parameter konstruktor
    public Hardware(String brand, String model) {
        this.brand = brand;
        this.model = model;
    }

    // Konstruktor
    public Hardware() {

    }

    // Methods Set dan get seluruh atribut ..

    public void setBrand(String brand) {
        this.brand = brand;
    }
    public String getBrand() {
        return this.brand;
    }

    public void setModel(String model) {
        this.model = model;
    }
    public String getModel() {
        return this.model;
    }

}