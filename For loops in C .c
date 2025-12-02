Task: For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
char *num_words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int n = a; n <= b; n++) {
        
        if (n >= 1 && n <= 9) {
            printf("%s\n", num_words[n]);
        } 
        else if (n > 9) {
            if (n % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
