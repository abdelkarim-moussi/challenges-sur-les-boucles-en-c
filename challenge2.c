#include <stdio.h>
 /*Factorielle d'un Nombre
Écrivez un programme C qui calcule la factorielle d'un nombre 
entier positif n entré par l’utilisateur. 
La factorielle de n est le produit de tous les entiers positifs 
inférieurs ou égaux à n. Par exemple, pour n = 5, affichez : 5! = 120.*/

int main(){
    //initialisation des variable
    int nombre, factoriel = 1,i;
    printf("--le factoriel d'un nombre--\n");
    //demande de saisir un nombre a l'utilisateur
    printf("saisir un nombre:\n");
    scanf("%d",&nombre);

    for (i = 1; i <= nombre; i++) factoriel *= i;

    printf("%d! = %d \n",nombre,factoriel);
    
    
}