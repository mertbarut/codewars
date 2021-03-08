long long findNb(long long m)
{
    /* the sum of the first n cubes is the square of the sum of the first n natural numbers. */
    long long i;
    long long sum;

    i = 1;
    sum = 0;
    while (i <= m)
    {
        sum = (i * (i + 1) / 2) * (i * (i + 1) / 2);
        i++;
        if (sum == m)
            return (i - 1);
        else if (sum > m)
            return (-1);
        else
            continue ;
    }
}
