#ifndef STR_INCLUDED
#define STR_INCLUDED

/* Return the length of the string pointer.*/
/* only have to do it once for both programs!*/
size_t Str_getLength(const char *pcSrc);

/* Return the modified destination array, which is a copy of the source array. */
size_t Str_copy(const char pcSrc[], char pcDst[])

/* Return the modified destination array, which is the source and destination array concatenated. */
size_t Str_concat(char pcSrc[], char pcDst[])

#endif
