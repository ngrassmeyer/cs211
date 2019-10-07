#include <stdio.h>

// iterations of work unit
// iterprint for output at end of run
long double i = 1000000000;
long long int iterprint = i;

// variables for work unit
// pi starts at 0
// pi1-3 are used by workunit
long double pi = 0;
long double pi1;
long double pi2;
long double pi3;

// seed for leibniz series (starts at 1)
long double seed = 1;

// main function is the run
// each while loop iteration is a workunit
// outputs info when finished
int main() {
	while (i > 0) {
		pi1 = (4 / seed) - (4 / (seed + 2));
		pi2 = (4 / (seed + 4)) - (4 / (seed + 6));
		pi3 = pi1 + pi2;
		pi = pi + pi3;
		seed = seed + 8;
		i--;
	};
	long long int seedprint = seed;
	printf("Approximate value: %1.64Lf\n", pi);
	printf("Last seed was: %lli\n", seedprint);
	printf("Calcuated in %lli iterations of work unit.\n", iterprint);
	return(0);
};