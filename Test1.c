#include<stdio.h> 

struct stud 
{ 
	int tno; 
	char name[20]; 
	float mark; 
}s1,s2; 

void main() 
{ 
	int s, f=0; 
	/*Structure definition*/ 
	printf("\nEnter two student details:\n"); 
	scanf("%d %s %f",&s1.tno,&s1.name,&s1.mark); 
	scanf("%d %s %f",&s2.tno,&s2.name,&s2.mark); 
	if(s1.tno==s2.tno) 
		printf(“Tno are equal”); 
	else 
		printf(“Tno are not equal”); 
	if((strcmp(s1.name,s2.name)==0) 
		printf(“Name are equal”); 
	else 
		printf(“Names are not equal”); 
	if(s1.mark==s2.mark) 
		printf(“Marks are equal”); 
	else 
	printf(“Marks are not equal”); 
}

