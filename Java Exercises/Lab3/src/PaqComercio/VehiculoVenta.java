package PaqComercio;

public class VehiculoVenta extends Vehiculo implements Cloneable{
    private double precio;
    private int descuento;

    public VehiculoVenta(String marca, String modelo, String matricula, double precio, int descuento) {
        super(marca, modelo, matricula);
        this.precio = precio;
        this.descuento = descuento;
    }

    public double getPrecio() {
        return precio;
    }

    public void setPrecio(double precio) {
        this.precio = precio;
    }

    public int getDescuento() {
        return descuento;
    }

    public void setDescuento(int descuento) {
        this.descuento = descuento;
    }

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
