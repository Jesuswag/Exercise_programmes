package PaqComplejo;


public class NumComplejoMain {
    public static void main(String[] args) {
        // PARTE 1
        NumComplejo a,b,c,d,e,f,g;
        a = new NumComplejo();
        b = new NumComplejo(2,3);
        c = new NumComplejo(4.2,-5.6);

        d =  b.sumar(c);
        e =  c.restar(d);
        f =  d.multiplicar(e);
        g =  f.multiplicar(3.3);

        System.out.println(a.toString());
        System.out.println(b.toString());
        System.out.println(c.toString());
        System.out.println(d.toString());
        System.out.println(e.toString());
        System.out.println(f.toString());
        System.out.println(g.toString());
        System.out.println(g.comparar(g));
        System.out.println(g.comparar(a));

        // PARTE 2
        VariosNumComplejos conjunto = new VariosNumComplejos(3);
        NumComplejo suma;

        System.out.println(conjunto.toString());
        suma = conjunto.sumaTodos();
        System.out.println(suma.toString());

    }
}