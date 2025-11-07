#include <stdio.h>


int main()

{


        double n;        /* The number that starts the aliquot */
        long long i;     /* The divisors  */
        int steps= 0;    /* Steps of the aliquot */
        int max_steps;   /* Max steps of the aliquot */
        char x;          /* Full sentence or just the length of the aliquot */
        long long int sum;   /* The sum of divisors */ 

	printf("Please give the number to start the aliquot sequence from: ");
        if (scanf("%lf", &n) != 1 || n != (int)n || n >= 1e15) /* if n is not an integer,n surpasses 1e15 or scanf is not getting the approriate number then there will be an error */

        {

                printf("The number is invalid!\n");
                return 1;

        }

        printf("Provide the max aliquot length to look for (0 for unlimited): ");
        scanf("%d", &max_steps);

        printf("Do you want to print the full sequence ('f') or just the length ('l')?: ");
        scanf(" %c", &x);

	while(n != 0 && (max_steps >= steps || max_steps == 0)) /* starting the process of the aliquot. What sould be true for the sequence to work properly. */


        {

                sum = 0; /*  After every repeat the sum must be 0, because the new n will be divided by new i */
        for ( i =1; n > i; i++)

        if ((long long)n % i == 0) /* Could not do the n% i because n is a double. So I made it a long long so that it can work properly */
        {

                sum += i; /* if n % i = 0 then i devides perfectly n, which means that i should be with the other i that devide n( the sum) */


                n = sum; /* After everything is done the sequence should move to the next number */
                steps++; /* This step is counted in the sequence */

        if ( sum >= 1e15)
        {

                printf("Number exceeds maximum supported integer (1000000000000000). Stopping.\n");
                return 1; /* According to the instructions, if sum exceeds the maximum number(1e15) the programm should be stopped */

        }


        if ( x == 'f')

        {

                printf("%lld\n", sum); /* Printing the full sequence */


        }



        if ( x == 'l')

        {

                printf("The length of the sequence is: %d\n", steps); /* Printing the length of the sequence*/


        }
        }
return 0;


}
