#include<stdio.h>
#include<string.h>

int main(){

	int n;
	printf("Enter length of string\n");
        scanf("%d",&n);
	char str[n];
	printf("Enter the string\n");
	scanf("%s",str);
	int size;
	printf("Enter the size of the deleimiter\n");

	scanf("%d",&size);

	char st[size], end[size] , *r, *r1;

	printf("Enter start delimiter\n");

	scanf("%s",st);

	printf("enter ending delimiter\n");
	scanf("%s",end);

	char esc[3] = "esc";
	printf("%s ",st);
    for (int i = 0; i <= n - size+1; i++) { 
        int j; 
        int k;
        int l;
        for (j = 0 ; j < size; j++) {
            if (str[i + j] != st[j]) 
                break;
	     


	}
	for(k=0;k<size;k++){
		if(str[i+k]!=end[k])
			break;
	}
	for(l=0;l<3;l++){
		if(str[i+l]!=esc[l])
			break;
	}


          
        if (j == size ){
            printf("esc ");
	    printf("%s ",st);
	    i=i+size-1;
	    

        }else if(k==size){
		printf("esc ");
		printf("%s ",end);
		i=i+size-1;
	}else if(l==3){
		printf("esc ");
		printf("esc ");
		i=i+2;
	}
	else { 
	printf(" %c ",str[i]);
	}	
    } 
    printf(" %s",end);
  
    return 0; 

	





}
