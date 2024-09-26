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
   size_t pcDstNew[];
   assert(pcSrc != NULL);
   assert(pcDst != NULL);
   int i = 0;
   while (pcSrc[i] != '\0') {
      pcDst[i] = pcSrc[i];
      i++;
   }
   pcDst[i] = '\0';
   return pcDst;
}

/