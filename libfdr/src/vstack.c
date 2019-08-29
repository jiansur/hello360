main()
{
  int i;
  char s[1000*1000*8];
  int j;

  s[0] = 'F';
  s[8000000-1] = 'L';
  printf("s = %lx \n&s= %lx \n&i= %lx \n&j= %lx\n",s, &s, &i, &j);
  printf("s - i = %d\n", (unsigned int)s-(unsigned int)&i);
  printf("i - j = %d\n", (unsigned int)&i-(unsigned int)&j);

  printf("&s[0] = %c, at addr %lx\n",s[0],&s[0]);
  printf("&s[8000000-1] = %c, at addr %lx\n",s[8000000-1],&s[8000000-1]);

}
