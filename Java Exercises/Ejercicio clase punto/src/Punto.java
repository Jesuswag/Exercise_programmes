import java.lang.Math;
public class Punto {
    private double x;
    private double y;
    public Punto(double x, double y) {
        this.x = x;
        this.y = y;
    }
    // sobreescribimos el metodo toString()
    public String toString() {
        return "("+x+","+y+")";
    }
    public Punto(){
        this(0,0); // si el constructor no recibe parametros lo llamamos con 0,0
    }

    public void setX (int x) {
        this.x = x;
    }
    public void setY (int y) {
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double distancia (Punto pto) {
        double t1 = (this.x - pto.x) * (this.x - pto.x);
        double t2 = (this.y - pto.y) * (this.y - pto.y);
        return Math.sqrt(t1 + t2);
    }
    boolean equals (Punto otro) {
        if (this.x == otro.x && this.y == otro.y) {
            return true;
        } else {
            return false;
        }
    }
    public Punto puntoMedio(Punto otro) {
        double mx = (this.x + otro.x)/2;
        double my = (this.y + otro.y)/2;
        // medio = new Punto(mx,my);
        // return medio;
        return new Punto(mx,my);
    }
    public void translate (double dx, double dy) {
        this.x += dx;
        this.y += dy;
    }
    public boolean esColinealCon(Punto pto2, Punto pto3)  {
        double[] vector1 = {pto2.x -this.x, pto2.y -this.y};
        double[] vector2 = {pto3.x -this.x, pto3.y -this.y};
        double determinante = vector1[0] * vector2[1] - vector1[1] * vector2[0];
        if (determinante == 0) {
            return true; // rango 1
        } else {
            return false; // rango 2
        }
    }
}
