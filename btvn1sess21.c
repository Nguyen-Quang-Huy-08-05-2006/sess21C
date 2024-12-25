#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","w");
	char myClass[50]="K24_ENG_A";
	fprintf(fptr,"Hello class %s",myClass);
	fclose(fptr);
	return 0;
}

