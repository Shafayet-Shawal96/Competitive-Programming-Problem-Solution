#include <stdio.h>
#include <math.h>

int main()
{
    // before begining to see this editorial you should know about sieve of Eratosthenes
    int i, j, k, n, count, square_root, current_number;
    char is_prime[163842];           // 163841 is the 1500th prime number so array size would be 163842
    int prime_numbers[15001];        // to store all the 1500 prime numbers

    square_root = (int)sqrt(163841); // 163841 is the 1500th prime number

    for(i = 2; i <= 163841; i++) is_prime[i] = 'True';   //starting from 2, I will initialize the array with 'True'

    for(i = 2; i <= square_root; i++)                    // to check if a number is prime, we only need to check upto it's square root integer
    {
        if(is_prime[i] == 'True')                        // if The index is true that means its a prime number and now we will change to false 
        {                                                //all of the index's multiplier
            current_number = i * i;                      // staring from i*i

            while(current_number <= 163841)              // upto 163841
            {
                is_prime[current_number] = 'False';      // initializing the multipliers with 'false'
                current_number += i;                     // adding i , every time like multiplying
            }
        }
    }

    prime_numbers[1] = 2;                                 // 1st prime number is 2

    for(j = 2, i = 3; i <= 163841; i += 2)                // now we have to serial the prime number
    {
        if(is_prime[i] == 'True')                         // if the number is prime then we will include in our array
        {
            prime_numbers[j] = i;
            j++;                                          // increasing array index
        }
    }

    scanf("%d", &k);                                      // test number

    while(k--)
    {
        scanf("%d", &n);
        printf("%d\n", prime_numbers[n]);                  // printing the prime number on n position
    }

    return 0;
}
