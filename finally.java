import java.util.*;
public class finally {
   public static void main(String[] args) {
        int a = 7;
        int b = 3;
        while(true){
            try{
                System.out.println(a/b);
            }
            catch (Exception e){
                System.out.println(e);
                break;
            }
            finally{
                System.out.println("I am finally for value of b = " + b);
            }
            b--;
        }
    }
}
