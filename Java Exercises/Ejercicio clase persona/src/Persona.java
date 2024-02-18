public class Persona {
    String nombre;
    Integer edad; // usare wrappers porque hay casos en los que imprimes en pantalla datos no definidos.
    Float altura;
    Float peso;
    String direccion;
    Persona[] hijos;
    int indexHijo = 0;

    public Persona (String nombre, int edad, float altura, float peso, String direccion, int numhijos) {
        this.nombre = nombre;
        this.edad = edad;
        this.altura = altura;
        this.peso = peso;
        this.direccion = direccion;
        this.hijos = new Persona[numhijos];
    }

    public Persona (String nombre, int edad, float altura, String direccion) {
        this.nombre = nombre;
        this.edad = edad;
        this.altura = altura;
        this.direccion = direccion;

    }
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getEdad() {
        return edad;
    }

    public void setEdad(int edad) {
        if (edad > 0) {
            this.edad = edad;
        } else {
            System.out.println("Edad debe ser mayor que 0");
        }
    }
    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        if (altura > 0) {
            this.altura = altura;
        } else {
            System.out.println("Altura debe ser mayor que 0");
        }
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        if (altura > 0) {
            System.out.println("Peso debe ser mayor que 0");
        }
    }

    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public Persona[] getHijos() {
        return hijos;
    }

    public void setHijos(Persona[] hijos) {
        if (hijos != null) {
            this.hijos = hijos;
        }
    }

    public int getIndexHijo() {
        return indexHijo;
    }

    public void setIndexHijo(int indexHijo) {
        this.indexHijo = indexHijo;
    }

    /* METHODS */

    public void añadirHijo (Persona hijo) {
        hijos[indexHijo] = hijo;
        indexHijo++; // ahora tenemos un hijo mas
    }

    public Persona obtenerMayor () {
        int indexMayor = 0;
        for (int i=0; i<hijos.length; i++) {
            if (hijos[i].edad > hijos[indexMayor].edad) {
                indexMayor = i;
            }
        }
        return hijos[indexMayor];
    }

    public Persona obtenerMenor () {
        int indexMenor = 0;
        for (int i=0; i<hijos.length; i++) {
            if (hijos[i].edad < hijos[indexMenor].edad) {
                indexMenor = i;
            }
        }
        return hijos[indexMenor];
    }

    public String toString() {

        String informacion =
                "Padre" +
                "\nNombre: " + nombre +
                "\nEdad: " + edad +
                "\nAltura: " + altura +
                "\nPeso: " + peso +
                "\nDireccion: " + direccion +
                "\n";

        for (int i=0; i<indexHijo; i++) {
            informacion +=
                    "Hijo " + (i+1) +
                    "\n\tNombre:" + hijos[i].nombre +
                    "\n\tEdad: " + hijos[i].edad +
                    "\n\tAltura: " + hijos[i].altura +
                    "\n\tPeso: " + hijos[i].peso +
                    "\n\tDireccion: " + hijos[i].direccion +
                    "\n";
        }
        return informacion;
    }

    public static void main(String[] args) {
        Persona julio = new Persona("Julio",67,1.6f,85.7f,"Calle Madrid",2);
        Persona pablo = new Persona("Pablo",34,1.8f,79.3f,"Calle amapola",3);
        System.out.println(julio.toString() + "\n" + pablo.toString());

        julio.setEdad(24);
        System.out.println("Edad de julio: " + julio.getEdad() + "\n");

        Persona raul = new Persona("Raul",12,1.6f,"Calle amapola");
        Persona laura = new Persona("Laura",16,1.74f,"Calle amapola");
        Persona miriam = new Persona("Miriam",14,1.68f,"Calle amapola");

        pablo.añadirHijo(raul);
        pablo.añadirHijo(laura);
        pablo.añadirHijo(miriam);

        System.out.println(pablo.toString());

        float alturaJulio = julio.getAltura();
        float alturaPablo = pablo.getAltura();

        System.out.println("Altura de Julio: " + alturaJulio);
        System.out.println("Altura de Pablo: " + alturaPablo);


    }

}