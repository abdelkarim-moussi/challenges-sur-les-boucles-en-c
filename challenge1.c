#include <stdio.h>
/*Table de Multiplication
Écrivez un programme C qui demande un nombre à l’utilisateur
et affiche sa table de multiplication de 1 à 10. Par exemple, 
pour le nombre 4, affichez :
4 * 1 = 4 4 * 2 = 8 4 * 3 = 12 ... 4 * 10 = 40*/

int main(){
    //initialisation des variable
    int nombre, multi;
    printf("--Table de Multiplication--");
    //demande de saisir un nombre a l'utilisateur
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);
    //boucle for pour effectuer la multiplication du
    for (int i = 1; i < 11; i++){
        multi = nombre * i;
        printf("%d * %d = %d\t",nombre,i,multi);
    }


}