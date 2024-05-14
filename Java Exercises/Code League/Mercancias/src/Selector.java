import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
public class Selector {
    String[][] inventario;
    String[] ordenado;
    int cantidad;
    private static final int CARGA_MAX = 400;

    public Selector(int cantidad) {
        inventario = new String[cantidad][3];
        ordenado = new String[cantidad];
        this.cantidad = cantidad;
    }

    public void ordenarPeso() {
        double ligero, actual;
        int index_ligero = 0;
        ligero = Double.parseDouble(inventario[index_ligero][1]);
        for (int i=0; i<cantidad; i++) {

            if (inventario[i][1] != null){
                actual = Double.parseDouble(inventario[i][1]);
                if (actual<ligero) {
                    index_ligero = i;
                    ligero = actual;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cantidad;
        cantidad = input.nextInt();
        String[][] inventario = new String[cantidad][3];

        for (int i=0; i<cantidad; i++) {
            inventario[i] = input.next().split(" ");
        }

        Selector cargosl = new Selector(cantidad);
        cargosl.ordenar();
        System.out.println(cargosl.toString());
    }
}
