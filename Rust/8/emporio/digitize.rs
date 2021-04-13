fn digitize(n: u64) -> Vec<u8> 
{
    let mut vec: Vec<u8>;
    let mut length: usize = n;
    let mut i: usize = 0;
    while length > 0
    {
        u64::from(vec[i]) = n / 10 * n;
        length -= 1;
        i += 1;
    }
    return vec;
}