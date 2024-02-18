package PaqComplejo;
/**
 * Permite operar con listas de numeros imaginarios
 */
public class VariosNumComplejos {
    NumComplejo[] lista;

    /**
     * Constructor que inicializa tanto el array como sus miembros con valores aleatorios
     * @param n longitud del array
     */
    VariosNumComplejos(int n) {
        lista = new NumComplejo[n]; // inicializo el vector
        for (int i=0; i<n; i++) {
            lista[i] = new NumComplejo(Math.random(),Math.random()); //inicializo cada objeto
        }
    }

    /**
     * @return array de numeros imaginarios
     */
    public NumComplejo[] getLista() {
        return lista;
    }

    /**
     * Pone el array de numeros en lista
     * @param lista array de numeros imaginarios
     */
    public void setLista(NumComplejo[] lista) {
        this.lista = lista;
    }

    /**
     * Suma todos los numeross imaginarios del array
     * @return resultado
     */
    public NumComplejo sumaTodos() {
        NumComplejo resultado = new NumComplejo();
        for (int i=0; i<lista.length; i++) {
            resultado.real += lista[i].getReal();
            resultado.imaginaria += lista[i].getImaginaria();
        }
        return resultado;
    }

    /**
     * Une todos los toString de cada numero del array
     * @return cadena con todos los numeros
     */
    public String toString() {
        String total = "";
        for (int i=0; i<lista.length; i++) {
            total += lista[i].toString();
        }
        return total;
    }


}
