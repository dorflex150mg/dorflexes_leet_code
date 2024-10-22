impl Solution {
    pub fn merge(nums1: &mut Vec<i32>, m: i32, nums2: &mut Vec<i32>, n: i32) {
        let n = n as usize;
        let m = m as usize;
        if n == 0 {
            return;
        }
        if m == 0 {
            for index2 in 0..n {
                //let index2 = index2 as usize;
                nums1[index2] = nums2[index2];
            }
            return;
        }
        let mut cur_num2 = 0;
        for index1 in 0..m + n {
            //let index1 = index1 as usize;
            if nums1[index1] == 0 && index1 > m + cur_num2 - 1|| nums1[index1] > nums2[cur_num2] {
                nums1.insert(index1, nums2[cur_num2]);
                let _ = nums1.pop();
                cur_num2 += 1;
                if cur_num2 == n {
                    return;
                }
            }
        }
    }
}
