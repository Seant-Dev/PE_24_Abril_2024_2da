#include <stdio.h>

/*Declaracion de la funcion para calcular la sumatoria*/
float f(int x, int n);

int main(){
    //Declaracion de las variables del programa
    int x, n;
    float resultado;

    //Pedimos los valores de x y n al usuario
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("IOngrese el valor de n: ");
    scanf("%d", &n);

    //Llamada a la funcion para calcular la sumatoria y regresar su valor a la variable resultado
    resultado = f(x,n);
    printf("El resultado de la sumatoria es: %f\n", resultado);
    return 0;
}

/*Definicion de la funcion para calcular la sumatoria*/
float f(int x, int n){
    float r = 0, xi;
    int c;

    /*El for sirve para calcular la sumatoria y el while sirve para calcular x elevado a la potencia i */
    for(int i = 1; i <= n; i++){
        
        /*Esta seccion del codigo calcula el valor de x elevado a la i */
        c = 1;
        xi = 1;
        while(c <= i){
            xi = xi*x;
            c = c + 1;
        }

        //Esta parte calcula la sumatoria de la funcion
        r = r + (xi/n);
    }
    //Regresa el valor de r para asignarlo a la variable resultado que esta en el programa principal.
    return r;
}