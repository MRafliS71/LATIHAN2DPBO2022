// Memory merupakan kelas orang tua kedua dengan urutan
// Produk <- Hardware <- Memory

public class Memory extends Hardware{

    // deklarasi atribut
    private int frequency = 0;
    private int memorySize = 0;
    private String supportsCuda = "";

    // parameter konstruktor
    public Memory(int frequency, int memorySize, String supportsCuda) {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    // Konstruktor
    public Memory() {

    }

    // Methods Set dan get seluruh atribut ..
    public void setFrequency(int frequency) {
        this.frequency = frequency;
    }
    public int getFrequency() {
        return this.frequency;
    }

    public void setMemorySize(int memorySize) {
        this.memorySize = memorySize;
    }
    public int getMemorySize() {
        return this.memorySize;
    }

    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }
    public String getSupportsCuda() {
        return this.supportsCuda;
    }

}