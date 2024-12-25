#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","r");
	char firstChar[50];
	int fgetc(fptr);
	fclose(fptr);
	return 0;
}

