#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct interval_s {
  long low;  // lower bound 
  long up;   // upper bound
};

int is_empty_intersection(const struct interval_s *a, const struct interval_s *b);

char *prog = NULL;

void usage() {
  printf("USAGE: %s <integer> <integer> <integer> <integer>\n", prog);
  printf("EXAMPLES:\n");
  printf("%s 1 2 3 4\n", prog);
  printf("%s 1 2\n", prog);
  printf("%s \n", prog);
  return;
}


int main(int argc, char *argv[]) {
  prog = argv[0];
  
  if (argc != 1 && argc != 3 && argc != 5) {
    usage();
    return 0;
  }

  struct interval_s x;
  struct interval_s y;
  int b;

  if (argc == 1) {
    printf("is_empty_intersection(NULL, NULL)\n");
    b = is_empty_intersection(NULL, NULL);
    printf("== %d\n", b);
    return 0;
  }
  
  if (argc == 3) {
    if (sscanf(argv[1], "%ld", &x.low) != 1 || sscanf(argv[2], "%ld", &x.up) != 1) {
      usage();
      return 0;
    }
    printf("is_empty_intersection(NULL, [%ld, %ld])\n", x.low, x.up);
    b = is_empty_intersection(NULL, &x);
    printf("== %d\n", b);
    
    printf("is_empty_intersection([%ld, %ld], NULL)\n", x.low, x.up);
    b = is_empty_intersection(&x, NULL);
    printf("== %d\n", b);
    return 0;
  }
  
  if (sscanf(argv[1], "%ld", &x.low) != 1 || sscanf(argv[2], "%ld", &x.up) != 1 || sscanf(argv[3], "%ld", &y.low) != 1 || sscanf(argv[4], "%ld", &y.up) != 1) {
    usage();
    return 0;
  }

  printf("is_empty_intersection([%ld, %ld], [%ld, %ld])\n", x.low, x.up, y.low, y.up);
  
  b = is_empty_intersection(&x, &y);
  
  printf("== %d\n", b);
  
  return 0;
}
