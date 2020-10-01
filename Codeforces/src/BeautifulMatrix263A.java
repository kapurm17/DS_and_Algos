import java.util.Scanner;

public class BeautifulMatrix263A {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n = 5;
		int x = 0; int y=0;
		boolean flag = false;
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				int m = s.nextInt();
				if(m==1) {
					x = i;
					y = j;
					flag = true;
					break;
				}
			}
			if(flag) break;
		}
		
		System.out.println(Math.abs(x-2)+Math.abs(y-2));
		
	}
	
}
