# Binary-search

Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 

Conditions for when to apply Binary Search in a Data Structure:


To apply Binary Search algorithm:

1. The data structure must be sorted.
2. Access to any element of the data structure takes constant time.

How does Binary Search work?

Consider an array arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}, and the target = 23.

First Step: Calculate the mid and compare the mid element with the key. If the key is less than mid element, move to left and if it is greater than the mid then move search space to the right.

1. Key (i.e., 23) is greater than current mid element (i.e., 16). The search space moves to the right.
2. Key is less than the current mid 56. The search space moves to the left.
3. If the key matches the value of the mid element, the element is found and stop search.
