#include <iostream>
using namespace std;

char fibonacci(char n) {
	char a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

unsigned char fibonacci(unsigned char n) {
	unsigned char a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

short fibonacci(short n) {
	short a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

unsigned short fibonacci(unsigned short n) {
	unsigned short a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

int fibonacci(int n) {
	int a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

unsigned int fibonacci(unsigned int n) {
	unsigned int a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

long fibonacci(long n) {
	long a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

unsigned long fibonacci(unsigned long n) {
	unsigned long a = 0, b = 1;
	
	for(int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
	}
	
	return a;
}

void testCharFib() {
	char last0 = 0, last1 = 1;
	for(char i = 2; true; i++) {
		
		int fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para char, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

void testUCharFib() {
	unsigned char last0 = 0, last1 = 1;
	for(unsigned char i = 2; true; i++) {
		
		int fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para unsigned char, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

void testShortFib() {
	short last0 = 0, last1 = 1;
	for(short i = 2; true; i++) {
		
		int fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para short, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

void testUShortFib() {
	unsigned short last0 = 0, last1 = 1;
	for(unsigned short i = 2; true; i++) {
		
		int fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para unsigned short, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

void testIntFib() {
	int last0 = 0, last1 = 1;
	for(int i = 2; true; i++) {
		
		long fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para int, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

void testUIntFib() {
	unsigned int last0 = 0, last1 = 1;
	for(unsigned int i = 2; true; i++) {
		
		long fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para unsigned int, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

void testLongFib() {
	long last0 = 0, last1 = 1;
	for(long i = 2;true; i++) {
		
		long long fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para long, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

void testULongFib() {
	unsigned long last0 = 0, last1 = 1;
	for(unsigned long i = 2; true; i++) {
		
		long long fib = fibonacci(i);
		
		if (fib - last1 != last0) {
			cout << "Para unsigned long, se produce overflow con ";
			cout << (int) i; cout << "\n";
			break;
		}
		
		last0 = last1;
		last1 = fib;
	}
}

int main() {
	testCharFib(); // overflow con 12
	testUCharFib(); // overflow con 14
	testShortFib(); // overflow con 24
	testUShortFib(); // overflow con 25
	testIntFib(); // overflow con 47
	testUIntFib(); // overflow con 48
	testLongFib(); // overflow con 93
	testULongFib(); // overflow con 94
	return 0;
}
