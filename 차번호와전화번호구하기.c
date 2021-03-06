/* 문제
차량 번호와 전화번호를 구하는 문제입니다.차량 번호와 전화번호는 4자리 수이며 1에서 9사이의 수입니다.
차량 번호의 첫번째 자리의 수는 마지막 자리의 수보다 2가 큽니다.
차량 번호의 두번째 자리의 수는 세번째 자리의 수보다 큽니다.
차량번호와 전화번호는 순서가 역순입니다.
차량번호와 전화번호의 합은 25413입니다.
*/
 
#include <stdio.h>
int main(void)
{
	
    int carnum, phonenum;
    int first, second, third, fourth;
    
    for (fourth = 1; fourth <= 9; fourth++)
    {
    	
        first = fourth + 2;
        
        for (second = 1; second <= 9; second++)
        {
            
            for (third = second - 1; third >= 1; third--)
            {
            	
                carnum = first * 1000 + second * 100 + third * 10 + fourth;
                phonenum = fourth * 1000 + third * 100 + second * 10 + first;
                
                if (carnum + phonenum == 16456)
                {
                	
                    printf("차번호: %d%d%d%d\n", first, second, third, fourth);
                    printf("전화번호: %d%d%d%d\n", fourth, third, second, first);
                    
                }
            }
        }
    }
    
    return 0;
}
