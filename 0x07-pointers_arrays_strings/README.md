consist of more c pointer task.
0. The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
1. The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest.
2. char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
3. unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
4. The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
5. char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
6. void print_chessboard(char (*a)[8]);
a function that prints the chessboard.
7. void print_diagsums(int *a, int size);
 function that prints the sum of the two diagonals of a square matrix of integers. 
