import java.util.*;
public class Main{
    public static void main(String[] args) {
        int [] marks = new int[3];
        marks[0] = 7;   marks[1] = 56;    marks[2] = 6;
        Scanner sc = new Scanner(System.in);
        boolean flag = true;
        while(flag) {
            System.out.println("Enter the value of index");
            int ind = sc.nextInt();
            try {
                System.out.println("Nesting try catch");
                try {
                    System.out.println(marks[ind]);
                    System.out.println(marks[ind]/0);
                } catch (ArrayIndexOutOfBoundsException e) {
                    System.out.println("Exception in level 2");
                   }
                } catch (Exception e) {
                System.out.println("Exception in level 1");
                flag = false;
              }
        }
    }
}
