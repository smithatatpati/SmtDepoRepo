#include<stdio.h> 

struct time 
{ 
}t[2]; 
int h,m,s; 

void main() 
{ 
	int i, th=0, tm=0, ts=0; 
	printf("\nEnter the two times: “); 
	for(i=0;i<2;i++) 
		scanf(“%d%d%d”,&t[i].h,&t[i].m,&t[i].s); 
	for(i=0;i<2;i++) 
	{ 
		th=th+t[i].h; 
		tm=tm+t[i].m; 
		ts=ts+t[i].s; 
	} 

	if(ts>=60) 
	{ 
		ts=ts-60; 
		tm=tm+1; 
	} 

	if(tm>=60) 
	{ 
		tm=tm-60; 
		th=th+1;
	} 
	printf("Added time = %d: %d: %d \n",th,tm,ts); 
	getch();
} 
