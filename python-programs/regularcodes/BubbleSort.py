def bubbleSort(nums):
    for i in range(0, len(nums)):
        for j in range(i, len(nums)):
            if (nums[i] > nums[j]):
                nums[i], nums[j] = nums[j], nums[i]

arr = []
bubbleSort(arr)
print(arr)
