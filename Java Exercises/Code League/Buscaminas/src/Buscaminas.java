import java.util.Scanner;


public class Buscaminas {
    private int X;
    private int Y;
    private int[][] tablero;
    boolean error = false;

    public void formarCampo() {
        for (int i=0; i<X; i++) {
            for (int j=0; j<Y; j++) {
                if (tablero[i][j] == -1) {
                    continue;
                } else {
                    for (int k = i-1; k<=i+1; k++) {
                        for (int l = j-1; l<= j+1; l++) {
                            try {
                                if (tablero[k][l] == -1) {
                                    tablero[i][j]++;
                                }
                            } catch(Exception ignored) {}
                        }
                    }
                }
            }
        }
    }

    public void meterminas(int[][] minas) {
        int x, y;
        for (int[] mina : minas) {
            x = mina[0];
            y = mina[1];
            if (tablero[x][y] == -1) {
                error = true;
                return;
            } else {
                tablero[x][y] = -1;
            }

        }
    }

    public Buscaminas(int X, int Y) {
        this.X = X;
        this.Y = Y;
        tablero = new int[X][Y];
    }

    public String toString() {
        StringBuilder output = new StringBuilder();
        if (error) {
            output.append("ERROR");
        } else {
            for (int i=0; i<X; i++) {
                for (int j=0; j<Y; j++) {
                    output.append(tablero[i][j]).append(" ");
                }
                output.append("\n");
            }
        }
        return output.toString();
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[][] cordenadasMinas = new int[3][2];
        for (int i=0; i<3; i++) {
            for (int j=0; j<2; j++) {
                cordenadasMinas[i][j] = input.nextInt();
            }
        }
        Buscaminas juego1 = new Buscaminas(5,5);
        juego1.meterminas(cordenadasMinas);
        juego1.formarCampo();
        System.out.println(juego1.toString());

    }
}
