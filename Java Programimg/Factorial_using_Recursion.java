import java.util.Scanner;

class Fact {
    public int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
}

public class Factorial_using_Recursion {
    public static void main(String[] args) {
        Scanner inpute = new Scanner(System.in);
        int number;
        System.out.println("Enter the number to get factorial");
        number = inpute.nextInt();
        Fact f = new Fact();
        System.out.println("Factorial of " + number + " is " + f.factorial(number));
    }
}