#include <iostream>
#include <ctype.h>
static void rev_chars(
 char* ptr1,
 char* ptr2
)
{
 char tmp;
 while (ptr1 < ptr2) {
 tmp = *ptr1;
 *ptr1 = *ptr2;
 *ptr2 = tmp;
 ptr1++;
 ptr2--; 
  }
}

void reverse(char* const str)
{
 rev_chars(str, str + strlen(str)-1);
 char* first_ptr = str;
 while (*first_ptr != '\0') {
 while (! isalpha(*first_ptr)) {
 if (*first_ptr == '\0')
 return;
 first_ptr++;
 }
 char* last_ptr; 
 for (last_ptr = first_ptr+1;
 isalpha(*last_ptr); ++last_ptr)
 continue;
 rev_chars(first_ptr, last_ptr-1);
 first_ptr = last_ptr +1;
 }
}
enum process {PROCESS_1 = 0, PROCESS_2 = 1};
volatile bool flag[2] = {false, false};
volatile int turn = PROCESS_1;
void process_1()
{
 flag[PROCESS_1] = true;
 turn = PROCESS_1;
 while (flag[PROCESS_2] && (turn == PROCESS_1))
 continue; // do nothing
 do_critical();
 flag[PROCESS_1] = false;
}
void process_2()
{
 flag[PROCESS_2] = true;
 turn = PROCESS_2;
 while (flag[PROCESS_1] && (turn == PROCESS_2))
 continue; // do nothing
 do_critical();
 flag[PROCESS_2] = false;
}

