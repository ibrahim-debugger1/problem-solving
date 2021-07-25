 public ListNode swapPairs(ListNode head) {
       if(head==null)
           return null;
        if(head.next==null)
            return head;
        ListNode h=head,temp=head.next;
        while(h!=null){
            if(h.next!=null){
                ListNode cur=h;
                //System.out.println(cur.val);
                h=h.next.next;
                cur.next.next=cur;
                if(h==null)
                    cur.next=null;
                else if(h.next==null)
                    cur.next=h;
                else if(h!=null)
                    cur.next=h.next;
            }else{
                break;
            }
        }
        head=temp;
        return head;
    }