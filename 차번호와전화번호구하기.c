/* ����
���� ��ȣ�� ��ȭ��ȣ�� ���ϴ� �����Դϴ�.���� ��ȣ�� ��ȭ��ȣ�� 4�ڸ� ���̸� 1���� 9������ ���Դϴ�.
���� ��ȣ�� ù��° �ڸ��� ���� ������ �ڸ��� ������ 2�� Ů�ϴ�.
���� ��ȣ�� �ι�° �ڸ��� ���� ����° �ڸ��� ������ Ů�ϴ�.
������ȣ�� ��ȭ��ȣ�� ������ �����Դϴ�.
������ȣ�� ��ȭ��ȣ�� ���� 25413�Դϴ�.
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
                	
                    printf("����ȣ: %d%d%d%d\n", first, second, third, fourth);
                    printf("��ȭ��ȣ: %d%d%d%d\n", fourth, third, second, first);
                    
                }
            }
        }
    }
    
    return 0;
}
