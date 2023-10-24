#include <stdio.h> // se agrega la biblioteca que se va utilizar//
int main(void) { // se ingresa la funcion principal main//
     
    int N; // aqui se ingresan las variables que se utilizaran a lo largo del problema//
    int promedio;
    int mayor;
    int num;
    int menor;
    int i;
    float sum = 0.0; // se ingresa una variable la cual va tener decimales por eso se le asigna el valor de 0.0//

    printf ("Ingrese un numero entero");
    scanf("%d", &N);

    printf("Introduce %d números: ", N);
    for(int i = 0; i < N; i++) { // se realiza un bucle for para que se repita un numero exacto de veces//
        scanf("%d", &num); // se escanean los valores//
        sum += num; // Agrega el número a la suma total//    


    return 0; // es el valor que el programa regresa si esta bien ejecutado//
}