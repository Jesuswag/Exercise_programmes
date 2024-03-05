package PaqComercio;

public class VehiculoParaReparar extends Vehiculo implements Cloneable{
    private String averia;
    private boolean reparado;
    private int prioridad;

    public VehiculoParaReparar(String marca, String modelo, String matricula, String averia, boolean reparado, int prioridad) {
        super(marca, modelo, matricula);
        this.averia = averia;
        this.reparado = reparado;
        this.prioridad = prioridad;
    }

    public String getAveria() {
        return averia;
    }

    public void setAveria(String averia) {
        this.averia = averia;
    }

    public boolean isReparado() {
        return reparado;
    }

    public void setReparado(boolean reparado) {
        this.reparado = reparado;
    }

    public int getPrioridad() {
        return prioridad;
    }

    public void setPrioridad(int prioridad) {
        this.prioridad = prioridad;
    }

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
