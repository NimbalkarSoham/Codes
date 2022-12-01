class Triangle{
    class Point{
            float Xco;
            float Yco;
    }
    class Trikon{
        Point 1;
        Point 2;
        Point 3;
    }
    public static void main(Strig args[]){
        Scanner sc = new Scanner(System.in);
        Trikon p = new Trikon();
        p.1.Xco= sc.nextInt();
        p.1.Yco= sc.nextInt();
        p.2.Xco= sc.nextInt();
        p.2.Yco= sc.nextInt();
        p.3.Xco= sc.nextInt();
        p.3.Yco= sc.nextInt();

        Trikon q = new Trikon();
        q.1.Xco= sc.nextInt();
        q.1.Yco= sc.nextInt();
        q.2.Xco= sc.nextInt();
        q.2.Yco= sc.nextInt();
        q.3.Xco= sc.nextInt();
        q.3.Yco= sc.nextInt();

        for(int i=1;i<=3;i++){
            for(int j =1;j<=3;j++){
                if(p.i.Xco == q.j.Xco && p.i.Yco==p.j.Yco){
                    System.out.print("yes");
                }
                else
                System.out.print("yes");
            }
        }


    }
}