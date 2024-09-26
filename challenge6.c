#include <stdio.h>
/*Affichage des N Premiers Nombres Pair
Écrivez un programme C qui demande un nombre entier n 
et affiche les n premiers nombres pairs. Par exemple, 
pour n = 4, affichez : 2, 4, 6, 8.
*/

int main(){
     
    int nombre,i;
    //demande de saisir un nombre a l'utilisateur
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);
    for (int i = 1; i <= nombre; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d,",i);
        }
        else nombre++;
        
    }
    printf("\n");

}