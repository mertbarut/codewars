int find_difference(const int a[3], const int b[3])
{
    int volume_a = 1, volume_b = 1, i = 0;
    while (i < 3)
    {
        volume_a *= a[i];
        volume_b *= b[i];
        i++;
    }
    return ((volume_a > volume_b) ? volume_a - volume_b : volume_b - volume_a);
}