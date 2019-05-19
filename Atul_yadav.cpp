#include<iostream>
int main(int argc, char const *argv[])
{
    int ary[]={1,2,4,6,7,9,12};
    
     int top=0,tail=6,k=1,mid;

 // number to be find out..make change here to find out position    
          int a=4;

    while(k)
      { mid=(top+tail)/2;
      	   if(ary[mid]==a)
              {
              	std::cout<<"position of element is="<<mid+1;
                  
                k=0;
                  
              }
          if(a>=ary[mid])
          {
             
              top=mid;
              
          }  
         else{
              tail=mid;
             }
            
         if(top==tail-1)
		  {
		  	if(ary[tail]==a)
              {
              	std::cout<<"position of element is="<<tail+1;
              k=0;    
              }
              else{
              	break;
			  }
		  	 
		  }   
    }  
    
  if(k!=0){
      std::cout<<"element not in the array";
  }
}
