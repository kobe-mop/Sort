#include <iostream>  
using namespace std;  

void printArr(int a[],int len)
{
    for(int i =0 ; i<len;i++)  
        cout<<a[i]<<" ";  
    cout<<endl;
}

void insert_sort(int a[],int len)  
{  
	for(int i=1;i<len;i++)
	{
		
		if(a[i]<a[i-1])//注意[0,i-1]都是有序的。如果待插入元素比arr[i-1]还大则无需再与[i-1]前面的元素进行比较了，反之则进入if语句
		{
		
			int j = i-1;
			int tmp = a[i];
			
			for(;j>=0&&a[j]>tmp;j--)
			{
				a[j+1]=a[j]; //把比temp大或相等的元素全部往后移动一个位置 
			}
			
			a[j+1] =tmp;   //把待排序的元素temp插入腾出位置的(j+1)
		}	

	} 
     
}  
int main()  
{  
    int a[] = {100,8,15 ,37,26,13,27,49,55,14}; 
    int len = sizeof(a)/sizeof(a[0]);
    cout<<"Before sort: ";  
    printArr(a,len);
    insert_sort(a,len); 
    cout<<"After sort: ";  
    printArr(a,len); 
}

 
