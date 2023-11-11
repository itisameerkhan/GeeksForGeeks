import java.util.*;

class Solution{
    static boolean findsum(int arr[],int n) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int maxValue = 0;
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum += arr[i];
            if(sum == 0) {
                maxValue = i + 1;
            } 
            else {
                if(map.get(sum) != null) {
                    maxValue = Math.max(maxValue, i - map.get(sum));
                } else {
                    map.put(sum, i);
                }
            }
        }
        return maxValue != 0;
    }
}

public class solution1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++) arr[i] = sc.nextInt();
        if(Solution.findsum(arr, n)) System.out.println("TRUE");
        else System.out.println("FALSE");
        sc.close();
    }
}