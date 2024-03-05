package PaqComercio;

import java.util.Arrays;
import java.util.Objects;

public abstract class Comercio implements Cloneable {
    private String nombre;
    private String direccion;
    private String cif;
    private double[][] ventasDiarias;
    private int[] stock;
    private Empleado[] empleados;

    public Comercio(String nombre, String direccion, String cif, double[][] ventasDiarias, int[] stock, Empleado[] empleados) {
        this.nombre = nombre;
        this.direccion = direccion;
        this.cif = cif;
        this.ventasDiarias = ventasDiarias;
        this.stock = stock;
        this.empleados = empleados;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public String getCif() {
        return cif;
    }

    public void setCif(String cif) {
        this.cif = cif;
    }

    public double[][] getVentasDiarias() {
        return ventasDiarias;
    }

    public void setVentasDiarias(double[][] ventasDiarias) {
        this.ventasDiarias = ventasDiarias;
    }

    public int[] getStock() {
        return stock;
    }

    public void setStock(int[] stock) {
        this.stock = stock;
    }

    public Empleado[] getEmpleados() {
        return empleados;
    }

    public void setEmpleados(Empleado[] empleados) {
        this.empleados = empleados;
    }
    public String toStringVentasDiarias() {
        return "Comercio{" +
                "nombre='" + nombre + '\'' +
                ", direccion='" + direccion + '\'' +
                ", cif='" + cif + '\'' +
                ", ventasDiarias=" + Arrays.toString(ventasDiarias) +
                ", empleados=" + Arrays.toString(empleados) +
                '}';
    }
    public String toStringStock() {
        return "Comercio{" +
                "nombre='" + nombre + '\'' +
                ", direccion='" + direccion + '\'' +
                ", cif='" + cif + '\'' +
                ", stock=" + Arrays.toString(stock) +
                ", empleados=" + Arrays.toString(empleados) +
                '}';
    }
    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Comercio comercio = (Comercio) o;

        if (!Objects.equals(nombre, comercio.nombre)) return false;
        if (!Objects.equals(direccion, comercio.direccion)) return false;
        if (!Objects.equals(cif, comercio.cif)) return false;
        if (!Arrays.deepEquals(ventasDiarias, comercio.ventasDiarias)) return false;
        if (!Arrays.equals(stock, comercio.stock)) return false;
        // Probably incorrect - comparing Object[] arrays with Arrays.equals
        return Arrays.equals(empleados, comercio.empleados);
    }
    public Object clone() throws CloneNotSupportedException {
        Comercio comercio = (Comercio) super.clone();
        comercio.stock = new int[stock.length];
        comercio.empleados = new Empleado[empleados.length];
        comercio.ventasDiarias = new double[ventasDiarias.length][];

        for (int i=0; i<stock.length; i++) {
            comercio.stock[i] = stock[i];
        }
        for (int i=0; i<empleados.length; i++) {
            comercio.empleados[i] = empleados[i];
        }
        for (int i=0; i<ventasDiarias.length; i++) {
            comercio.ventasDiarias[i] = new double[ventasDiarias[i].length];
            for (int j=0; j<ventasDiarias[i].length; j++) {
                comercio.ventasDiarias[i][j] = ventasDiarias[i][j];
            }
        }
        return comercio;
    }
    public double calcularTotalVentas() {
        double resultado = 0;
        for (int i=0; i<ventasDiarias.length; i++) {
            for (int j=0; j<ventasDiarias[i].length; j++) {
                resultado += ventasDiarias[i][j];
            }
        }
        return resultado;
    }
    public double calcularVentasMes(int mes) {
        double resultado = 0;
        for (int j=0; j<ventasDiarias[mes].length; j++) {
            resultado += ventasDiarias[mes][j];
        }
        return resultado;
    }
    public int mesConMasVentas() {
        int mayor = 0;
        double dineroMes;
        for (int i=0; i<ventasDiarias.length; i++) {
            dineroMes = calcularVentasMes(i);
            if (dineroMes>mayor) {
                mayor = i;
            }
        }
        return mayor;
    }
    public void actualizarVentas(int dia, int mes, double cantidad) {
        ventasDiarias[dia][mes] = cantidad;
    }

}
