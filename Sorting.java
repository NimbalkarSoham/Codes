import java.util.*;
class Sorting{
    public static void main(String args[]){
        int arr[]={8,6,4,7,9,6,5},i;
        Scanner sc = new Scanner(System.in);
        System.out.println("before sorting");
        for(i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        for(i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-i-1 ;j++){
                if(arr[j]>arr[j+1]){
                   int temp =arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
                }
            }
        }
        System.out.println("After sorting");
        for(i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
       
    }
}