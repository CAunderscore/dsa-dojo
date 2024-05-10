#include <iostream>
#include <vector>

/* Linear search can work with both sorted and unsorted arrays,
but binary search can *only* work on sorted arrays. 
 Given an array (represented as a list in Python) of integers and a value in the array,
 return the index of the value in the array
 (Assuming the value to look for is always in the array,
 and there are no duplicates in the array)
// Using size_t (unsigned int) to represent an index (https://en.cppreference.com/w/c/types/size_t) */
size_t linearSearch(const std::vector<int>& array, int num)
{
    size_t index = 0;
    // implement the function here

    return index;
}


/* DO NOT MODIFY
Gets input from console, parses it and returns the array */
std::vector<int> getArray()
{
    std::string input_str = std::getline();
    std::vector<int> arr;
    std::stringstream ss(input_str);
    std::string token;
    
    if (input_str.find("exit") != std::string::npos) {
        std::exit(0);
    }

    while (std::getline(ss, token, ',')) {
        arr.push_back(std::stoi(token));
    }

    return arr;
}


// start of code for "run"
void main()
{
    std::vector<int> array;
    int num;

    while (true) {
        array = getArray();
        std::cin >> num;
        std::cout << linearSearch(array, num) << std::endl;
    }

} // end of code for "run"

/*
You can write your own code below this comment for testing.
Make sure you comment out the main function you don't want to run.
i.e. For testing: Comment out the main function above, uncomment the one below,
vise versa for running in "/challenge/run"
*/

/*
void main()
{
    std::vector arr = {1,2,3,4,5};
    int num = 3;
    

}
*/