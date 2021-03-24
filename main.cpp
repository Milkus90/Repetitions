/*
 * Task 3
 * You are given a DNA sequence: a string consisting of characters A, C, G, and T.
 * Your task is to find the longest repetition in the sequence.
 * This is a maximum-length substring containing only one type of character.
 *
 *Input
 *The only input line contains a string of n characters.
 *
 *Output
 *Print one integer: the length of the longest repetition.
 *
 */



#include <iostream>



int findMaxRepetitions (std::string word){
    int maxRepeat = 1;
    int repeatCount = 1;
    for (std::string::iterator it = word.begin() ; it != (--word.end()) ; it++){
        if (*it == *(++it)){   // have to find the solution without incrementation and decrementation od iterator
            repeatCount++;
            if (repeatCount > maxRepeat) maxRepeat = repeatCount;
        } else repeatCount = 1;
        it--;
    }
    return maxRepeat;
}

int main()
{
    std::string dna = "AAAATCCTTCGAACCACA";
    std::cout << dna << "\nThe length of the longest repetition is: " << findMaxRepetitions(dna) << std::endl;

    return 0;
}
