import java.util.*;

class Exp5 {
	// Recursive function to calculate Fibonacci sequence
	public static int fibonacciRecursive(int n) {
		if (n <= 1) {
			return n;
		} else {
			return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
		}
	}
	// Non-recursive function to calculate Fibonacci sequence
	public static int fibonacciNonRecursive(int n) {
		if (n <= 1) {
			return n;
		}

		int fib = 1;
		int prevFib = 1;

		for (int i = 2; i < n; i++) {
			int temp = fib;
			fib += prevFib;
			prevFib = temp;
		}
		return fib;
	}
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter the Value of N: ");
		int n = scanner.nextInt();
		scanner.close();
		// Using recursion
		System.out.println("Using Recursion:");
		for (int i = 0; i < n; i++) {
			System.out.print(fibonacciRecursive(i) + " ");
		}
		// Using non-recursive approach
		System.out.println("\n\nUsing Non-Recursive Approach:");
		for (int i = 0; i < n; i++) {
			System.out.print(fibonacciNonRecursive(i) + " ");
		}
	}
}