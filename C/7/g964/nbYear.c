int nbYear(int p0, double percent, int aug, int p) {
    int year;

    year = 1;
    
    while (p0 * (1 + percent/100) + aug < p)
    {
        p0 = p0 * (1 + percent/100) + aug;
        year++;
    }
    return (year);
}