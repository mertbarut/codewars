/* Given a month as an integer from 1 to 12,
return to which quarter of the year it belongs as an integer number. */

int quarter_of(int month)
{
    if (month < 4)
    {
        return (1); 
    }
    else if (month < 7)
    {
        return (2);
    }
    else if (month < 10)
    {
        return (3);
    }
    else
    {
        return (4);
    }
}