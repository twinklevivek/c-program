#include<stdio.h>
int main()
{
  char character;
  printf("entar character: ");
  scanf("%c" ,&character);

 if (character>='a' && character<='z')
{
character=character- 'a' +'A';
}else if(character >= 'A' && character<='Z')
{character=character-'A'+'a';
}
printf("converted character:%c\n",character);
return 0;
}