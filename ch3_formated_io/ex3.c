/*Comparing scanf format strings*/
#include <stdio.h>

int main (void)
{
	int anum, other_num, another ;
	// they are the same
	/*scanf("%d", &anum);
	scanf(" %d", &other_num);
	printf("%d|%d\n", anum, other_num);
	*/

	//they are not the same	
	/*
	scanf("%d-%d-%d", &anum, &other_num, &another);
	printf("%d|%d|%d\n", anum, other_num, another);
	
	scanf("%d -%d -%d", &anum,  &other_num, &another);
	printf("%d|%d|%d\n", anum, other_num, another);
	*/
	
	
	float i, j;
	/* They are not the same
	scanf("%f", &i); //
	scanf("%f ", &j);//

	printf("%f|%f\n", i, j);
	*/
	
	// They are the same
	scanf("%f,%f", &i, &j);
	printf("%f|%f\n", i, j);

	scanf("%f, %f", &i, &j);
	printf("%f|%f\n", i, j);

	 

	
	
	
	return 0;
}
