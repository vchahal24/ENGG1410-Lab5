# ENGG1410-Lab5

**Problem**:
The problem faced in this lab exercise was to model and develop a C program that allows the user to input a string consisting of various characters (both uppercase and lowercase). The program would then utilize this string to count the number of occurrences and output the distribution of letters within that string while addressing the criteria that both uppercase and lowercase letters are categorized together. 

**Assumptions and Constraints:**
Assumptions that were made through the development of this program included assuming that the user’s input does not exceed the size of the input array (256 characters), assuming the input itself is valid (uses the English alphabet), assuming the input is single line.

Constraints that set the parameters for approaching this task included ensuring uppercase and lowercase letters were categorized together as the initial user input could not be altered/changed and is case-sensitive. Additionally, no optimization to the input could be done during compilation. 

**Solution to Problem:** 
**ii.	Psuedo Code**
Start
Initialize empty 256 length array called input and buf to store the string from user.

Print the statement: "Enter text strings (press Enter on an empty line to exit):"

While
	Read the input given by the user character by character.
	If no more characters are present and there is an empty line.
Leave the loop.

Initialize an int variable i as 0.
For int is less than the string length.
Store respective input array into respective buffer array.
If the value is lowercase, subtract by 32 to convert into uppercase.

Adjust letterCount based on value.
Increment i
    
Print the statement: "Distribution of letters in the input:"

For each letterCount:
Output the letter and its count.

End

**System Overview & Justification of Design**
To design and develop a C program that counts the occurrences of letters and outputs the distribution back to the user, the system must first prompt the user to input a string of characters. Upon a valid entry from the user, the system uses while and for loops to store each character into a buffer array. To allocate the lowercase letters to the uppercase letters in the distribution, the system then converts all lowercase letters into uppercase letters by subtracting 32 from their respective ASCII values. Using a letterCount array, this value is incremented each time a lowercase or uppercase letter is detected. Finally, the system uses a for loop to output the distribution of letters using the letters themselves and their respective letterCount value.
The justification for this design is that it is simple, efficient, and provides the user with the accurate distribution without asking for further user input. Although on the system-end, the letters are altered into uppercase from lowercase, this change would not be visible to the user and they would get the accurate distribution, creating a clever, efficient, and effective way to solve the problem. By a strategic use of for and nested if loops, the problem is solved without many additional lines, creating less of a burden on the memory and the processing time, providing the user with a better experience.

**Error Analysis**
Several tests were conducted to ensure the program ran smoothly without any semantic or logical errors. As the program was able to compile and execute effectively across the multiple tests, it was concluded that there were no syntax errors present as well. Through a variety of inputted responses from the user, the program successfully delivers an accurate distribution of letters. The final version of the program does not contain any significant issues as it completes the criteria while acknowledging the constraints given. However, during the development of the program, several problems arose such as combining the count of lowercase and uppercase letters. Since uppercase and lowercase letters have different ASCII values, this made this aspect of the development process tricky. The lab exercise instructions provided the knowledge that each lowercase and uppercase value varied by 32, which allowed me to create a solution where lowercase letters were converted into uppercase letters, creating one joint count.
