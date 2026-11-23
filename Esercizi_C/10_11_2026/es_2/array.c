#include <stdio.h>
#define DIM 20

int main(){
    int a,b,c;
    float x=-1.0;
    float ascisse[DIM], ordinate[DIM];
    printf("Inserisci a,b,c 3 coefficienti reali : \n");
    scanf("%d%d%d",&a,&b,&c);
    for(int i=0; i<DIM; i++){
        x+=0.1;
        ascisse[i]=x;
        ordinate[i]=(a*(x*x))+(b*x)+c;


    }

    for(int i=0; i<DIM; i++){
        printf("(%.1f\t%.3f)",ascisse[i],ordinate[i]);
        printf("\n");
    }


    return 0;
}