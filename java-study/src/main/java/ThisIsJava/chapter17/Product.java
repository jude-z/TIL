package ThisIsJava.chapter17;

public class Product {
    private int no;
    private String name;
    private String company;
    private int price;

    public Product(int no, String name, String company, int price) {
        this.no = no;
        this.name = name;
        this.company = company;
        this.price = price;
    }

    public int getNo() {
        return no;
    }

    @Override
    public String toString() {
        return "Product{" +
                "no=" + no +
                ", name='" + name + '\'' +
                ", company='" + company + '\'' +
                ", price=" + price +
                '}';
    }

    public void setNo(int no) {
        this.no = no;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getCompany() {
        return company;
    }

    public void setCompany(String company) {
        this.company = company;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }
}
