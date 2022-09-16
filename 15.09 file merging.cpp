#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp1 = fopen("14.09 student marks.cpp", "r");
FILE *fp2 = fopen("15.09 student details.cpp", "r");
FILE *fp3 = fopen("14.09 complex number.cpp", "w");
char c;

if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
{
		puts("Could not open files");
		exit(0);
}
while ((c = fgetc(fp1)) != EOF)
	fputc(c, fp3);
while ((c = fgetc(fp2)) != EOF)
	fputc(c, fp3);

printf("Merged file1.txt and file2.txt into file3.txt");

fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}

