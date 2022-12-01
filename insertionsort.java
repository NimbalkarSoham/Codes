class insertionsort{
    public static void main(String args[]){
        int arr[]={6,7,4,8,4,3,8,5},i,j,min;
        System.out.println("Before sorting");
        for(i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        for(i=1;i<arr.length;i++){
            int current = arr[i];
            j=i-1;
            while(j>=0 && arr[j]>current){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;
        }
        System.out.println("after sorting");
        for(i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}