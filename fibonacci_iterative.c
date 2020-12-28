#include<stdio.h> 

/*
 * problem: write a function to generate a fibonacci series 
 * and return the last element of the series
 *
 */
int fib(int n) { 
  int f[n+2]; // 1 extra to handle case, n = 0 
  int i; 

  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 

  for (i = 2; i <= n; i++) { 
	    /* Add the previous 2 numbers in the series 
		  and store it */
	  f[i] = f[i-1] + f[i-2]; 
  } 

  return f[n]; 
} 

int main () { 
  int n = 9; 
  printf("%d", fib(n)); 
  getchar(); 
  return 0; 
} 

