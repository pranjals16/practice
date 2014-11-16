import java.util.*;
import java.lang.*;
import java.io.*;
import java.io.InputStream;
import java.io.InputStreamReader;

/* Name of the class has to be "Main" only if the class is public. */
class PPOW
{
	public long sumOfDigits(int base, int exp) {
		if(base==1 || exp==0)
			return 1;
		int numberOfDigits = (int) Math.ceil(exp * Math.log10(base));
		int[] digits = new int[numberOfDigits];
		digits[0] = base;
		int currentExp = 1;
		while (currentExp < exp) {
			currentExp++;
			int carry = 0;
			for (int i = 0; i < digits.length; i++) {
				int num = base * digits[i] + carry;
				digits[i] = num % 10;
				carry = num / 10;
			}
		}
		long sum = 0;
		for (int digit : digits)
		sum += digit;
		return sum;
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int num = in.nextInt();
		int iter=1;
		while(num!=0){
			num=num-1;
			int base = in.nextInt();
			int exp = in.nextInt();
			//int base = 9;
			//int exp = 4000;
			System.out.println("Case "+iter+": "+new PPOW().sumOfDigits(base, exp));
			iter++;
		}
	}
}
