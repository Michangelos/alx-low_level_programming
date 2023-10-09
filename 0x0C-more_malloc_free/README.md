n C, you don't need to cast the return value of malloc. The pointer to void returned by malloc is automagically converted to the correct type. However, if you want your code to compile with a C++ compiler, a cast is needed. A preferred alternative among the community is to use the following:

int *sieve = malloc(sizeof *sieve * length);
