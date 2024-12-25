#include<stdio.h>
int main(){
	int numLines;
	FILE *fptr;
	char fileName[]="bt05.txt";
	fptr=fopen(fileName,"w");
	printf("nhap so dong ban muon ghi: ");
	scanf("%d",&numLines);
	getchar();
	for(int i=0;i<numLines;i++){
		char line[500];
		printf("nhap noi dung dong thu %d: ",i+1);
		fgets(line,sizeof(line),stdin);
		fprintf(fptr,"%s",line);
	}
	fclose(fptr);
	
	fptr=fopen("bt05.txt","r");
	char line[500];
	printf("noi dung file: \n");
    while (fgets(line,sizeof(line),fptr)) {
        printf("%s", line);
    }
	fclose(fptr);	
	return 0;
}

