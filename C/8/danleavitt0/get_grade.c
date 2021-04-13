char get_grade(int a, int b, int c)
{
    int grade = (a + b + c)/3;
    if (grade >= 90)
        return ('A');
    if (grade >= 80)
        return ('B');
    if (grade >= 70)
        return ('C');
    if (grade >= 60)
        return ('D');
    return ('F');
}