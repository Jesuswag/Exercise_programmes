package PaqComplejo;

/**
 * Incluye operaciones elementales para numeros imaginarios.
 * @author Jesus Arribas Gomez
 * @version 1.0
 */
public class NumComplejo {
    double real;
    double imaginaria;

    /**
     * Constructor que inicializa las dos partes con parametros racionales.
     */
    public NumComplejo(double real, double imaginaria) {
        this.real = real;
        this.imaginaria = imaginaria;
    }

    /**
     * Constructor que inicializa las dos partes con parametros enteros
     */
    public NumComplejo(int real, int imaginaria) {
        this.real = real;
        this.imaginaria = imaginaria;
    }

    /** Constructor vacio que inicizaliza sendas partes a 0
     */
    public NumComplejo() {
        this(0,0);
    }

    /** Constructor que inicializa un numero mediante otro objeto
     */
    public NumComplejo(NumComplejo otro) {
        this.real = otro.real;
        this.imaginaria = otro.imaginaria;
    }

    /** Permite asignar valor a la parte real
     */
    public void setReal (double real) {
        this.real = real;
    }

    /** Permite asignar valor a la parte imaginaria
     */
    public void setImaginaria(double imaginaria) {
        this.imaginaria = imaginaria;
    }
    /** Devuelve la parte real */
    public double getReal () {
        return real;
    }
    /** Devuelve la parte imaginaria */
    public double getImaginaria() {
        return imaginaria;
    }
    /** Suma dos numeros complejos
     * @param otro segundo sumando
     * @return resultado
     */
    public NumComplejo sumar(NumComplejo otro) {
        NumComplejo aux = new NumComplejo();
        aux.real = this.real + otro.real;
        aux.imaginaria = this.imaginaria + otro.imaginaria;
        return aux;
    }

    /**
     * Resta dos numeros complejos
     * @param otro sustraendo
     * @return resultado
     */
    public NumComplejo restar(NumComplejo otro) {
        NumComplejo aux = new NumComplejo();
        aux.real = this.real - otro.real;
        aux.imaginaria = this.imaginaria - otro.imaginaria;
        return aux;
    }

    /**
     * Multiplica dos numeros complejos
     * @param otro segundo numero
     * @return resultado
     */
    public NumComplejo multiplicar(NumComplejo otro) {
        NumComplejo aux = new NumComplejo();
        aux.real = this.real * otro.real;
        aux.imaginaria = this.imaginaria * otro.imaginaria;
        return aux;
    }

    /**
     * Multiplica un numero complejo por un escalar
     * @param escalar factor
     * @return resultado
     */
    public NumComplejo multiplicar(double escalar) {
        NumComplejo aux = new NumComplejo();
        aux.real = this.real * escalar;
        aux.imaginaria = this.imaginaria * escalar;
        return aux;
    }

    /**
     * Transforma el numero en una cadena
     * @return numero escrito
     */
    public String toString() {
        if (this.imaginaria <0) {
            return this.real + " " + this.imaginaria + " i\n";
        } else {
            return this.real + " + " + this.imaginaria + " i\n";
        }
    }

    /**
     * Compara ambas partes de dos numeros complejos
     * @param otro segundo numero
     * @return igualdad
     */
    public boolean comparar (NumComplejo otro) {
        if (this.real == otro.real) {
            return this.imaginaria == otro.imaginaria;
        }
        return false;
    }
}
