impl Solution {
    pub fn move_zeroes(nums: &mut Vec<i32>) {
        let mut cur = 0;
        for i in 0..nums.len() {
            if nums[i] != 0 {
                nums[cur] = nums[i];
                cur += 1
            }
        }
        for i in cur..nums.len() {
            nums[i] = 0;
        } 
    }
}
