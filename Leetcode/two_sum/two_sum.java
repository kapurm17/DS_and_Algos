package two_sum;
import java.util.*;

class two_sum {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = {3,3};
        int[] ans = twoSum(arr,6); 
        System.out.println(ans[0] + " " + ans[1]);
    }

    public static int[] twoSum(int[] arr, int sum) {
        HashMap<Integer,Integer> map = new HashMap<>();
        int[] ans = new int[2];
        for(int i=0;i<arr.length;i++) {
            if(map.containsKey(arr[i])) {
                ans[0] = map.get(arr[i]);
                ans[1] = i;
                return ans;
            } else {
                map.put(sum-arr[i],i);
            }
        }
        ans[0] = -1;
        ans[1] = -1;
        return ans;
    }

}