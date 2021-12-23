#include <stdio.h>
#include <string.h>

void Success()
{
  printf("\nAccess granted!\n");
}

void Fail()
{
  printf("\nAccess denied\n");
}

int main()
{
  char *ch;
  printf("What is the password to access this super secret system?\n");
  scanf("%s", &ch);
  if(strcmp("complex_password", ch) == 0)
  {
    Success();
  }
  else
  {
    Fail();
  }
}

