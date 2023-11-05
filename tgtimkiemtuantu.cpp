import random
import time

# Hàm tìm ki?m tu?n t?
def linear_search(arr, x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1

# T?o m?ng ng?u nhiên v?i 10000 ph?n t?
arr = [random.randint(0, 3000) for i in range(3000)]

# Ch?n m?t ph?n t? ng?u nhiên trong m?ng d? tìm ki?m
x = random.choice(arr)

# B?t d?u tính th?i gian ch?y
start_time = time.time()

# G?i hàm tìm ki?m tu?n t?
result = linear_search(arr, x)

# K?t thúc tính th?i gian ch?y và in ra màn hình
end_time = time.time()
print("Th?i gian ch?y c?a thu?t toán tìm ki?m tu?n t? trên 10000 ph?n t? là:", end_time - start_time, "giây")

