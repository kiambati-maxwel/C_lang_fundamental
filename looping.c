#include <stdio.h>
#include <math.h>

// **** function prototype *****
int to_decimal(long long);
long long to_binary (int);
int check_if_prime(int);
int factorial(int);

int main(int argc, char const *argv[])
{
      // ***  autoput 1 2 3 4 5 using do while ***
      int n = 0;
      do{
            printf("%i, ", n+1);
            n++;
      } while (n < 5);

      printf(" do while is done! \n \n");


      // *** the factorial of a number n ***
      int fact = 5;
      int ctrl = fact;

      for (int i = fact -1; i < ctrl && i > 0; i-- ){
            printf("%i, ", i);          
            fact *= i;
      }
      printf("\n\nFactorial of 5: %i  \n\n", fact);
      
      printf("factorial of 5 is: %i", factorial(5));

      // *** desimal to binary
      int decimal = 5;

       return 0;
}

// **** function definition the long long data type is an integer 
// **** with 8 bytes 
int to_decimal(long long n){
      int dec = 0, i = 0, rem;


      while ( n!=0){
            rem = n % 10;
            n /= 10;
            dec += pow(2, i);
            ++i;
      }

      return dec;
}

long long to_binary(int n){
      long long bin = 0;
      int rem, i = 1;

      while (n!=0) {
            rem = n % 2;
            n /= 2;

            bin += rem * i;
            i *= 10;
      }

      return bin; 
}

int check_if_prime(int n){
      int i, flag=1;

      // ask user for input 
      printf("Enter a number: \n");

      //store input number in a variable
      scanf("%d", &n);

      // Iterate from 2 to sqrt(n)
      for(i = 2; i<= sqrt(n); i++){
            
            // if n is divisible by any number between 
            // 2 and n/2, it is not prime

            if (n % i == 0) {
                  flag = 0;
                  break;
            }
      }

      if (n <= 1){
            flag = 0;
      }else{

      }

     return flag;
}

// The factorial of a number using recursion 
int factorial(int n){
     if(n >= 1){
           return n * factorial(n-1);
     }else{
           return 1;
     }         
}