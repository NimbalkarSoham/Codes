import java.util.*;
class factorial{
    public static int factorial(int num){
        if(num==0)
        return 1;
        else 
        return num*factorial(num-1);
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.print("The factorial of "+num+" is "+factorial(num));
    } 
}