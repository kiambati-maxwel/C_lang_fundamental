#include "stdio.h"

int even(int number){
    if (number % 2 != 0){
           return (printf("Not Even: "));
      }else{
           return (printf("Even \n\n"));
      }
}

/*
      Print numbers in reverse order from N
*/
int reversed(int n){
      int a = 5;
      int b = a;
      a /=b;

      printf("reversed: ");
      for(int i = n; i>=1; i--){
            printf("%d, ", i);
      }
      printf(" %i", a);
      printf("\n\n");
}


//  Sum of three digits 
int sum_three_digit(int n){
      int sum = 0;
      while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
      }
      return sum;
}

// the sum of the last and the first digits in a 4 digit number
// if you find modulus 10 of any number   you get the last digit 
// if you devide the decimal power - 1 you get the first number
int sum_first_last(int number){
      int sum = (number % 10) + (number/1000);
      return sum;
}


// *** Combine 3 numbers
int combine_three_no(){
      int first, second, third;
      char str[16];

      printf("Enter First No: ");
      scanf("%i", &first);
      printf("\n\n Enter Second No: ");
            scanf("%i", &second); 
      printf("\n\n Enter Third No: ");
      scanf("%i", &third);

      // Sprintf Instead of printing on console, it store output on char buffer which are specified in sprintf.
      sprintf(str, "%i", (first*100) + (second*10) +third); 
      printf("\n \n Combined: %s \a",str);

}

int main(int argc, char const *argv[])
{
     
      printf("is even: %i \n\n", even(7));

      reversed(7);

      printf("sum of three: %d \n\n",   sum_three_digit(104));  

      printf("Sum of first and last: %i \n\n", sum_first_last(3458));

      combine_three_no();
                      
      printf("\n \n");                                 
      return 0;
}