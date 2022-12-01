class Sorting{
    public static void main(String args[]){
        int arr[7],i;
        Scanner sc = new Scanner(System.in);
        for(i=0;i<7;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("before sorting");
        for(i=0;i<7;i++){
            System.out.print(arr[i]+" ");
        }
        for(i=0;i<=7-i;i++){
            if(arr[i]>arr[i+1]){
                int temp =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp; 
            }
        }
        System.out.println("After sorting");
        for(i=0;i<7;i++){
            System.out.print(arr[i]+" ");
        }
       
    }
}