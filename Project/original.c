/*
 * Grupo T_2
 * Alonso Serrano García
 * Jesus Arribas Gómez
 * Dimas Antonio Torralba Raluy
 */

// Estas son las librerias que necesitaremos.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "library.h" // Nos proporciona la hora.

// Estas son nuestras constantes.
#define MESES 12
#define DIAS 30
#define MAX_EMPLEADOS 20 // No puede haber mas de 20 empleados en la empresa.
#define FIN_JORNADA 1140 // No me puedo registrar mas alla de las 19:00 (1140 minutos).

// Creamos el struct Empleado para guardar los datos de los Empleado.
struct Empleado{
    char nombre[20];
    char apellidos[30];
    char dni[10];
    bool existe; // Para comprobar que el empleado esta disponible.
    int trabajo_entrada[MESES][DIAS];  // Array que en cada dia del año incluye la hora (en minutos, desde que empieza el dia) en la que entras al trabajo.
    int trabajo_salida[MESES][DIAS];  // Array que en cada dia del año incluye la hora (en minutos, desde que empieza el dia) en la que sales del trabajo.
    int trabajo_total[MESES]; // Array que recoge las horas totales (en minutos) trabajadas en cada mes.
    int trabajo_anio; // Horas (en minutos) trabajadas durante el anio.
};

// Nuestras cabeceras.
void dar_alta(struct Empleado datos_empleados[MAX_EMPLEADOS]); // Alta nuevo empleado.

void hora_entrada(struct Empleado datos_empleados[MAX_EMPLEADOS]); // Registrar hora entrada.

void hora_salida(struct Empleado datos_empleados[MAX_EMPLEADOS]); // Registrar hora salida.

void salario_mensual(struct Empleado datos_empleados[MAX_EMPLEADOS]); // Salario mensual.

void dar_de_baja(struct Empleado datos_empleados[MAX_EMPLEADOS]); // Dar de baja.

int main(){
    struct Empleado datos_empleados[MAX_EMPLEADOS];  //Esta sera nuestra lista de Empleado

    for (int i=0; i<MAX_EMPLEADOS;i++){ // Con este bucle nos aseguramos de que la lista de Empleado funcione correctamente
        datos_empleados[i].existe = false; // Inicializamos a todos los empleados como no existentes.
        strcpy(datos_empleados[i].nombre,"\0"); // Inicializamos nombres,apellidos y DNIs
        strcpy(datos_empleados[i].apellidos,"\0");
        strcpy(datos_empleados[i].dni,"\0");
        datos_empleados[i].trabajo_anio = 0; // El total del anio
        for (int j = 0; j<MESES;j++){ //Inicializamos las horas de entrada/salida a -1 (asi en el caso de que se entre a las 00:00 funcionara correctamente)
            datos_empleados[i].trabajo_total[j] = 0; //El total del mes
            for (int k = 0; k<DIAS;k++){
                datos_empleados[i].trabajo_entrada[j][k] = -1;
                datos_empleados[i].trabajo_salida[j][k] = -1;
            }
        }
    }

    puts("______                                   _       \n"
         "| ___ (-)                         (-)   | |      \n"
         "| |/ /  ___ _ ____   _____ _ __  _  __| | ___  \n"
         "| ___ \\ |/ _ \\ '_ \\ \\ / / _ \\ '_ \\| |/ _` |/ _ \\ \n"
         "| |_/ / |  __/ | | \\ V /  __/ | | | | (_| | (_) |\n"
         "\\____/|_|\\___|_| |_|\\_/ \\___|_| |_|_|\\__,_|\\___/");

    int opcion; //para seleccionar las opciones del menu
    bool bucle_menu= true; // Para que el programa no se cierre

    while(bucle_menu){

        puts("\n1. Dar de alta nuevo empleado."
               "\n2. Registrar hora de entrada."
               "\n3. Registrar hora de salida."
               "\n4. Calcular salario mensual."
               "\n5. Dar de baja a un usuario."
               "\n6. Salir del programa.\n");

        scanf("%d", &opcion);
        fflush(stdin);
        switch(opcion){
            case 1:
                dar_alta(datos_empleados);
                break;

            case 2:
                hora_entrada(datos_empleados);
                break;

            case 3:
                hora_salida(datos_empleados);
                break;

            case 4:
                salario_mensual(datos_empleados);
                break;

            case 5:
                dar_de_baja(datos_empleados);
                break;

            case 6:
                bucle_menu= false;
                break;

            default:
                puts("Opcion invalida. Vuelva a intentarlo.");
                break;
        }
    }
    puts(" ________  ___  ___  ________  ________     \n"
         "|\\   ____\\|\\  \\|\\  \\|\\   __  \\|\\   __  \\    \n"
         "\\ \\  \\___|\\ \\  \\\\\\  \\ \\  \\|\\  \\ \\  \\|\\  \\   \n"
         " \\ \\  \\    \\ \\   __  \\ \\   __  \\ \\  \\\\\\  \\  \n"
         "  \\ \\  \\____\\ \\  \\ \\  \\ \\  \\ \\  \\ \\  \\\\\\  \\ \n"
         "   \\ \\_______\\ \\__\\ \\__\\ \\__\\ \\__\\ \\_______\\\n"
         "    \\|_______|\\|__|\\|__|\\|__|\\|__|\\|_______|");
    return 0;
}

