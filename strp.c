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
   /* Add a new null terminator!!!!!! */
   *pcTemp = '\0';
   return pcDst;
}


/* Returns 0 when pc1 and pc2 are equal, -1, or 1. Returns -1
if pc1 is less than pc2. Returns 1 if pc1 is greater than pc2.*/
int Str_compare(const char *pc1, const char *pc2)
{
   assert(pc1 != NULL); /* are you given an address that is real? */
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

/* UNEDITED STARTING BELOW */


/* Returns pointer to beginning of located substring needle,
found in haystack, or NULL if substring is not found. 
If needle is an empty string, return value is always haystack.*/

char* Str_search(const char *haystack, const char *needle) 
{
   const char *rememberMe;
   const char *h = haystack;
   const char *n = needle;

   assert(haystack != NULL);
   assert(needle != NULL);

   /* If needle is an empty string, return haystack. */
   if (*needle == '\0') {
      return (char*)haystack;
   }


   while (*h != 0){
      /* If matching letter is found */
      if (*h == *n) {
         rememberMe = h;
         while (*h != '\0' && *n != '\0' && *h == *n) {
            h++;
            n++;
         }

         /* If end of needle reached, match found */
         if (*n == '\0') {
            return (char*)rememberMe;
         }
         /* reset n pointer to beginning of needle */
         n = needle; 
         h = rememberMe + 1;
      }
      /* Increment haystack */
      else (h++);
        }
   return NULL;
   }
   