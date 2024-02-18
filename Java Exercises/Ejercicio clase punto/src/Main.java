import java.math.*;

public class Main {
    public static void main(String[] args) {
        Punto p1 = new Punto(3,4);
        Punto p2 = new Punto(6,-8);
        Punto p3 = new Punto();
        Punto p4 = new Punto(-3,-4);
        double a = p1.distancia(p2);
        double b = p2.distancia(p3);
        double c = p3.distancia(p1);
        double perimetro123 = a + b + c;
        double s = perimetro123/2; // semiperímetro para la fórmula de heron
        double area123 = Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println(
                "Punto 1: " + p1.toString() + "\n" +
                "Punto 2: " + p2.toString() + "\n" +
                "Punto 3: " + p3.toString() + "\n" +
                "Punto 4: " + p4.toString() + "\n" +
                "Distancia 1-2 " + p1.distancia(p2) + "\n" +
                "Distancia 2-3 " + p2.distancia(p3) + "\n" +
                "Colineal 1-2-3 " + p1.esColinealCon(p2,p3) + "\n" +
                "Medio 3-4 " + p3.puntoMedio(p4) + "\n" +
                "Igual 1-4 " + p1.equals(p4) + "\n" +
                "Perímetro 1-2-3 " + perimetro123 + "\n" +
                "Área 1-2-3 " + area123);
    }
}