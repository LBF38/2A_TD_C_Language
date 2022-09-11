#include <stdio.h>

int exo1 (){
	printf("Hello World !\n");
	return 0;
}

int exo2 (){
	printf("Je suis le deuxième programme");
	return 0;
}

int exo3 (){
	int a,b,c;
	a=10;
	b=3;
	c=a/b;
	printf("%d divisé par %d vaut %d \n ",a,b,c);
	return 0;
}

int exo4 (){
	float a,b,c;
	a=10;
	b=3;
	c=a/b;
	printf("%f divisé par %f vaut %f \n ",a,b,c);
	return 0;
}


int TD1q7(){
	printf("Question sur les opérations\n");
	int x,y,z;
	z=10-2;
	y=4*2;
	x=z<y ++;
	printf("Opération : z = 10 −2; y = 4 ∗ 2 ; x = z < y ++; \n");
	printf("Résultats: x=%d, y=%d, z=%d \n",x,y,z);
	x = 3>2>1 ;
	y = x ++ + 1 ;
	z = x || ! y ; 
	printf("Opération : x = 3 > 2 > 1 ; y = x ++ + 1 ; z = x || ! y ; \n");
	printf("Résultats: x=%d, y=%d, z=%d \n",x,y,z);
	z = 2 >= 3 && 2 ; 
	x = 1 == 3 || 2 ; 
	y = x == z ;
	printf("Opération : z = 2 >= 3 && 2 ; x = 1 == 3 || 2 ; y = x == z ;\n");
	printf("Résultats: x=%d, y=%d, z=%d \n",x,y,z);
	return 0;
}

int main()
{
	exo1();
    exo2();
    exo3();
    exo4();
    TD1q7();
	return 0;
}