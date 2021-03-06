#include "stack_machine.h"
#include "brute_force.h"

int main(int argc, char *argv[]){
  int i = 1;

  int max_bits = atoi(argv[i++]);
  int max_jmps = atoi(argv[i++]);
  int stack_size = atoi(argv[i++]);
  int max_interest = atoi(argv[i++]);

  StackMachine sm(stack_size, 1, max_jmps, max_bits, max_interest);

  BruteForce bf(&sm, max_interest);
  bf.Search();
  
  return 0;
}
