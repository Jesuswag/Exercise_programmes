package PaqComercio;

import java.util.Objects;

public abstract class Vehiculo implements Cloneable{
    private String marca;
    private String modelo;
    private String matricula;

    public Vehiculo(String marca, String modelo, String matricula) {
        this.marca = marca;
        this.modelo = modelo;
        this.matricula = matricula;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    @Override
    public String toString() {
        return "Vehiculo{" +
                "marca='" + marca + '\'' +
                ", modelo='" + modelo + '\'' +
                ", matricula='" + matricula + '\'' +
                '}';
    }
    // en este caso se sobrescribiria
    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        Vehiculo vehiculo = (Vehiculo) o;

        if (!marca.equals(vehiculo.marca)) return false;
        if (!modelo.equals(vehiculo.modelo)) return false;
        return matricula.equals(vehiculo.matricula);
    }

    // en este caso se sobrecargaria
    public boolean equals(Vehiculo otro) {
        if (this.modelo.equals(otro.modelo)) {
            if (this.marca.equals(otro.marca)) {
                if (this.matricula.equals(otro.matricula)){
                    return true;
                }
            }
        }
        return false;
    }

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

}
