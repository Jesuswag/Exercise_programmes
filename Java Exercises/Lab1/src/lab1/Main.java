package lab1;
import java.util.Scanner;

public class Main {
    public static void main (String [] args) {
        int valor;
        Scanner scan = new Scanner(System.in);
        NúmeroNatural x = new NúmeroNatural();
        NúmeroNatural y = new NúmeroNatural();
        valor = scan.nextInt();
        x.setNúmero(valor);

        valor = scan.nextInt();
        y.setNúmero(valor);

        System.out.println(x.getNúmero()+" "+y.getNúmero());
        x.decrementar();
        System.out.println(x.getNúmero()+" "+y.getNúmero());
        y.incrementar();
        System.out.println(x.getNúmero()+" "+y.getNúmero());

        System.out.println("x es par?:"+x.esPar());
        System.out.println("y es par?:"+y.esPar());

        System.out.println("x es primo?:"+x.esPrimo());
        System.out.println("y es primo?:"+y.esPrimo());

        System.out.println("x es perfecto?:"+x.esPerfecto());
        System.out.println("y es perfecto?:"+y.esPerfecto());

        System.out.println(x.getNúmero()+" elevado a 3 = " +x.pow(3));
        System.out.println("La mitad de " + y.getNúmero() + " es igual a " + y.half());

        NúmeroNatural z = x.distancia(y);
        System.out.println("La distancia entre x e y es igual a " + z.getNúmero());

        x.syncToMinor(y);
        System.out.println("Ahora x e y valen el valor mas pequeño de los dos: " + x.getNúmero()+" "+y.getNúmero());
    }
}