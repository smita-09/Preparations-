def removeElement(nums, val) -> int:
    if val not in nums:
        return nums
    else:
        for idx, num in enumerate(reversed(nums)):
            if num != val:
                pt = idx
                break
        head = len(nums)-pt
        for idx, num in enumerate(nums):
            if idx < head:
                if nums[idx] == val:
                    nums[idx] = nums[head]
                    nums[head] = val
                    head = head - 1
    return nums

print(removeElement([3,5,2,3], 3))