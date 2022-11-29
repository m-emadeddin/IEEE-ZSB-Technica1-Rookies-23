# Insertion Sort Algorithm

### Sorting Mechanism:

The sorting mechanism is very trivial, It's to consider the first element to be sorted, and all the elements after to be compared with the previous elements, if the element is smaller than it's precednt we swap them. In very simple steps we do the following: 

* mark first element as sorted
* for each unsorted element X
    - 'extract' the element X
    
* for j = lastSortedIndex down to 0
    - if current element j > X
        * move sorted element to the right by 1

* break loop and insert X here

![](./Insertion.gif)

### Time & Space Complexity
- The Time Complexity for Insertion sort algorithm is : O(N^2)
- The Auxiliary Space Complexity for Insertion sort algorithm is : O(1)

