import java.util.*;
class binary{
    public static void main(String args[]){
        int num,bitmask;
        Scanner sc= new Scanner(System.in);
        num= sc.nextInt();
        for(int i=31;i>=0;i--){
            bitmask=1<<i;
            if((bitmask & num)==0)
            System.out.print("0");
            else
            System.out.print("1");
        }
    }
}