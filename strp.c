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

/* Return the length of the string pointer pcSrc, the argument. */
/* only have to do it once for both programs!*/

char* Str_copy(char *pcDst, const char *pcSrc[])
{
   int i = 0;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   while (*pcEnd != '\0') {
      /* unfinished af */
   }
   pcDst[i] = '\0';
   return pcDst;
}