void dar_alta(struct Empleado datos_empleados[MAX_EMPLEADOS]) {
// Codigo es una string auxiliar en la que el usuario introducira los datos.
    char codigo[20];
// Con n vamos en busca de huecos vacios en nuestra lista de empleados. Si aun no hemos visto la lista entera y no hay hueco libre vemos el siguiente.
    int n=0;

    while (datos_empleados[n].existe==true && n!=MAX_EMPLEADOS){
        n++;
    }

    if (n==20) {
        puts("La lista de empleados se encuentra llena.");
    } else {
        datos_empleados[n].existe = true;
// Donde vayamos a guardar al nuevo empleado ponemos el existe como true.
// Leemos y guardamos todos los datos.
        puts("Digame el nombre del empleado:");
        strcpy(datos_empleados[n].nombre, gets(codigo));
        fflush(stdin);
        puts("Digame los apellidos del empleado:");
        strcpy(datos_empleados[n].apellidos, gets(codigo));
        fflush(stdin);
        puts("Digame el dni del empleado:");
        strcpy(datos_empleados[n].dni, gets(codigo));
        fflush(stdin);
// Imprimimos los datos de todos los empleados existentes hasta el momento.
        puts("\nLISTA ACTUAL DE EMPLEADOS:");
        for (int i = 0; i < MAX_EMPLEADOS; ++i) {
            if (datos_empleados[i].existe == true){
                printf("Empleado nro. %d:\n", i + 1);
                printf("Nombre: %s.\n", datos_empleados[i].nombre);
                printf("Apellidos: %s.\n", datos_empleados[i].apellidos);
                printf("DNI: %s.\n\n", datos_empleados[i].dni);
            }
        }
    }
}

void hora_entrada(struct Empleado datos_empleados[MAX_EMPLEADOS]){
    int mes, dia, hora, min, min_total, n = 0; // La n al iterar el do-while "va buscando" al empleado cuyo dni coincida con el codigo introducido.
    char codigo[10]; // Codigo es una string auxiliar en la que el usuario introducira los datos.
    bool coincide = false; // Para comprobar si el dni concuerda con alguno de la lista.

    puts("Digame su codigo de empleado (DNI):");
    fflush(stdin);
    gets(codigo);

    do{ // Si el dni es igual al codigo introducido (y la persona existe) entonces hemos encontrado a nuestro empleado.
        if(strcmp(datos_empleados[n].dni,codigo)==0 && datos_empleados[n].existe == true){ // El strcmp compara el codigo con el del empleado.
            coincide=true;
        } else {
            n++;  // Si no lo hemos encontrado pasamos al siguiente.
        }
    }while (coincide==false && n<MAX_EMPLEADOS);

    if(coincide==false) {
        puts("El codigo no coincide con ningun empleado.\n");

    }else{ // Si el código coincide registramos mes, día y hora.
        printf("Bienvenido %s [Empleado nro. %d]\n",datos_empleados[n].nombre,n+1);

        do { // Registro del mes.
            puts("Digame el mes, utilizando un numero del 1 al 12.");
            scanf("%d", &mes);
            fflush(stdin);
            if (mes<1  ||  mes>12) puts("Mes invalido.");
        } while (mes<1  ||  mes>12);

        do { // Resgistro del día.
            puts("Digame el dia, utilizando un numero del 1 al 30.");
            scanf("%d", &dia);
            if (dia<1 || dia>30) puts("Dia invalido.");
        } while (dia<1 || dia>30);

        Get_hora(&hora, &min); // Llamamos a la función Get_hora para guardar la hora y minutos en los que estamos.
        min_total = hora*60 + min; // Pasamos las horas a minutos y guardamos to-do junto.

        if (min_total > FIN_JORNADA){
            puts("Estas fuera del horario laboral");
        } else { // Si la fecha es correcta la guardamos (en minutos).
            datos_empleados[n].trabajo_entrada[mes-1][dia-1] = min_total; // Le restamos uno porque la posicion en arrays se cuenta desde 0
            printf("%s %s entra a las %02d:%02d el %d del %d.",datos_empleados[n].nombre,datos_empleados[n].apellidos,hora,min,dia,mes);
        }
    }
}

