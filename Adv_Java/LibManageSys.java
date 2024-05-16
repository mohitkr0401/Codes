import java.util.ArrayList;
import java.util.List;

class Book {
    private String title;
    private String author;
    private boolean available;

    public Book(String title, String author) {
        this.title = title;
        this.author = author;
        this.available = true;
    }

    public void displayInfo() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Availability: " + (available ? "Available" : "Not Available"));
    }

    public boolean isAvailable() {
        return available;
    }

    public void setAvailable(boolean available) {
        this.available = available;
    }

    public String getTitle() {
        return title;
    }
}

class JavaBook extends Book {
    public JavaBook(String title, String author) {
        super(title, author);
    }
}

class DBMSBook extends Book {
    public DBMSBook(String title, String author) {
        super(title, author);
    }
}

class SoftwareEngineeringBook extends Book {
    public SoftwareEngineeringBook(String title, String author) {
        super(title, author);
    }
}

class Library {
    private List<Book> books;

    public Library() {
        this.books = new ArrayList<>();
    }

    public void addBook(Book book) {
        if (!books.contains(book)) {
            books.add(book);
            System.out.println("Book added to the library: " + book.getTitle());
        } else {
            System.out.println("Book already exists in the library.");
        }
    }

    public void removeBook(Book book) {
        if (books.remove(book)) {
            System.out.println("Book removed from the library: " + book.getTitle());
        } else {
            System.out.println("Book not found in the library.");
        }
    }

    public void searchBook(String title) {
        for (Book book : books) {
            if (book.getTitle().equalsIgnoreCase(title)) {
                book.displayInfo();
                return;
            }
        }
        System.out.println("Book not found in the library.");
    }
}

class User {
    private String name;
    @SuppressWarnings("unused")
    private int libraryCardNumber;
    private List<Book> borrowedBooks;

    public User(String name, int libraryCardNumber) {
        this.name = name;
        this.libraryCardNumber = libraryCardNumber;
        this.borrowedBooks = new ArrayList<>();
    }

    public void borrowBook(Book book) {
        if (book.isAvailable()) {
            borrowedBooks.add(book);
            book.setAvailable(false);
            System.out.println(name + " borrowed the book: " + book.getTitle());
        } else {
            System.out.println("The book is not available for borrowing.");
        }
    }

    public void returnBook(Book book) {
        if (borrowedBooks.remove(book)) {
            book.setAvailable(true);
            System.out.println(name + " returned the book: " + book.getTitle());
        } else {
            System.out.println("You did not borrow this book from the library.");
        }
    }
}


public class LibManageSys {
    public static void main(String[] args) {
        JavaBook javaBook = new JavaBook("Effective Java", "Joshua Bloch");
        DBMSBook dbmsBook = new DBMSBook("Database Management Systems", "Raghu Ramakrishnan");
        SoftwareEngineeringBook seBook = new SoftwareEngineeringBook("Clean Code", "Robert C. Martin");

        Library library = new Library();
        library.addBook(javaBook);
        library.addBook(dbmsBook);
        library.addBook(seBook);

        User user1 = new User("Mohit", 123);
        User user2 = new User("Rahul", 456);

        user1.borrowBook(javaBook);
        user2.borrowBook(dbmsBook);

        library.searchBook("Effective Java");

        user1.returnBook(javaBook);

        library.searchBook("Effective Java");
    }
}
