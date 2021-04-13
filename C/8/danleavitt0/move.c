unsigned char move(unsigned char pos, unsigned char roll)
{
    return (unsigned char)((unsigned int)pos + 2 * (unsigned int)roll);
}