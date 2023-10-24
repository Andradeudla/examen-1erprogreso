#include <stdio.h> // se agrega la biblioteca que se va utilizar//
int main(void) { // se ingresa la funcion principal main//
     
    int N; // aqui se ingresan las variables que se utilizaran a lo largo del problema//
    int mayor;
    int num;
    int menor;
    int i;
    float sum = 0.0; // se ingresa una variable la cual va tener decimales por eso se le asigna el valor de 0.0//

    printf ("Ingrese un numero entero");// Solicita al usuario el número de elementos//
    scanf("%d", &N);// se lee los numero ingresados//

    printf("Introduce %d números: ", N);
    for(int i = 0; i < N; i++) { // se realiza un bucle for para que se repita un numero exacto de veces//
        scanf("%d", &num); // se escanean los valores//
        sum += num; // Agrega el número a la suma total//
        if(i == 0) { // si el primer numero avanza a la siguiente linea//
            mayor = menor = num;// se inicializa mayor y menor//
        } else { // si no es el primer numero avanza//
            if(num > mayor) { // si el primer numero es mayor//
                mayor = num;// actualiza al mayoy con ese numero//
            }
            if(num < menor) {// si numero es menor que menor//
                menor = num;// se atualiza el valor de menor//
            }
        }
    }          
            
    return 0; // es el valor que el programa regresa si esta bien ejecutado//
}