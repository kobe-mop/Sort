#include <iostream>  
using namespace std;  

void printArr(int a[],int len)
{
    for(int i =0 ; i<len;i++)  
        cout<<a[i]<<" ";  
    cout<<endl;
}

void swap(int &a ,int &b){
	int temp =a;
	a = b;
	b= temp;
}
void bubble_sort(int a[],int len)  
{  
	for(int i=0;i<len-1;i++)
	{
		int count =0;
		for(int j=0;j<len-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			    swap(a[j],a[j+1]);
			    count++;
			}

		}
		
		if(count == 0)
			break;

	} 
     
}  
int main()  
{  
    int a[] = {100,8,15 ,37,26,13,27,49,55,14};
    int len = sizeof(a)/sizeof(a[0]);
    cout<<"Before sort: ";  
    printArr(a,len);
    bubble_sort(a,len); 
    cout<<"After sort: ";  
    printArr(a,len); 
    cout<<endl;  
}

 
