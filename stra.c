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
size_t Str_copy(const char pcSrc[], char pcDst[])
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
size_t Str_concat(char pcSrc[], char pcDst[])
{
   int i = 0;
   int j = 0;
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   while (pcSrc[i] != '\0') {
      pcDst[i] = pcSrc[i];
      i++
   }
   while (pcDst[j] != '\0') {
      pcDst[i] = pcDst[j];
      j++
   }
   pcDst[i+j] = '\0';
   return pcDst;
}