# Find Numbers with Even Number of Digits

## Problem Statement
Given an array `nums` of integers, determine how many elements within this array have an even number of digits.

### Examples

#### Example 1:

**Input:** `nums = [12,345,2,6,7896]`

**Output:** `2`

**Explanation:** 
- `12` has 2 digits (even).
- `345` has 3 digits (odd).
- `2` has 1 digit (odd).
- `6` has 1 digit (odd).
- `7896` has 4 digits (even).

Thus, only `12` and `7896` contain an even number of digits.

#### Example 2:

**Input:** `nums = [555,901,482,1771]`

**Output:** `1`

**Explanation:** 
Only `1771` contains an even number of digits.

### Constraints

- `1 <= nums.length <= 500`
- `1 <= nums[i] <= 10^5`
