#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","r");
	char myText[50];
	fgets(myText,50,fptr);
	printf("%s",myText);
	fclose(fptr);
	return 0;
}

