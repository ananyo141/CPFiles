struct Solution;

impl Solution {
    pub fn top_k_frequent(words: Vec<String>, k: i32) -> Vec<String> {
        use std::collections::HashMap;
        let mut map = HashMap::new();
        for word in words {
            let count = map.entry(word).or_insert(0);
            *count += 1;
        }
        let mut vec: Vec<(String, i32)> = map.into_iter().collect();
        vec.sort_by(|a, b| {
            if a.1 == b.1 {
                a.0.cmp(&b.0)
            } else {
                b.1.cmp(&a.1)
            }
        });
        vec.into_iter()
            .take(k as usize)
            .map(|(word, _)| word)
            .collect()

    }
}

fn main() {
    let words = vec![
        "i".to_string(),
        "love".to_string(),
        "leetcode".to_string(),
        "i".to_string(),
        "love".to_string(),
        "coding".to_string(),
    ];
    let k = 2;
    let res = Solution::top_k_frequent(words, k);
    println!("{:?}", res);
}
