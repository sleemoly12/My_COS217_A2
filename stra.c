/* Array implementations of functions Str_getLength, Str_copy, 
Str_concat, Str_compare, and Str_search.*/

#include "str.h"
#include <assert.h>

/* Return the length of the string pointer pcSrc, the argument. */
/* only have to do it once for both programs!*/
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/* Return the modified destination array pcDst, which is a 
copy of the source array pcSrc. */
char* Str_copy(char pcDst[], const char pcSrc[])
{
   int i = 0;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   while (pcSrc[i] != '\0') {
      pcDst[i] = pcSrc[i];
      i++;
   }
   pcDst[i] = '\0';
   return pcDst;
}

/* Return the modified destination array pcDst, which is 
the destination array, pcDst, and source array, pcSrc, concatenated. */
char* Str_concat(char pcDst[], const char pcSrc[])
{
   size_t i = 0;
   size_t j = 0;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   while (pcDst[i] != '\0') {
      i++;
   }
   while (pcSrc[j] != '\0') {
      pcDst[i] = pcSrc[j];
      i++;
      j++;
   }
   pcDst[i] = '\0';
   return pcDst;
}

/* Returns 0 when pc1 and pc2 are equal, -1, or 1. Returns -1
if pc1 is less than pc2. Returns 1 if pc1 is greater than pc2.*/
int Str_compare(const char pc1[], const char pc2[])
{
   size_t i = 0;
   assert(pc1 != NULL);
   assert(pc2 != NULL);
   
   while (pc1[i] != '\0' || pc2[i] != '\0') {
      if (pc1[i] < pc2[i]) {
         return -1;
      }
      else if (pc1[i] > pc2[i]) {
         return 1;
      }
      i++;
   }
   return 0;
}

/* Returns pointer to beginning of located substring needle,
found in haystack, or NULL if substring is not found. 
If needle is an empty string, return value is always haystack.*/

char* Str_search(const char haystack[], const char needle[]) 
{
   const char* rememberMe = NULL;
   size_t hPtr = 0;
   size_t nPtr = 0;
   assert(haystack != NULL);
   assert(needle != NULL);

   /* If needle is an empty string, return haystack.*/
   if (needle[0] == '\0') {
      return (char*) haystack;
   }
   while (haystack[hPtr] != '\0') {
      /* If matching letter is found */
      if (haystack[hPtr] == needle[nPtr]){
         if (nPtr == 0){
            rememberMe = &haystack[hPtr];
         }
         hPtr++;
         nPtr++;
         if (needle[nPtr] == '\0') {
            return (char*)rememberMe;
         }
      }
      else if (haystack[hPtr] != needle[nPtr]){
         if (nPtr > 0) {
            hPtr = hPtr - nPtr + 1;
         }
         else {
            hPtr++;
         }
         nPtr = 0;
      }
   }
   /* If haystack reaches \0: */
   return NULL;
}