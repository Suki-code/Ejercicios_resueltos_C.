/*Combinaciones */



#include<stdio.h>
int main(){

	int n,m,fn,fm,fnm,i,c; 
	
    printf("\nIntroduce n y m:");  
	scanf("%d%d",&n,&m);
	 fn=1;
	 
	for (i=2;i<=n;i++)   
	   fn=fn*i;
	   
	fm=1;
	
	for (i=2;i<=m;i++)    
	  fm=fm*i;
	  
	fnm=1;
	
	for (i=2;i<=n-m;i++)   
	  fnm=fnm*i;
	c=fn/fm/fnm;  
	  
	printf("\n(%d,%d)=%d",n,m,c);
	
	return 0;
	}
