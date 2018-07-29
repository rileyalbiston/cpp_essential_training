// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int a[] = {1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; ++i) {
    	printf("element %d is %d\n", i, a[i]);
    }

    char s[] = "string";
    for (char * cp = s; *cp; ++cp) {
    	printf("element %c\n", *cp);
    }

    return 0;
}