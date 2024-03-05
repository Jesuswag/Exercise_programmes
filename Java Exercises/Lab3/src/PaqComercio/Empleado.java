package PaqComercio;

import java.util.Objects;

public class Empleado implements Cloneable{
    private String nombre;
    private String direccion;
    private int telefono;
    private String email;
    private String fechaInicio;
    private double salalrio;
    private String cargo;

    public Empleado(String nombre, String direccion, int telefono, String email, String fechaInicio, double salalrio, String cargo) {
        this.nombre = nombre;
        this.direccion = direccion;
        this.telefono = telefono;
        this.email = email;
        this.fechaInicio = fechaInicio;
        this.salalrio = salalrio;
        this.cargo = cargo;
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

    public int getTelefono() {
        return telefono;
    }

    public void setTelefono(int telefono) {
        this.telefono = telefono;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getFechaInicio() {
        return fechaInicio;
    }

    public void setFechaInicio(String fechaInicio) {
        this.fechaInicio = fechaInicio;
    }

    public double getSalalrio() {
        return salalrio;
    }

    public void setSalalrio(double salalrio) {
        this.salalrio = salalrio;
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    @Override
    public String toString() {
        return "Empleado{" +
                "nombre='" + nombre + '\'' +
                ", direccion='" + direccion + '\'' +
                ", telefono=" + telefono +
                ", email='" + email + '\'' +
                ", fechaInicio='" + fechaInicio + '\'' +
                ", salalrio=" + salalrio +
                ", cargo='" + cargo + '\'' +
                '}';
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Empleado empleado = (Empleado) o;

        if (telefono != empleado.telefono) return false;
        if (Double.compare(salalrio, empleado.salalrio) != 0) return false;
        if (!Objects.equals(nombre, empleado.nombre)) return false;
        if (!Objects.equals(direccion, empleado.direccion)) return false;
        if (!Objects.equals(email, empleado.email)) return false;
        if (!Objects.equals(fechaInicio, empleado.fechaInicio))
            return false;
        return Objects.equals(cargo, empleado.cargo);
    }

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

}
