fn update_light(current: &str) -> String
{
    let mut output: String = String::new();

    if current == "green"
    {
        output = output + "yellow";
    }
    if current == "yellow"
    {
        output = output + "red";
    }
    if current == "red"
    {
        output = output + "green";
    }
    return output;
}

fn main()
{
    println!("green -> {}", update_light("green"));
    println!("yellow -> {}", update_light("yellow"));
    println!("red -> {}", update_light("red"));
}