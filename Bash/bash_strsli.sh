#!/bin/bash
text="ABCDE"

echo text: $text
echo Str slicing:
# Extract from index 0, maximum 2 characters
echo "${text:0:2}" # Output: AB
# Extract from index 3 to the end
echo "${text:3}" # Output: DE
# Extract 3 characters starting from index 1
echo "${text:1:3}" # Output: BCD
# If length exceeds remaining characters, it stops at the end
echo "${text:3:3}" # Output: DE (only 2 characters available)

#Note that the second number in the slice notation represents the
#maximum length of the extracted substring, not the ending index. This
#is different from some other programming languages like Python. In
#Bash, if you specify a length that would extend beyond the end of the
#string, it will simply stop at the end of the string without raising an
#error.
