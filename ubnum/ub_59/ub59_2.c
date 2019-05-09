//undefined behavior number 59
#include <stdio.h>
#include <stdlib.h>
  
struct S {
  size_t len;
  char buf[];  /* Flexible array member */
};
 
const char *find(const struct S *s, int c) {
  const char *first = s->buf;
  const char *last  = s->buf + s->len;
 
  while (first++ != last) { /* Undefined behavior */
    if (*first == (unsigned char)c) {
      return first;
    }
  }
  return NULL;
}
  
int main(void) {
  struct S *s = (struct S *)malloc(sizeof(struct S));
  if (s == NULL) {
    /* Handle error */
  }
  s->len = 0;
  find(s, 'a');
  return 0;
}

