#include <stdio.h>
int main(){

int i, j, f, x, y ;
int datos[20][20];

printf("Dame el volumen de la matriz cuadrada: ");
scanf("%d", &f);

printf("\n");

printf("Dame el numero que quieres de relleno para la matriz: ");
scanf("%d", &x);

printf("\n");

printf("Dame el numero que quieres para las diagonales de la matriz: ");
scanf("%d", &y);

printf("\n\n");

printf("Asi queda tu matriz final: ");

for (i=0;i<f;i++){
	for (j=0;j<f;j++){
 		datos[i][j]=x;
 		datos[i][i]=y;
 		datos[i][f-i-1]=y;
	}
}

printf("\n");

for (i =0;i<f;i++){
	for (j=0;j<f;j++){
	printf("  %d", datos[i][j]);
	}
printf("\n");
}


return 0;
}
