#include<stdio.h>
int main(){
	FILE *bt01, *bt06;
	char temp[50];
	bt01=fopen("bt01.txt","r");
	bt06=fopen("bt06.txt","w");
	fgets(temp,50,bt01);
	fprintf(bt06,"%s",temp);
	fclose(bt01);
	fclose(bt06);

	return 0;
}

