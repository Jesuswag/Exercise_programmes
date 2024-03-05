package PaqComercio;

public class Restaurante extends Comercio implements Cloneable{
    private String[] menuDiario;
    private int numMesas;
    private int capacidad;

    public Restaurante(String nombre, String direccion, String cif, double[][] ventasDiarias, int[] stock, Empleado[] empleados, String[] menuDiario, int numMesas, int capacidad) {
        super(nombre, direccion, cif, ventasDiarias, stock, empleados);
        this.menuDiario = menuDiario;
        this.numMesas = numMesas;
        this.capacidad = capacidad;
    }

    public String[] getMenuDiario() {
        return menuDiario;
    }

    public void setMenuDiario(String[] menuDiario) {
        this.menuDiario = menuDiario;
    }

    public int getNumMesas() {
        return numMesas;
    }

    public void setNumMesas(int numMesas) {
        this.numMesas = numMesas;
    }

    public int getCapacidad() {
        return capacidad;
    }

    public void setCapacidad(int capacidad) {
        this.capacidad = capacidad;
    }

    public Object clone() throws CloneNotSupportedException {
        Restaurante restaurante = (Restaurante) super.clone();
        restaurante.menuDiario = new String[menuDiario.length];
        for (int i=0; i<menuDiario.length; i++) {
            restaurante.menuDiario[i] = menuDiario[i];
        }
        return restaurante;
    }

    public void fijarMenuDelDia(String menu, int dia) {
        menuDiario[dia] = menu;
    }
    public String VerMenuDelDia(int dia) {
        return menuDiario[dia];
    }
}
