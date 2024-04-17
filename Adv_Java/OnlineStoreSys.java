import java.util.ArrayList;
import java.util.List;

class Product {
    private String name;
    private double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public double calculateTotal(int quantity) {
        return price * quantity;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }
}

class Electronics extends Product {

    public Electronics(String name, double price) {
        super(name, price);
    }
}

class Clothing extends Product {

    public Clothing(String name, double price) {
        super(name, price);
    }
}

class Books extends Product {

    public Books(String name, double price) {
        super(name, price);
    }
}

class ShoppingCart {
    private List<Product> products;

    public ShoppingCart() {
        this.products = new ArrayList<>();
    }

    public void addProduct(Product product, int quantity) {
        if (quantity <= 0) {
            System.out.println("Invalid quantity. Please provide a valid quantity.");
            return;
        }
        products.add(product);
        System.out.println(quantity + " " + product.getName() + "(s) added to the cart.");
    }

    public double calculateTotalPrice() {
        double totalPrice = 0.0;
        for (Product product : products) {
            totalPrice += product.calculateTotal(1); // Assuming quantity is always 1 for simplicity
        }
        return totalPrice;
    }
}

class User {
    private String username;
    private String email;
    ShoppingCart shoppingCart;

    public User(String username, String email) {
        this.username = username;
        this.email = email;
        this.shoppingCart = new ShoppingCart();
    }

    public void viewCart() {
        System.out.println("Shopping Cart for " + username + ":");
        System.out.println("Total Price: $" + shoppingCart.calculateTotalPrice());
    }

    public void finalizeCart() {
        System.out.println("Cart finalized for user " + username + ". Thank you for shopping!");
        // Additional logic for order processing can be added here
    }
}

public class OnlineStoreSys {
    public static void main(String[] args) {
        Electronics laptop = new Electronics("Laptop", 800.0);
        Clothing shirt = new Clothing("T-Shirt", 20.0);
        Books novel = new Books("Mystery Novel", 15.0);

        User user1 = new User("Mohit", "mohit@gmail.com");

        user1.shoppingCart.addProduct(laptop, 2);
        user1.shoppingCart.addProduct(shirt, 3);
        user1.shoppingCart.addProduct(novel, 1);

        user1.viewCart();
        user1.finalizeCart();
    }
}
