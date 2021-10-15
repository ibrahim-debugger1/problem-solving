public ListNode partition(ListNode head, int x) {
        ListNode new_list=new ListNode(0);
        ListNode h=head,new_listt=new_list;
        while(h!=null){
            if(h.val<x){
                ListNode nn=new ListNode(h.val);
                new_list.next=nn;
                new_list=new_list.next;
            }
            h=h.next;
        }
        h=head;
        while(h!=null){
            if(h.val>=x){
                ListNode nn=new ListNode(h.val);
                new_list.next=nn;
                new_list=new_list.next;
            }
            h=h.next;
        }
        return new_listt.next;
    }