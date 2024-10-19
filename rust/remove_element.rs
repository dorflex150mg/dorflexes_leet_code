impl Solution {
    pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
        let mut k = 0;
        let len = nums.len();

        for i in 0..len {
            if nums[i] == val {
                k += 1;
            }
        }
        nums.retain(|x| *x != val);
        k
    }
}
