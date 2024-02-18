package lab1;

public class NúmeroNatural { // Una clase es como una plantilla. Imagina un struct al que también puedes meterle funciones.
    int número;
    void setNúmero(int número) { // this representa el nombre de cualquier objeto de la clase
        if (número >= 0) {
            this.número = número;
        }
    }
    int getNúmero() {
        return this.número;
    }
    void incrementar() {
        this.número++;
    }
    void decrementar() {
        if (this.número != 0) {
            this.número--;
        }
    }
    boolean esPar() {
        if (this.número % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }
    boolean esPrimo() {
        for (int i = 2; i < this.número; i++) {
            if (this.número % i == 0) {
                return false;
            }
        }
        return true;
    }

    boolean esPerfecto() {
        int aux = 0;
        for (int i = 1; i < this.número; i++) {
            if (this.número % i == 0) {
                aux += i;
            }
        }
        if (aux == this.número) {
            return true;
        } else {
            return false;
        }
    }

    int pow(int exponente) {
        int res = número;
        for (int i = exponente; i > 1; i--) {
            res *= número;
        }
        return res;
    }

    double half() {
        return (double) número / 2;
    }

    NúmeroNatural distancia(NúmeroNatural x) {
        NúmeroNatural nuevo = new NúmeroNatural();
        if (this.número > x.número) {
            nuevo.número = this.número - x.número;
        } else {
            nuevo.número = x.número - this.número;
        }
        return nuevo;
    }

    void syncToMinor (NúmeroNatural x) {
        if (this.número > x.número) {
            this.número = x.número;
        } else {
            x.número = this.número;
        }
    }
}

