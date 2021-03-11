int bouncingBall(double h, double bounce, double window)
{
    int result;

    result = 0;
    if ((h <= 0) || (bounce >= 1) || (bounce <= 0) || (window >= h))
        return (-1);
    else
    {
        result++;
        h *= bounce;
        while (h > window)
        {
            result = result + 2;
            h *= bounce;
        }
    }
    return (result);
}
