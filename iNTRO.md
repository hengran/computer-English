## Algorithm origin
When solving the problem of the longest echo substring, the general idea is to center on the current character and extend to the left and right sides of it to find palindromes, but the time complexity of this solution is O(N^2), so can you reduce the time complexity a little more?Linear?The horse-drawn carriage algorithm solves this problem perfectly.
#### Key points of algorithm
1. The horse-drawn carriage algorithm does some pre-processing of the string, inserting some special delimiters into the string
2. The string is traversed, centering on one character at a time, and expanding on both sides until the two sides are unequal or out of bounds
3. By doing this, we can find the longest palindrome string

- The horse-drawn carriage algorithm does some pre-processing of the string, inserting some special delimiters into the string
- The string is traversed, centering on one character at a time, and expanding on both sides until the two sides are unequal or out of bounds
- By doing this, we can find the longest palindrome string
####
 [Official boss explains](https://www.jianshu.com/p/392172762e55)
 <br/>
 [back to readme](README.md)。
