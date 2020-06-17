/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hp
 *
 * Created on 8 de junio de 2020, 10:15 AM
 */

#include <cstdlib>
#include <cstdio>
#include <memory>
#include <map>

using namespace std;

/*
 * 
 */

//Long es para mostrar numeros muy grandes o largos, para mostrar
//a través de mensajes es &ld

long esPar(long number){
   return number%2==0;
}

long sumaDivisores(long number){
    long i=0;
    long suma=0;
    
    for(i=1; i<=number; i++){       
        if (number%i== 0) {
            suma+= i;
        }

    }
    return suma;
}

/*
 * 
 * operador ternario
 * 
 * int sumaDivisores(int number){
    int i=0;
    int suma=0;
    
    for(i=1; i<=number/2; i++){       
            suma+= i ==0 ? i:0;
    }
    return suma+ num;
}
 */

long sumatoria(long num){
    
    return (num*(num+1))/2;
}
//recursividad
long  factorial(long number){
    if (number ==1 || number==0)
        return 1;
    return number*factorial(number-1);
    
}

int potencia(int base, int exponente){
    if(exponente==0)
        return 1;
    return base*potencia(base, exponente-1);   
}

//multiplicacion(hacer sumas sucesivas). division (es hacer restas sucesivas) usando recursividad
int multiplicacion(int number,int number1){
    if (number==0 || number1==0)
        return 0;
    return number+multiplicacion(number, number1-1);            
}

int division(int number, int number1){
    if(number<number1 )
        return 0;
    return 1+division(number-number1, number1);
         
}

int main(int argc, char** argv) {

    int number = 16;
    int number1 = 2;
    int pot = 2;
  /*  
  //  long number=8;
    if(esPar(number)){
        printf("Es par %ld\n", number);
    }else{
        printf("Es impar %ld\n", number);
    }
    printf("La suma de los divisores del numero %ld es %ld\n",number, sumaDivisores(number));
    
    printf("La sumatoria de un valor numerico %ld es %ld\n", number, sumatoria(number));
    
    printf("El factorial de %ld es %ld", number, factorial(number));
    */
    //printf("%d Elevado a la %d igual a %d\n", number, pot, potencia(number, pot));
    printf("La multiplicación del número %d y el número %d es %d\n", number, number1, multiplicacion(number, number1));
    printf("La división del número %d y el número %d es %d\n", number, number1, division(number, number1));
    return 0;
    
}