void hora_salida(struct Empleado datos_empleados[MAX_EMPLEADOS]) {
    int mes, dia, hora, min, min_total, n = 0; // La n al iterar el do-while "va buscando" al empleado cuyo dni coincida con el codigo introducido.
    char codigo[10]; // Codigo es una string auxiliar en la que el usuario introducira los datos.
    int trabajado, opcion; // Opcion para decidir entre manual y automatico.
    bool coincide = false; // Volvemos a comprobar si el código del empleado coincide o no.

    puts("Introduzca el codigo de empleado (DNI):");
    gets(codigo);
    do {
        if (strcmp(datos_empleados[n].dni, codigo)== 0 && datos_empleados[n].existe== true) {
            coincide = true;
        } else {
            n++;
        }
    } while (coincide==false && n<MAX_EMPLEADOS);

    if (coincide == false) {
        puts("El codigo no coincide con ningun empleado.");
    } else {
        printf("Bienvenido %s [Empleado nro. %d]\n", datos_empleados[n].nombre, n + 1);
        do {
            // Si el código coincide con alguno de los empleados preguntamos el mes y día.
            puts("Digame el mes, utilizando un numero del 1 al 12.");
            scanf("%d", &mes);
            if (mes<1 || mes>12) puts("Mes invalido.");
        } while (mes<1 || mes>12);

        do {
            puts("Digame el dia, utilizando un numero del 1 al 30.");
            scanf("%d", &dia);
            if (dia<1 || dia>30) puts("Dia invalido.");
        } while (dia<1 || dia>30);

        if (datos_empleados[n].trabajo_entrada[mes - 1][dia - 1] == -1) { // Los usuarios tienen los minutos trabajados inicializados a -1.
            puts("No existe hora de entrada en este dia.");
        } else {
            puts("Si quiere introducir la hora de salida manualmente pulse 1, en caso contrario pulse 0.");
            do { // De que forma quiere registrar la hora de salida.
                scanf("%d", &opcion);
                if (opcion != 0 && opcion != 1) puts("Opcion invalida.");
            } while (opcion != 0 && opcion != 1);

            if (opcion == 1) { // De forma manual.
                puts("Digame la hora en formato hh:mm");
                do {
                    scanf("%d:%d", &hora, &min); // Comprobamos que la hora tenga sentido.
                    if (hora < 0 || hora > 23 || min < 0 || min > 60) puts("Hora invalida.");
                } while (hora < 0 || hora > 23 || min < 0 || min > 60);

            } else { // De forma automatica.
                Get_hora(&hora, &min);
            }

            min_total = hora*60 + min; // Pasamos las horas a minutos y guardamos to-do junto.

            if (min_total > FIN_JORNADA || min_total < datos_empleados[n].trabajo_entrada[mes - 1][dia - 1]) { // Comprobamos 2 posibles errores:
                if (min_total > FIN_JORNADA) { // No se puede al exceder las 19:00 (FIN JORNADA = 19*60 minutos)
                    puts("La hora de salida esta fuera del horario laboral.");
                } else { // Para prevenir el caso de introducir una hora de salida mas temprana que la de salida.
                    puts("No puede salir antes de entrar.");
                }

            } else {
                printf("%s sale a las %02d:%02d el %d del %d.", datos_empleados[n].nombre, hora, min,dia,mes);
                datos_empleados[n].trabajo_salida[mes-1][dia-1] = min_total; // Guardamos la hora (en minutos) de salida.
                trabajado = datos_empleados[n].trabajo_salida[mes-1][dia-1] -
                            datos_empleados[n].trabajo_entrada[mes-1][dia -1]; // Lo que se ha trabajado ese dia equivale a la resta de hora entrada y hora salida.
                printf("\nEste dia el empleado trabajo %02d hora(s) y %02d minuto(s).\n", trabajado / 60, trabajado % 60);

                datos_empleados[n].trabajo_total[mes - 1] = 0; // Reiniciamos el total del mes para actualizarlo de nuevo
                for (int j = 0; j <DIAS; ++j) { // En cada dia del mes comprobamos si existe hora de entrada y salida (distinto de -1) y si es asi sumamos al total del mes la resta de ambas (que equivale a lo trabajado en un dia)
                    if (datos_empleados[n].trabajo_entrada[mes - 1][j] != -1 && datos_empleados[n].trabajo_salida[mes - 1][j] != -1) {
                        datos_empleados[n].trabajo_total[mes - 1] += datos_empleados[n].trabajo_salida[mes - 1][j] - datos_empleados[n].trabajo_entrada[mes - 1][j];
                    }
                }
                printf("El total del mes ha sido actualizado: %03d hora(s) y %02d minuto(s).\n",datos_empleados[n].trabajo_total[mes-1]/60,datos_empleados[n].trabajo_total[mes-1]%60);
            }
        }
    }
}

