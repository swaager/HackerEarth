//created by sohail 
//github link: github.com/sohailg
//thanks and do give a like.
#include <stdio.h>



int main()


{


    int t,i,x[1000],y[1000],z[1000];


    static int a[100],b[100];
 

    scanf("%d",&t);


    for(i=0;i<t;i++)
   
	 {
     
   		scanf("%d%d%d",&x[i],&y[i],&z[i]);
 
   	}

    for(i=0;i<t;i++)
   
 	{
      
 	 	while(z[i]!=1)
  
      		{
        
    			if((x[i]%z[i]==0)||(y[i]%z[i]==0))
    
        			{
  
              				if(x[i]%z[i]==0)
     
          				 {
           
       				  x[i]--;
 
			                  a[i]++;
        
       				 }
              
  				if(y[i]%z[i]==0)
   
            				 {
               
  					 y[i]--;
        
           					 b[i]++;
         
      				 }
        
   			 }
  
         			 else
         
 			{
      
         				 z[i]--;
       
    			}
  

     		 }

   	 }
  

    for(i=0;i<t;i++)
 
   {
  
     	 printf("%d %d\n",a[i],b[i]);

    }

     return 0;

}

