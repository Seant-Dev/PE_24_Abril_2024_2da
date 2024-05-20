#include <stdio.h>

//Funcion para calcular la velocidad instantanea de un corredor
float velocidadInstantanea(float d, float t);

int main(){
    //Declaracion de las variables del programa
    float d, t, instantanea = 0, sumatoria = 0;
    int numCorredores;

    //Aqui se ingresa el numero de corredores para el programa
    printf("Ingrese el numero de corredores: ");
    scanf("%d", &numCorredores);

    
    //Ciclo para calcular la velocidad de los n corredores
    for(int i = 1; i <= numCorredores; i++){
        printf("\nCorredor: %d", i);
        printf("\nDistancia recorrida: ");
        scanf("%f", &d);
        printf("Tiempo del recorrido: ");
        scanf("%f", &t);

        //Llamada a la funcion para calcular velocidad de cada corredor
        instantanea = velocidadInstantanea(d, t);
        printf("Velocidad del corredor: %f", instantanea);

        //Variable que acumula la sumatoria de velocidades para posteriormente calcular el promedio
        sumatoria = sumatoria + instantanea;
    }

    //Impresion que calcular la velocidad promedio de los corredores y la imprime
    printf("\n\nEl promedio de velocidad de los corredores es: %f m/s\n", sumatoria/numCorredores);
    return 0;
}


/*Funcion que calcula la velocidad de cada corredor, como se puede observar la velocidad se calcula directamente en el return*/
float velocidadInstantanea(float d, float t){
    return d/t;
}