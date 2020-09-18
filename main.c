#include <readline/readline.h>
#include <stdlib.h>
#include <stdio.h>
//Author: Slava Hlushko vqh5091@psu.edu
//Collaborator Jennifer Lee jml7322@psu.edu
//Collaborator Ronit Ramnarayan rvr5507@psu.edu
//Collaborator Lukas Cowell lfc5378@psu.edu
//Section 11
//Breakout 9
int sum_n(int n)
{
   if (n == 0)
    return 0;

   else 
    return n + sum_n(n-1);
}
  void print_n(const char *s, int n)
  {
    if(n== 0)
    return;
    else
    printf("%s\n", s);
    return print_n(s,n-1);
  }
  

int main(void) {

  char *userInput = readline("Enter an int: ");
  int askInt = atoi(userInput);
  printf("sum is %d.\n", sum_n(askInt));
  char *askString = readline("Enter a string: ");
  print_n(askString, askInt);
  
 }
 