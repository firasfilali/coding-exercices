#include<stdio.h>

// indentation: the way your format your code. Very important to have a readable code easy to debug.

// method 1
int main {
	printf();
  for () {
  	for () {
    	printf();
    }
  }
}

// method 2
int main
{ // culey bracket or curley braces
	printf();
  for
  {
  	for 
    {
    }
  }
}

/*
	warm up 1:
  	INPUT: N
    OUTPUT:
    	1 2 3 4 ... N
      Examples:
      	
        INPUT: 2
        OUTPUT: 1 2
        
        INPUT: 10
        OUTPUT: 1 2 3 4 5 6 7 8 9 10
    
  You only need the address when writing to a value (reading a value, e.g scanf("%d", &n);)
*/

void warmup(){
  int N;
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    printf("%i",i); 
      // ---> 0 1 2 ... N - 1
  }

  // print only even numbers
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    if (N mod 2==0)
    	printf("%i",i);
    
  }
  // print odd numbers and print "TEN" for every number that is divisible by 10
  scanf("%d",&N);
  for(int i=1;i<=N;i++) {
    if (N mod 2!=0)
    	printf("%i",i);
     	if (N mod 10==0)
        printf("TEN");
  }
	// read N then N real numbers and print the average and their sum.
  // Example:
  // 	INPUT: 5
  // 				 1 2 3 4 5					
  // 	OUTPUT: 3 15
  // integer: 32 bits, 1 bit for the sign, [-2ˆ31, 2^31] 2^31 ~ 2.10^9
  // long: 64 bits, 1 bit for the sign, [-2^63, 2ˆ63]
  double tab[1000];// N < 1000
  double sum = 0, avg = 0; // it's important to initialize variables to avoid garbage values
  scanf("%d",&N); 
  for(int i=1;i<=N;i++){
  		scanf("%lf",&tab[i]);
       sum=sum+tab[i];
  }
   avg=sum/N;
  printf("%lf %lf",avg,sum);
  
  
  
  
  //
  // wu2: Read a string and count how many vowels inside that string
	// wu3: Read a string and then reverse it
  // wu4: Read a string and print YES if it's palindrome and NO if it's not
}
int main 
{
printf("hello world");
return 0;
}
