import java.util.Arrays;
import java.util.Scanner;

public class SageBirthday1419D1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int[] arr = new int[n];
		for(int i=0;i<n;i++) arr[i] = s.nextInt();
		Arrays.sort(arr);
		int[] arr2 = new int[n];
		int idx = 0;
		for(int i=n/2;i<n;i++) {
			arr2[idx] = arr[i];
			idx+=2;
		}
		idx = 1;	
		for(int i=0;i<n/2;i++) {
			arr2[idx] = arr[i];
			idx+=2;
		}
		int ans = 0;
		for(int i=1;i<n-1;i++) {
			if(arr2[i]<arr2[i-1] && arr2[i]<arr2[i+1]) ans++;
		}
		System.out.println(ans);
		StringBuilder sb = new StringBuilder();
		for(int i=0;i<n;i++) {
			sb.append(arr2[i]);
			sb.append(" ");
		}
		System.out.println(sb.toString());
		
	}
	
}
