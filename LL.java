class LL{
    Node head;
    class Node{
        String data;
        Node next;

        Node(String data){
            this.data = data;
            this.next=null;
        }
    }

    public void addfirst(String data){
        Node newnode = new Node(data);
        if(head == null){
            head = newnode;
            return;
        }
        newnode.next = head;
        head = newnode;
    } 

    public void addlast(String data){
        Node newnode = new Node(data);
        if(head == null){
            head = newnode;
            return;
        }

        Node currnode = head;
        while(currnode.next != null){
            currnode = currnode.next;
        }

        currnode.next = newnode;

    }

    public void printlist(){
        Node currnode = head;
        while(currnode != null){
            System.out.print(currnode.data+" -> ");
            currnode = currnode.next;

        }
    }

    public static void main(String arg[]){
        LL list = new LL();
        list.addfirst("a");
        list.addfirst("is");
        list.addlast("list");
        list.addfirst("this");
        list.printlist();
        
    }
}