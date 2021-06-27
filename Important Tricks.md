## Tricks and Methods

1. ### To check if a number n is power of 4

* Check if ```(n & (n-1) == 0) && ((n-1) % 3 == 0)```. This works because ```4^n - 1 = (2^n + 1) * (2^n - 1)```. Among any 3 consecutive numbers, there must be one that is a multiple of 3 among (2^n-1), (2^n), (2^n+1), one of them must be a multiple of 3, and (2^n) cannot be the one, therefore either (2^n-1) or (2^n+1) must be a multiple of 3, and 4^n-1 must be a multiple of 3 as well.

2. ### Count number of trailing zeros in bit representation of an integer

