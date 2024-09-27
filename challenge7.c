#include <stdio.h>
/*Inversion d'un Entier
Écrivez un programme C qui lit un entier à plusieurs chiffres
et l'affiche en ordre inverse sans utiliser de tableaux. 
Par exemple, si l'entrée est 12345, affichez 54321.*/

int main(){
    //initialistion des variables
    int nombre,somme = 0,i = 1; 
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);

    int r = 0;

    while (nombre != 0) {
        int b = nombre % 10;
        r = r * 10 + b;
        nombre /= 10;
    }
    printf("%d",r);
    
}