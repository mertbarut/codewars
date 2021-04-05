char *bmi(int weight, double height)
{
    if (weight / (height * height) <= 18.5)
    {
        return ("Underweight");
    }
    if (weight / (height * height) <= 25.0)
    {
        return ("Normal");
    }
    if (weight / (height * height) <= 30.0)
    {
        return ("Overweight");
    }
    if (weight / (height * height) > 30.0)
    {
        return ("Obese");
    }
}