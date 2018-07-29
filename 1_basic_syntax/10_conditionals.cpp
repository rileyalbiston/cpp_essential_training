// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int x = 42;
    int y= 7;

    // condition is true and shows output
    if (x > y) {
    	puts("Condition is true");
    }

    // no output
    if (x < y) {
    	puts("Condition is true");
    }

    // add else statements
    if (x < y) {
    	puts("Condition is true");
    } else {
    	puts("Condition is false");
    }

    // else if
    if (x < y) {
    	puts("x < y");
    } else if (x > y ) {
    	puts("x > y");
    } else {
    	puts("They must be equal");
    }

    // conditional expression or ternary expression
    printf("The greater is: %d\n", x > y ? x : y);

    return 0;
}