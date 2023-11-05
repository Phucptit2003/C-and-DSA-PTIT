import random
import time

# H�m t�m ki?m tu?n t?
def linear_search(arr, x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1

# T?o m?ng ng?u nhi�n v?i 10000 ph?n t?
arr = [random.randint(0, 3000) for i in range(3000)]

# Ch?n m?t ph?n t? ng?u nhi�n trong m?ng d? t�m ki?m
x = random.choice(arr)

# B?t d?u t�nh th?i gian ch?y
start_time = time.time()

# G?i h�m t�m ki?m tu?n t?
result = linear_search(arr, x)

# K?t th�c t�nh th?i gian ch?y v� in ra m�n h�nh
end_time = time.time()
print("Th?i gian ch?y c?a thu?t to�n t�m ki?m tu?n t? tr�n 10000 ph?n t? l�:", end_time - start_time, "gi�y")