void salario_mensual(struct Empleado datos_empleados[MAX_EMPLEADOS]) {
    int mes;
    double cobro=0; // Dinero que recibira el empleado.
    do {
        puts("De que mes desea ver el salario?");
        scanf("%d", &mes);
        if (mes < 1 || mes > 12) puts("Mes invalido.");
    } while (mes < 1 || mes > 12);

    puts("SALARIO DE LOS EMPLEADOS:\n");
    // Se calcula el dinero en funcion de las horas trabajadas durante un mes:
    for (int i = 0; i < MAX_EMPLEADOS; i++) {
        if (datos_empleados[i].existe == true) {
            if (datos_empleados[i].trabajo_total[mes - 1] < 7200) { // <120 horas
                cobro = ((double) datos_empleados[i].trabajo_total[mes - 1] / 60) * 8;
            } else if (datos_empleados[i].trabajo_total[mes - 1] >= 7200 &&
                       datos_empleados[i].trabajo_total[mes - 1] < 8100) { // 120-135 horas
                cobro = ((double) datos_empleados[i].trabajo_total[mes - 1] / 60) * 12.45;
            } else if (datos_empleados[i].trabajo_total[mes - 1] >= 8100 &&
                       datos_empleados[i].trabajo_total[mes - 1] < 8700) { // 135-145 horas
                cobro = ((double) datos_empleados[i].trabajo_total[mes - 1] / 60) * 14.00;
            } else if(datos_empleados[i].trabajo_total[mes-1]>=8700) {
                cobro = ((double) datos_empleados[i].trabajo_total[mes - 1] / 60) * 15; // >145 horas
            }

            datos_empleados[i].trabajo_anio = 0; // Reiniciamos el total del anio para volver a actualizarlo
            for (int j = 0; j < MESES; j++) {
                datos_empleados[i].trabajo_anio += datos_empleados[i].trabajo_total[j];
            }
            printf("%s %s:\n%.2lf euros. En todo el anio lleva %03d hora(s) y %02d minuto(s) trabajados.\n\n", datos_empleados[i].nombre,
                   datos_empleados[i].apellidos, cobro, datos_empleados[i].trabajo_anio / 60,
                   datos_empleados[i].trabajo_anio % 60);

            // Reseteamos el registro del mes seleccionado:

            for (int j = 0;j<DIAS;j++){
               datos_empleados[i].trabajo_entrada[mes-1][j] = -1; // Iniciamos a -1 las horas de entrada y salida de todos los dias del mes.
               datos_empleados[i].trabajo_salida[mes-1][j] = -1;
            }
        }
    }
    puts("El registro de este mes ha sido reseteado.");
}

void dar_de_baja(struct Empleado datos_empleados[MAX_EMPLEADOS]){
    int mes,n = 0; // La n al iterar el do-while "va buscando" al empleado cuyo dni coincida con el codigo introducido.
    char codigo[10]; // Codigo es una string auxiliar en la que el usuario introducira los datos.
    bool coincide = false; // Volvemos a comprobar si el código del empleado coincide o no.
    double cobro; // Dinero que recibira el empleado.

    puts("Digame el codigo del empleado que quiere borrar:");
    scanf("%s",codigo);
    do{
        if(strcmp(datos_empleados[n].dni,codigo)==0 && datos_empleados[n].existe==true){
            coincide=true;
        }else{
            n++;
        }
    }while (coincide==false && n<MAX_EMPLEADOS);

    if (coincide==false){
        puts("El empleado no figura en nuestra base de datos.");

    } else {
        puts("En que mes se da de baja?");
        do {
            scanf("%d",&mes);
            if(mes <1 || mes> 12){
                puts("Mes invalido.");
            }
        } while (mes <1 || mes> 12);

        cobro = (((double)datos_empleados[n].trabajo_total[mes-1]/60)*8); // Calculamos el dinero que recibira (8/h)

        printf("%s %s:\n%.2lf + plus del 3%% = %.2lf euros.\n", datos_empleados[n].nombre,datos_empleados[n].apellidos, cobro, cobro*1.03);

        puts("Empleado borrado. Hasta la proxima.");
        // Borramos al empleado reiniciando sus variables.
        datos_empleados[n].existe = false;
        strcpy(datos_empleados[n].nombre,"\0");
        strcpy(datos_empleados[n].apellidos,"\0");
        strcpy(datos_empleados[n].dni,"\0");
        datos_empleados[n].trabajo_anio=0;
        for (int j = 0; j<MESES;j++){
            datos_empleados[n].trabajo_total[j]=0;
            for (int k = 0; k<DIAS;k++){
                datos_empleados[n].trabajo_entrada[j][k]= -1;
                datos_empleados[n].trabajo_salida[j][k]= -1;
            }
        }
    }
}
