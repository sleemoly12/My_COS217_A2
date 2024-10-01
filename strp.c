#include "str.h"
#include <assert.h>

/* Return the length of the string pointer pcSrc, the argument. */
/* only have to do it once for both programs!*/
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
   char *final = pcDst;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   while ((*pcDst++ = *pcSrc++) != '\0') {
   }
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
   /* Add a new null terminator! */
   *pcTemp = '\0';
   return pcDst;
}

/* UNEDITED STARTING BELOW */

/* Returns 0 when pc1 and pc2 are equal, -1, or 1. Returns -1
if pc1 is less than pc2. Returns 1 if pc1 is greater than pc2.*/
int Str_compare(const char *pc1, const char *pc2)
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
   size_t h = 0;
   size_t n = 0;
   assert(haystack != NULL);
   assert(needle != NULL);

   /* If needle is an empty string, return haystack.*/
   if (needle[0] == '\0') {
      return haystack;
   }
   while (haystack[h] != '\0') {
      if (haystack[h] == needle[n]){
         if (n == 0){
            rememberMe = &haystack[h];
         }
         h++;
         n++;
         if (needle[n] == '\0') {
            return rememberMe;
         }
      }
      else if (haystack[h] != needle[n]){
         if (n > 0) {
            h = h - n + 1;
         }
         else {
            h++;
         }
         n = 0;
      }
   }
   /* If haystack reaches \0: */
   return NULL;
}