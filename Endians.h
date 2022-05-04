void endians(char *c)
{
  if(*c == 0x10)
  {
    printf("Underlying architecture is little endian.\n");
  }
  else
  {
     printf("Underlying architecture is big endian.\n");
  }
}
