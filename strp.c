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
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   char *final = pcDst;
   while (*pcDst++ = *pcSrc++ != '\0') {
      return final;
   }
}
