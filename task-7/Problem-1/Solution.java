/**
 *   Problem-1, Leetcode Submission: 
 *      https://leetcode.com/problems/merge-two-sorted-lists/submissions/860016902/ 
 */ 
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class Solution{
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1 == null) return list2;
        else if(list2 == null) return list1;

        ListNode merge;
        if(list1.val <= list2.val){
            merge = list1;
            merge.next = mergeTwoLists(list1.next, list2);
        }
        else{
            merge =list2;
            merge.next = mergeTwoLists(list1, list2.next);
        }
        return merge;
    }
}
