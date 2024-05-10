
"""
Linear search can work with both sorted and unsorted arrays,
but binary search can *only* work on sorted arrays. 
 Given an array (represented as a list in Python) of integers and a value in the array,
 return the index of the value in the array
 (Assuming the value to look for is always in the array,
 and there are no duplicates in the array)
"""
def linear_search(array: list[int], num: int) -> int:
    # implement the function here

    return index


def get_input():
    inp = input()
    if "exit" in input_str:
        sys.exit(0)
    arr = [int(num) for num in input_str.split(', ')]
    inp = input()
    num = int(inp)
    
    return (arr, num)
    

# start of code for "run"
while True:
    # parse inputs
    input_tuple = get_input()
    # print output
    print(linear_search(input_tuple))

# end of code for "run"

"""
You can write your own code for testing here,
just remember to comment it out (like this block comment and the one below) 
before you send it to "run"!
"""

"""
arr = [1,2,3,4,5]
num = 3
print(f"Input: {arr}, {num}")
print("Output: " + linear_search(arr, num))

"""
