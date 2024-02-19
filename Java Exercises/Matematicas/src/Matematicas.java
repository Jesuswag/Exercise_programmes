import java.util.Scanner;

public class Matematicas {
    public static final double PI = 3.1416;
    private static int factorial (int n) {
        int res = 1;
        for (int i=n; i>1; i--) {
            res *= i;
        }
        return res;
    }

    /** Polinomio de Maclaurin para sin(x)
     * @param x valor (cercano a 0 para ser preciso)
     * @param n numero iteraciones (precision)
     * @return sin(x)
     */
    public static double seno(double x, int n) {
        double resultado = x;
        for (int i=1 ; i<=n; i++) {
            resultado += Math.pow(-1,i) * Math.pow(x,2*i+1) / factorial(2*i+1);
        }
        return resultado;
    }
    static double bakshali(double x){
        double raiz=0;
        int n = 0;

        for(int i=0; i<x; i++){ //Este bucle es para encontrar el cuadrado de n más cercano a x
            if(Math.abs((int)x-(i*i))<=1){
                n=i;
            }
        }

        raiz=(Math.pow(n, 4)+6*Math.pow(n, 2)*x+Math.pow(x, 2))/(4*Math.pow(n, 3)+4*n*x);

        return raiz;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println(Math.sin(2));
        System.out.println(seno(2,5));
        System.out.println(seno(PI,8));
        System.out.println(Math.sqrt(8));
        System.out.println(bakshali(8));
        System.out.println("Introduce un número para calcular su seno");
        System.out.println(seno(scanner.nextDouble(),4));
        System.out.println("Introduce un número para calcular su raíz cuadrada");
        System.out.println(bakshali(scanner.nextDouble()));

    }
}