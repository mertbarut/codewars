pub fn remove_char(s: &str) -> String {
    s
        .char_indices()
        .next()
        .and_then(|(i, _)| s.get(i + 1..(s.len() - 1)))
        .unwrap_or("")
        .to_string()
}

fn main() {
    println!("{}", remove_char(&"Arnold Hagen"));
    println!("{}", remove_char(&"paul smith"));
}
