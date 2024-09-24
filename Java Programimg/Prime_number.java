public class Prime_number {
    public static void main(String[] args) {
        int i, j, n;
        for (i = 1; i <= 50; i++) {
            n = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    n = n + 1;
                }
            }
            if (n == 2)
                System.out.println(i);
        }
    }
}

class Prime {
    public void Print_prime() {
        int i, j, n;
        for (i = 1; i <= 50; i++) {
            n = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    n = n + 1;
                }
            }
            if (n == 2) {
                System.out.println(i);
            }
        }
    }

}