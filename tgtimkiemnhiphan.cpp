import random
import time

def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return mid
    return -1

arr = sorted([random.randint(0, 30000000) for i in range(30000000)])

x = 30000000


start_time = time.time()


result = binary_search(arr, x)


end_time = time.time()
print("Th?i gian ch?y c?a thu?t toán tìm ki?m nh? phân trên 10000 ph?n t? là:", end_time - start_time, "giây")

