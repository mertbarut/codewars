fn find_average(slice: &[f64]) -> f64 {

    let mut sum: f64 = 0.0;
    let mut counter: u64 = 0;
    for number in slice
    {
        sum += number;
        counter += 1;
    }
    if counter == 0
    {
        return 0.0;
    }
    else
    {
        return sum/(counter as f64);
    }
}

fn main()
{
    let v: Vec<f64> = vec![17.0, 16.0, 16.0, 16.0, 16.0, 15.0, 17.0, 17.0, 15.0, 5.0, 17.0, 17.0, 16.0];
    println!("{}", find_average(&v));
}