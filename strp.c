/* Pointer implementations of functions Str_getLength, Str_copy, 
Str_concat, Str_compare, and Str_search.*/

#include "str.h"
#include <assert.h>

/* Return the length of the string pointer pcSrc, the argument. */
size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

/* Return the modified destination array pcDst, which is a 
copy of the source array pcSrc. */

char* Str_copy(char *pcDst, const char *pcSrc)
{
   /* Save the memory location of pcDst to final. */
   char *final = pcDst;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   /* Increment through and copy contents of pcSrc to pcDst. 
   Be economical! */
   while ((*pcDst++ = *pcSrc++) != '\0') {
   }
   /* Return modified pcDst array, whose location is already
   saved by final from earlier! */
   return final;
}

/* Return the modified destination array pcDst, which is 
the destination array, pcDst, and source array, pcSrc, concatenated. */
char* Str_concat(char *pcDst, const char *pcSrc)
{
   /* Save the memory locatino of pcDst to *pcTemp.*/
   char *pcTemp = pcDst;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);

   /* Increment memory location of pcTemp to null terminator of pcDst */
   while (*pcTemp != '\0') {
      pcTemp++;
   }

   /* Concatenate pcSrc beginning from pcDst's null terminator location,
   replacing values with contents of pcSrc. */
   while (*pcSrc != '\0') {
      *pcTemp++ = *pcSrc++;
   }
   /* Add a new null terminatro. */
   *pcTemp = '\0';
   return pcDst;
}


/* Returns 0 when pc1 and pc2 are equal, -1, or 1. Returns -1
if pc1 is less than pc2. Returns 1 if pc1 is greater than pc2.*/
int Str_compare(const char *pc1, const char *pc2)
{
   assert(pc1 != NULL);
   assert(pc2 != NULL);

   while (*pc1 != '\0' || *pc2 != '\0') {
      if (*pc1 < *pc2) {
         return -1;
      }
      else if (*pc1 > *pc2) {
         return 1;
      }
      pc1++;
      pc2++;
   }
   return 0;
}

/* Returns pointer to beginning of located substring needle,
found in haystack, or NULL if substring is not found. 
If needle is an empty string, return value is always haystack.*/

char* Str_search(const char *haystack, const char *needle) 
{
   const char *rememberMe;
   const char *hPtr = haystack;
   const char *nPtr = needle;

   assert(haystack != NULL);
   assert(needle != NULL);

   /* If needle is an empty string, return haystack. */
   if (*needle == '\0') {
      return (char*)haystack;
   }


   while (*hPtr != '\0'){
      /* If matching letter is found */
      if (*hPtr == *nPtr) {
         rememberMe = hPtr;
         while (*hPtr != '\0' && *nPtr != '\0' && *hPtr == *nPtr) {
            hPtr++;
            nPtr++;
         }
         /* If end of needle reached, match found */
         if (*nPtr == '\0') {
            return (char*)rememberMe;
         }
         /* Reset n pointer to beginning of needle. Continue
         on with h pointer through the rest of the string. */
         nPtr = needle; 
         hPtr = rememberMe + 1;
         }
      /* Increment haystack */
      else (hPtr++);
      }
   return NULL;
   }
   