#include "str.h"
#include <assert.h>

/* get length of src array */
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/* copy src array to dst array */
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

/* concatenate src array and dst array */
char* Str_concat(char pcDst[], const char pcSrc[])
{
   int i = 0;
   int j = 0;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   while (pcSrc[i] != '\0') {
      pcDst[i] = pcSrc[i];
      i++;
   }
   while (pcDst[j] != '\0') {
      pcDst[i] = pcDst[j];
      j++;
   }
   pcDst[i+j] = '\0';
   return pcDst;
}

/* compare src array and dst array, return the int differences in letters */
int Str_compare(const char pc1[], const char pc2[])
{
   return 0;
   /*
   int i = 0;
   assert(pc1 != NULL);
   assert(pc2 != NULL);
   while (pc1[i] != '\0') {
      if pc1[i] = pc2[i]{

      }
      else if pc1[i] < pc2[i] {

      }
      else if pc1[]
     
   }
   */
}

char* Str_search(const char haystack[], const char needle[]) 
{

return NULL;
}