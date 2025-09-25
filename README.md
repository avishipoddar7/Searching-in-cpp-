# Searching-in-cpp-
# Array Search Implementations in C++  

This repository contains three different approaches to searching elements inside an array using **C++**.  

---

## 1. Binary Search (with Sorting)  

### Description  
- The array is sorted first using `std::sort()`.  
- Binary Search is applied to find the target element.  
- Time Complexity: **O(log n)** after sorting.  
- Sorting adds an additional **O(n log n)** step.

<img width="327" height="154" alt="image" src="https://github.com/user-attachments/assets/10f9030c-f128-4e17-a82d-a8c6c61a471e" />


### Algorithm  
1. Sort the array.  
2. Set `low = 0` and `high = size - 1`.  
3. While `low <= high`:  
   - Find `mid = (low + high) / 2`.  
   - If `arr[mid] == target`, element found.  
   - Else if `arr[mid] < target`, search in right half (`low = mid + 1`).  
   - Else, search in left half (`high = mid - 1`).  
4. If loop ends without finding, element does not exist.  

---

## 2. Linear Search (Manual Loop)  

### Description  
- Scans each element one by one.  
- Stops when target is found.  
- Time Complexity: **O(n)**.  
- Best for small or unsorted arrays.

<img width="1001" height="471" alt="image" src="https://github.com/user-attachments/assets/e2e2ef02-2690-46f6-b1a6-523c91106354" />


### Algorithm  
1. Set `index = -1`.  
2. For each element `i` in the array:  
   - If `arr[i] == target`, set `index = i` and break.  
3. If `index != -1`, element found.  
4. Else, element not found.  

---

## 3. STL-based Search (`std::find`)  

### Description  
- Uses the built-in C++ Standard Template Library (STL) function `std::find()`.  
- Returns an iterator to the element if found, otherwise returns `arr + size`.  
- Time Complexity: **O(n)** (same as linear search).  

### Algorithm  
1. Call `it = find(arr, arr + size, target)`.  
2. If `it != arr + size`, element exists at index `(it - arr)`.  
3. Else, element not found.  

---

## Comparison  

| Method              | Sorted Required | Time Complexity | Best Use Case |
|---------------------|-----------------|----------------|---------------|
| Binary Search       | ✅ Yes          | O(log n) (after sort) | Large sorted arrays |
| Linear Search       | ❌ No           | O(n)           | Small/unsorted arrays |
| STL `std::find()`   | ❌ No           | O(n)           | Quick, clean code for small arrays |

---

## Concepts Demonstrated  
- Searching algorithms in C++  
- Binary Search, Linear Search, STL-based search  
- Time complexity comparison  
- Use of `<algorithm>` STL functions  

---
