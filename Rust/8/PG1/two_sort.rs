fn two_sort(arr: &[&str]) -> String 
{
    let mut vec = Vec::new();
    arr.copy_from_slice(vec);
    vec.sort_by(|a, b| a.to_lowercase().cmp(&b.to_lowercase()));

    let mut result = String::from("");
    for char in vec[0].chars()
    {
        result.push(char);
        result.push_str(&"***");
    }
    return result;
}