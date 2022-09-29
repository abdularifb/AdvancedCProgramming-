#include<stdio.h>

int gcd(int a, int b)
{
    if (b==0)
    {
       return a;
    }
    return gcd(b, a%b);
}

int min(int a, int b)
{
    if(a <= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int pour(int fromCap, int toCap, int d)
{
    // Initialize current amount of water
    // in source and destination jugs
    int from = fromCap;
    int to = 0;

    // Initialize count of steps required
    int step = 1; // Needed to fill "from" Jug

    // Break the loop when either of the two
    // jugs has d litre water
    while (from != d && to != d)
    {
        // Find the maximum amount that can be
        // poured
        int temp;
        temp =min (from, (toCap - to));

        // Pour "temp" liters from "from" to "to"
        to   += temp;
        from -= temp;

        // Increment count of steps
        step++;

        if (from == d || to == d)
            break;

        // If first jug becomes empty, fill it
        if (from == 0)
        {
            from = fromCap;
            step++;
        }

        // If second jug becomes full, empty it
        if (to == toCap)
        {
            to = 0;
            step++;
        }
    }
    return step;
}






int minSteps(int m, int n, int d)
{

    if (m > n)
        {
            int temp;
            temp=m;
            m=n;
            n=temp;
        }

    // For d > n we cant measure the water
    // using the jugs
    if (d > n)
    {
        return -1;
    }


    // If gcd of n and m does not divide d
    // then solution is not possible
    if ((d % gcd(n,m)) != 0)
    {
        return -1;
    }

    // Return minimum two cases:
    // a) Water of n liter jug is poured into
    //    m liter jug
    // b) Vice versa of "a"
    return (min((pour(n,m,d)), (pour(m,n,d))));  // m to n
}

int main()
{
    int n = 5, m = 3, d = 4;


    printf("Minimum number of steps required is %d", minSteps(m, n, d));

    return 0;
}
