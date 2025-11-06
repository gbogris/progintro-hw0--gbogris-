My first observation was that the programm had to work with integers less than 1e15. I decided that the best way to solve this problem was by connecting these problems and find a solution that can work for both of them. The same thing applies for sum. The usage of long long for both sum and n was mandatory since the numbers reach a very high seiling. 
 

My second observation, was that % operator did not work for double numbers. For that reason, I switched to (long long)n % i, instead of (double) n % i.

I also realized that n was not only one number.After every loop it changed to something else(most of the times). For instance, n was 12 at the begining and after the first loop it was 16.

Most importantly, I understood that the sum must always reset to 0 at the start of each loop, because otherwise the sum accumulates incorrectly. When I first wrote the programm i had sum = 0; only at the begining, something that made my whole programm run incorectly. The same thing applies for the steps++; command and for n = sum;(I did not even write n = sum; at first because I thought it was unnecessary.).

Finally, I initially wrote max_steps = 0 instead of max_steps == 0 inside the loop, which prevented the program from running correctly. This made me realize that what I wrote was not the same as what I had in mind. 

  
