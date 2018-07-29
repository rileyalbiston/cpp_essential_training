// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
# include <string>
using namespace std;

int main( int argc, char ** argv )
{
	int a[] = {1, 2, 3, 4, 5 };
    for (int i : a ) {
    	printf("element is %d\n", i);
    }

    char s[] = "string";
    for (char c : s) {
    	printf("element %c\n", c);
    }

    for (char c : s) {
    	if (c == 0) break;
    	printf("element %c\n", c);
    }

    // also works with STL string
    string st = "string";
    for (char c : st) {
    	printf("element %c\n", c);
    }    

    return 0;
}