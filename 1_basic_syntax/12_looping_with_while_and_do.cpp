// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int a[] = {1, 2, 3, 4, 5 };
    int i = 0;
    
    // while loop
/*    
	while (i < 5) {
    	printf("element %d is %d\n", i, a[i]);
    	++i;
    }
*/
    // do while loop
    do {
    	printf("element %d is %d\n", i, a[i]);
    	++i;
    } while (i < 5);

    return 0;
}