import functools
class Solution(object):
    def productExceptSelf(self, nums):
        zeroes = 0
        zero_element = None
        for i, element in enumerate(nums):
            if element == 0 and zeroes == 0:
                zeroes += 1
                zero_element = i
            elif element == 0 and zeroes > 0:
                return [0] * len(nums)
        if zero_element != None:
            del nums[zero_element]
            reply = [0] * (len(nums))
            pivot = functools.reduce(lambda a, b: a * b, nums)
            reply.insert(zero_element, pivot)
            return reply

        product = functools.reduce(lambda a, b: a * b, nums)
        return [product / x if x != 0 else 0 for x in nums]
