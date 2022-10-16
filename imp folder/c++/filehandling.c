#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *fp;
int num;
fp = fopen("student.txt","w"); // Open the file in write mode
if (fp==NULL)
{
printf("Error in opening the file \n");
exit(1);
}
while (scanf("%d",&num)!= EOF)
{
fprintf(fp,"%d\n", num);
}
fclose(fp);
}