import java.util.*;
class Searching{
    public static void main(String args[]){
        int arr[]={4,6,3,2,1,5},x;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number to be searched");
        x=sc.nextInt();
        for(int i=0;i<sizeof(arr);i++){
            if(x==arr[i])
            System.out.println(x+"found at index:"+i);
            return;
        }
        System.out.println("element not found");
        return;

    }
}