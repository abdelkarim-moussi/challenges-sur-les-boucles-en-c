#include <stdio.h>
/*somme des N Nombres
Écrivez un programme C qui demande un nombre entier n
à l’utilisateur et calcule la somme des n premiers nombres 
naturels  utilisant une boucle . Par exemple, pour n = 3, la somme est 1 + 2 + 3 = 6.*/

int main(){
    //initialisation des variable
    int nombre,i;
    int somme = 0;
    //demande de saisir un nombre a l'utilisateur
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);
    
    for (i = 1; i <= nombre; i++)
    {
        somme += i;
    }
    //affichage de somme des premier nombre saisie
    printf("la somme des %d premier nombre egale %d \n",nombre,somme);
    
}