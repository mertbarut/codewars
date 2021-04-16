fn abbrev_name(name: &str) -> String {
    name
        .split(" ")
        .map(|word| word[0..1].to_uppercase())
        .collect::<Vec<_>>()
        .join(".")
}

fn main() {
    println!("{}", abbrev_name(&"Arnold Hagen"));
    println!("{}", abbrev_name(&"paul smith"));
}

