package PaqComercio;

import java.util.ArrayList;
import java.util.Arrays;

public class Concesionario extends Comercio implements Cloneable {
    private VehiculoVenta[] V;
    private ArrayList<VehiculoParaReparar> R;

    public Concesionario(String nombre, String direccion, String cif, double[][] ventasDiarias, int[] stock, Empleado[] empleados, VehiculoVenta[] v, ArrayList<VehiculoParaReparar> r) {
        super(nombre, direccion, cif, ventasDiarias, stock, empleados);
        V = v;
        R = r;
    }

    public String toStringVehiculoVenta() {
        return "Concesionario{" +
                "V=" + Arrays.toString(V) +
                '}';
    }
    public String toStringVehiculoReparar() {
        String res = "";
        for (int i=0; i<R.size(); i++) {
            res += R.get(i).toString();
        }
        return "Concesionario{" +
                ", R=" + res +
                '}';
    }

    public VehiculoVenta[] getV() {
        return V;
    }

    public void setV(VehiculoVenta[] v) {
        V = v;
    }

    public ArrayList<VehiculoParaReparar> getR() {
        return R;
    }

    public void setR(ArrayList<VehiculoParaReparar> r) {
        R = r;
    }

    public Object clone() throws CloneNotSupportedException {
        Concesionario concesionario = (Concesionario) super.clone();
        concesionario.V = new VehiculoVenta[V.length];
        concesionario.R = new ArrayList<VehiculoParaReparar>();

        for (int i = 0; i < V.length; i++) {
            concesionario.V[i] = V[i];
        }
        for (int i = 0; i < R.size(); i++) {
            concesionario.R.set(i,R.get(i));
        }
        return concesionario;
    }

    public void aniadirVenta(VehiculoVenta vehiculo) {
        for (int i=0; i<V.length; i++) {
            if (V[i] == null) {
                V[i] = vehiculo;
            }
        }
    }
    public void repararVehiculo(int pos) {

        R.get(pos).setReparado(true);
    }
    public void venderVehiculo(int pos) {
        V[pos] = null;
    }
    public Vehiculo recogerVehiculo(String matricula) {
        for (int i=0; i<R.size(); i++) {
            if (R.get(i).isReparado() && matricula.equals(R.get(i).getMatricula())){
                Vehiculo encontrado = R.get(i);
                R.set(i,null);
                return encontrado;
            }
        }
        return null;
    }

    public void aniadirReparar(VehiculoParaReparar vehiculo) {
        int len = R.size();
        for (int i=0; i<len; i++) {
            if (vehiculo.getPrioridad() == R.get(i).getPrioridad()|| i == R.size()){
                R.add(i,vehiculo);
            }
        }
    }
}
