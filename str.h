/* Header file for stra.c and strp.c. Includes all of
the functions in array form, but can be read in pointer
form. */

#ifndef STR_INCLUDED
#define STR_INCLUDED
#include <stddef.h>

/* Return the length of the string pointer pcSrc, the argument. */
/* only have to do it once for both programs!*/
size_t Str_getLength(const char pcSrc[]);

/* Return the modified destination array pcDst, which is a 
copy of the source array pcSrc. */
char* Str_copy(char pcDst[], const char pcSrc[]);

/* Return the modified destination array pcDst, which is 
the destination array, pcDst, and source array, pcSrc, concatenated. */
char* Str_concat(char pcDst[], const char pcSrc[]);

/* Returns 0 when pc1 and pc2 are equal, -1, or 1. Returns -1
if pc1 is less than pc2. Returns 1 if pc1 is greater than pc2.*/
int Str_compare(const char pc1[], const char pc2[]);

/* Returns pointer to beginning of located substring needle,
found in haystack, or NULL if substring is not found. 
If needle is an empty string, return value is always haystack.*/
char* Str_search(const char haystack[], const char needle[]);

#endif
