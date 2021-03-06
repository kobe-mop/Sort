#include <iostream>  
using namespace std;  

void printArr(int a[],int len)
{
    for(int i =0 ; i<len;i++)  
        cout<<a[i]<<" ";  
    cout<<endl;
}

void quick_sort(int a[], int low, int high)  
{  
    if(low>high)  
	return;
		
    int i = low;  
    int j = high;  
    int temp = a[i];  //temp中存的就是基准数
  
    while(i<j)  
    {  
        while(i<j&&a[j]>temp) //顺序很重要，要先从右边开始找 
            j--;
	a[i] = a[j];
        while(i<j&&a[i]<temp)  //再找左边的
            i++;
	a[j] = a[i];
    }
    a[i]=temp;	//最终将基准数归位
    
    quick_sort(a, low, i-1);  
    quick_sort(a, i+1, high);  
     
}  
int main()  
{  
    int a[] = {100,8,15 ,37,26,13,27,49,55,14};
    int len = sizeof(a)/sizeof(a[0]);
    cout<<"Before sort: ";  
    printArr(a,len);
    quick_sort(a,0,len-1); 
    cout<<"After sort: ";  
    printArr(a,len); 
    cout<<endl;  
}  
