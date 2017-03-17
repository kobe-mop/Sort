#include <iostream>  
using namespace std;

void printArr(int a[],int len)
{
    for(int i =0 ; i<len;i++)  
        cout<<a[i]<<" ";  
    cout<<endl;
}

void shell_sort(int a[],int len)  
{  	
	for(int gap =len/2;gap>=1;gap=gap/2) //获得gap值 
	{  
	   for(int x=0;x<gap;x++) //当前gap，需要循环gap次插入排序 
	   {  
	       for(int i=x+gap;i<len;i+=gap) //每一次插入排序 
	       {  
	            if(a[i]<a[i-gap])
	            {
			int j=i-gap;  
		        int temp=a[i];  
		        for(;j>=0&&a[j]>temp;j-=gap)
			{  
		          a[j+gap]=a[j];  
	                }
				
			a[j+gap]=temp;   
		    }	   
	        } 
	   }		
	}
	 
}  
int main()  
{  
    int a[] = {100,8,15 ,37,26,13,27,49,55,14};
    int len = sizeof(a)/sizeof(a[0]);
    cout<<"Before sort: ";  
    printArr(a,len);
    shell_sort(a,len); 
    cout<<"After sort: ";  
    printArr(a,len); 
    cout<<endl;  
}

 
