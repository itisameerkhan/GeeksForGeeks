import java.util.*;

class Solution{
    public static void frequencyCount(int arr[], int N, int P)
    {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0;i<N;i++) {
            if(map.containsKey(arr[i])) {
                map.put(arr[i], map.get(arr[i]) + 1);
            } else {
                map.put(arr[i], 1);
            }
        }
        // for(Integer key: map.keySet()) System.out.println("key -> " + key + " " + "value -> " + map.get(key));
        for(int i=0;i<N;i++) {
            if(map.containsKey(i+1)) {
                System.out.println("arr[i] -> " + arr[i] +  " map get -> " + map.get(i+1) + " i -> " + i);
                arr[i] = map.get(i+1);
            } else {
                // System.out.println("value else -> " + arr[i]);
                arr[i] = 0;
            }
        }
    }
}

public class solution1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for(int i=0;i<N;i++) arr[i] = sc.nextInt();
        int P = sc.nextInt();
        Solution.frequencyCount(arr, N, P);
        for(int i: arr) System.out.print(arr[i] + " ");
    }
}
