# C - Sorting algorithms & Big O

## Learning Objectives
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Resources
- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)

- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)

- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)

- [15 sorting algorithms in 6 minutes (**WARNING**: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)](https://www.youtube.com/watch?v=kPRA0W1kECg)

- [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)

- [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.


**Point of note is that this format is used for Quiz and Task questions.**

- O(1)
- O(n)
- O(n!)
- n square -> O(n^2)
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
- n + k -> O(n+k)
- …

**Please use the “short” notation (don’t use constants). Example: O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.**

## Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.google.com/search?q=Here+is+a+quick+tip+to+help+you+test+your+sorting+algorithms+with+big+sets+of+random+integers%3A+Random.org&sourceid=chrome&ie=UTF-8)



## Tasks

- [x] 0-bubble_sort.c, 0-O
	- Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm
		> Prototype: void bubble_sort(int *array, size_t size);
		> You’re expected to print the array after each time you swap two elements (See example below)
	- Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

		> in the best case
		> in the average case
		> in the worst case


- [x] 1-insertion_sort_list.c, 1-O
	- Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

		> Prototype: void insertion_sort_list(listint_t **list);
		> You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
		> You’re expected to print the list after each time you swap two elements (See example below)
	- Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

		> in the best case
		> in the average case
		> in the worst case

- [x] 2-selection_sort.c, 2-O
	- Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

		> Prototype: void selection_sort(int *array, size_t size);
		> You’re expected to print the array after each time you swap two elements (See example below)
	- Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

		> in the best case
		> in the average case
		> in the worst case

- [x] 3-quick_sort.c, 3-O
	- Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

		> Prototype: void quick_sort(int *array, size_t size);
		> You must implement the Lomuto partition scheme.
		> The pivot should always be the last element of the partition being sorted.
		> You’re expected to print the array after each time you swap two elements (See example below)
	- Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

		> in the best case
		> in the average case
		> in the worst case


## Advanced Tasks

- [x] 

- [ ]

- [ ]

- [ ]

- [ ]

- [ ]

- [ ]

- [ ]

- [ ]


# .
