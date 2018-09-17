/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		testByte(); // Overflow con 12
		testShort(); // Overflow con 24
		testInt(); // Overflow con 47
		testLong(); // Overflow con 93
	}
	
	public static byte fibonacci(byte n) {
		byte a = 0, b = 1;
		
		for(int i = 0; i < n; i++) {
			b = (byte) (a + b);
			a = (byte) (b - a);
		}
		
		return a;
	}
	
	public static void testByte() {
		for(byte i = 0; true; i++) {
			byte fib = fibonacci(i);
			
			if(fib < 0) {
				System.out.println("Overflow con " + i);
				break;
			}
		}
	}
	
	public static short fibonacci(short n) {
		short a = 0, b = 1;
		
		for(int i = 0; i < n; i++) {
			b = (short) (a + b);
			a = (short) (b - a);
		}
		
		return a;
	}
	
	public static void testShort() {
		for(short i = 0; true; i++) {
			short fib = fibonacci(i);
			
			if(fib < 0) {
				System.out.println("Overflow con " + i);
				break;
			}
		}
	}
	
	public static int fibonacci(int n) {
		int a = 0, b = 1;
		
		for(int i = 0; i < n; i++) {
			b = a + b;
			a = b - a;
		}
		
		return a;
	}
	
	public static void testInt() {
		for(int i = 0; true; i++) {
			int fib = fibonacci(i);
			
			if(fib < 0) {
				System.out.println("Overflow con " + i);
				break;
			}
		}
	}
	
	public static long fibonacci(long n) {
		long a = 0, b = 1;
		
		for(int i = 0; i < n; i++) {
			b = a + b;
			a = b - a;
		}
		
		return a;
	}
	
	public static void testLong() {
		for(long i = 0; true; i++) {
			long fib = fibonacci(i);
			
			if(fib < 0) {
				System.out.println("Overflow con " + i);
				break;
			}
		}
	}
}
