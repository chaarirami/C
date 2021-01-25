/* Aufgabenblatt 5
@authors: Tobias Röbke, Rami Chaari
@date: 2018-05-02/Editiert am 2018-05-04
*/
#include <stdio.h>
#include <ti_expectations.h>
#include <CalculateTestNumberII.c>
int main(void){
	EXPECT_TRUE(2==CalculateTestnumber(12345,7));
	EXPECT_TRUE(0==CalculateTestnumber(99999,5));
	EXPECT_TRUE(3==CalculateTestnumber(10023,7));
	EXPECT_TRUE(2==CalculateTestnumber(76491,8));
	EXPECT_TRUE(0==CalculateTestnumber(32874,3));
	return 0;
}