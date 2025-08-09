# https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=array


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        existing = dict()
        for i in range(len(nums)):
            num = nums[i]
            if num in existing:
                return [i,existing[num]]
            else:
                existing[target-num]=i
        return []