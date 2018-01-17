import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class GuviPro7_69 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		ArrayList<Long>list=new ArrayList();
		String s1=in.nextLine();
		int len=s1.length();
		
		String s2="";
		String s3="";
		for(int i=0;i<s1.length();i++) {
			if(Character.isDigit(s1.charAt(i))) {
				s2+=s1.charAt(i);
			}
		}
long n1=(long)Integer.parseInt(s2);

while(n1 != 0) {
	list.add(n1%10);
	
	n1=n1/10;
}
Collections.sort(list);
long c=list.get(0);
long d=list.get(list.size()-1);
long a=0;
long sum1=0;
long rem;
for(int i=0;i<list.size();i++) {
	a=a+(c*list.get(i));
}
while( sum1==0) {
	while(a!=0) {
		rem=a%10;
		sum1+=rem;
		a=a/10;
	}if(sum1>9) {
		a=sum1;
		sum1=0;
	}
}
long sum2=0;
for(int i=0;i<list.size();i++) {
	a=a+(d*list.get(i));
}
while( sum2==0) {
	while(a!=0) {
		rem=a%10;
		sum2+=rem;
		a=a/10;
	}if(sum2>9) {
		a=sum2;
		sum2=0;
	}
}
if(sum1>sum2) {
	int e=(int)Math.pow(sum2, 2);
	System.out.println(e);
}
else if(sum1==sum2){
	int g=(int)Math.pow(sum1, 2);
	System.out.println(g);
	
}
	else {

	int f=(int)Math.pow(sum1, 2);
	System.out.println(f);
}
	}

}
