#include <stdio.h>
#include "ti_expectations.h"
#include "calculateggt.h"

int main(void){
	
	EXPECT_TRUE(4 == calculateGGT(8, 20));
	EXPECT_TRUE(2 == calculateGGT(6,  2));
	EXPECT_TRUE(3 == calculateGGT(9, 12));
	EXPECT_TRUE(0 == calculateGGT(0,  2));
	EXPECT_TRUE(0 == calculateGGT(2,  0));
	
	return 0;
}