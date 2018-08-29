# Animals

Jose is a prince and has N animals. The i-th animal can be shown by the integer T[i]. 
But his father told him to share the animals with his sister, who lives some hours away. 
Now he must give her half the animals but thaknfully the number of animals is even.

Write a function solution that takes in a vector of N integers and returns the largest possible
number of distinct animals that Jose can have after giving half to his sister.

For example, if the vector contains [1, 5, 8, 8, 3, 3]
The function should return 3 because Jose will ideally give away one of each of the duplicates 
first and then try to keep a maximum number of distinct animals.

Assume the following:
Total number of animals is greater than 2 but less than 1 million
Total number of animals is an even number
There are only positive integers in the vector

Currently the vector numbers can be changed from inside the main function but upon refactoring,
I will provide functionality to take in the input from the user directly in the command prompt.
