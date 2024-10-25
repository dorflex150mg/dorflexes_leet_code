impl Solution {
    pub fn rotate(nums: &mut Vec<i32>, k: i32) {
        let len: i32 = nums.len().try_into().unwrap();
        let mut end = (len - k) % len;
        if end < 0 {
            end = len + end;
        }
        let end = end as usize;
        let len = len as usize;
        if k == 0 {
            return;
        }
        let mut suffix_vec: Vec<i32> = nums.drain(end..len).collect();
        let suffix_len = suffix_vec.len() - 1;
        for i in 0..suffix_len + 1{
            nums.insert(0, suffix_vec[suffix_len - i]);
        }
    }
}
