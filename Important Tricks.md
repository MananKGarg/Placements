## Tricks and Methods

1. ### To check if a number n is power of 4

* Check if ```(n & (n-1) == 0) && ((n-1) % 3 == 0)```. This works because ```4^n - 1 = (2^n + 1) * (2^n - 1)```. 
* Among any 3 consecutive numbers, there must be one that is a multiple of 3 among (2^n-1), (2^n), (2^n+1), one of them must be a multiple of 3, and (2^n) cannot be the one, therefore either (2^n-1) or (2^n+1) must be a multiple of 3, and 4^n-1 must be a multiple of 3 as well.

2. ### Always pass a 2D matrix by reference.

* In DFS, BFS, backtracking problems, always pass the matrix in recursive function by reference and figure out a way to manage that. Passing without reference would almost always result in TLE.

3. ### Confirm whether a tree is a binary tree or a binary search tree.

* Read the problem carefully and note whether the given tree is a binary tree or a binary search tree. If in an interview, confirm this with the interviewer.

 


