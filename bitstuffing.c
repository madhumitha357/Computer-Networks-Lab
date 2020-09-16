#include<string.h>
#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,count=0;
 char databits[80];
 int c[8]={0,1,1,1,1,1,1,0};

 printf("Enter Data Bits: ");
 scanf("%s",databits);
 
 printf("Data Bits Before Bit Stuffing:%s",databits);
 printf("\nData Bits After Bit stuffing :");
  for(i=0;i<8;i++)
	    printf("%d",c[i]);
 for(i=0; i<strlen(databits); i++)
 {
    if(databits[i]=='1')
        count++;
    else
        count=0;
    printf("%c",databits[i]);
    if(count==5)
    {
        printf("0");
        count=0;
    }
 }

for(i=0;i<8;i++)
	    printf("%d",c[i]);
 return 0;
}
    
