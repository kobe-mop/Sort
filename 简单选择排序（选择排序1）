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
void select_sort(int a[],int len)  
{  
	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}

	} 
     
}  
int main()  
{  
    int a[] = {100,8,15 ,37,26,13,27,49,55,14};
    int len = sizeof(a)/sizeof(a[0]);
    cout<<"Before sort: ";  
    printArr(a,len);
    select_sort(a,len); 
    cout<<"After sort: ";  
    printArr(a,len); 
    cout<<endl;  
}
