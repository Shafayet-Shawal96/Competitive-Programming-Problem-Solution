#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;

    while ( scanf ("%d", &n) != EOF ) {
        printf ("1");

        for ( int i = 2; i <= n; i++ ) printf (" %d", i);
        printf ("\n");
    }

    return 0;
}
