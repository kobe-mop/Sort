public class MergingSort {

	public static void main(String[] args){
		int arr[]={49,38,65,97,76,13,27,49,78,34,12,64,5,4,62,99,98,54,56,17,18,23,34,15,35,25,53,51};  
	    sort(arr,0,arr.length-1);  
    }

	public static void sort(int[] data, int left, int right) {  
	    // TODO Auto-generated method stub  
	    if(left<right){  
	        //找出中间索引  
	        int center=(left+right)/2;  
	        //对左边数组进行递归  
	        sort(data,left,center);  
	        //对右边数组进行递归  
	        sort(data,center+1,right);  
	        //合并  
	        merge(data,left,center,right);  
	          
	    }  
	}  
	
	public static void merge(int[] data, int left, int center, int right) {  
	    // TODO Auto-generated method stub  
	    int [] tmpArr=new int[data.length];  
	    int mid=center+1;  
	    //third记录中间数组的索引  
	    int third=left;  
	    int tmp=left;  
	    while(left<=center&&mid<=right){  
	        //从两个数组中取出最小的放入中间数组  
	        if(data[left]<=data[mid]){  
	            tmpArr[third++]=data[left++];  
	        }else{  
	            tmpArr[third++]=data[mid++];  
	        }  
	    }  
	    //剩余部分依次放入中间数组  
	    while(mid<=right){  
	        tmpArr[third++]=data[mid++];  
	    }  
	    while(left<=center){  
	        tmpArr[third++]=data[left++];  
	    }  
	    //将中间数组中的内容复制回原数组  
	    while(tmp<=right){  
	        data[tmp]=tmpArr[tmp++];  
	    }  
	    printArr(data);  
	} 
	
    public static void printArr(int[] arr){
        System.out.print("[");
        for (int i=0;i<arr.length-1 ;i++ ) {
            System.out.print(arr[i]+",");
        }
        System.out.println(arr[arr.length-1]+"]");
     }

}
