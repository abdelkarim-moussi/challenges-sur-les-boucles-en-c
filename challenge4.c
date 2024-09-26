#include <stdio.h>

/*Affichage des N Premiers Nombres Impairs
Écrivez un programme C qui demande un nombre 
entier n et affiche les n premiers nombres impairs. 
Par exemple, pour n = 5, affichez : 1, 3, 5, 7, 9*/

int main(){
    int nombre,i;
    //demande de saisir un nombre a l'utilisateur
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);
    
    for (i = 1; i <= nombre; i++){
     if (i % 2 != 0){
        printf("%d,",i);
     }
     else nombre++;
     
    }
    printf("\n");

}