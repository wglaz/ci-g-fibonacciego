#include <stdio.h>

int main(){
    int x, y , z, ktora;

    printf("Podaj pierwsza liczbę ciągu \n ");

    scanf("%d", &x);
    printf("Podaj drugą liczbę ciągu \n ");

    scanf("%d", &y);

    printf("Podaj którą liczbę ciągu mam wyświetlić \n ");

    scanf("%d", &ktora);



    for(int i = 0; i < ktora; ++i){
        //printf("%d ", x);
        z = x+y;
        x = y;
        y = z;
    }
    printf("%d liczba ciagu = %d\n", ktora, x);

    return 0;
}











