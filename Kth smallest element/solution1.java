import java.util.*;

class Solution{
    public static int kthSmallest(int[] arr, int l, int r, int k) 
    { 
        //Your code here
        Arrays.sort(arr);
        return arr[k-1];
    } 
}
public class solution1 {
    public static void main(String[] args) {
        int arr[] = new int[]{1,2,3,4,5};
        int k = 3;
        int result = Solution.kthSmallest(arr, 0, arr.length - 1, k);
        System.out.println(result);
    }
}