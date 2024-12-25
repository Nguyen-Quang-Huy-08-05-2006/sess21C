#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","a");
	int date=24;
	fprintf(fptr," today is %d",date);
	fclose(fptr);
	return 0;
}

