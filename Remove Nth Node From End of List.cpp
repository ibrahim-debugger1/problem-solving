 public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode h=head;
        int count=0;
        while(h!=null){
            count++;
            h=h.next;
        }
        int x=count-n;
        if(x==0){
            head=head.next;
            return head;
        }
        h=head;
        for(int i=1;i<x;i++){
            h=h.next;
        }
        h.next=h.next.next;
        return head;
    }