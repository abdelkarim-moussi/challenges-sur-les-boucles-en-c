#include <stdio.h>
#include <math.h>
/*Calcul de la Puissance
Écrivez un programme C qui calcule la puissance d'un nombre 
entier base élevé à un exposant exposant. Utilisez une boucle 
pour effectuer le calcul. Par exemple, pour base = 3 et 
exposant = 4, le résultat est 3^4 = 81.
*/

int main(){

    int base, exposant,i;
    int puis = 1;
    
    //demande de saisir un nombre a l'utilisateur
    printf("saisir la base et l'exposant : \n");
    scanf("%d %d",&base,&exposant);
    
    for (i = 1; i <= exposant; i++)
    {
        puis = puis * base;
    }
    printf("%d ^ %d = %d\n",base,exposant,puis);
    
}