#include <stdio.h>
 
int main()
{
   int a = 21;
   int b = 10;
   int d=5;
   int c ,e;
    /*���������*/ 
   printf("�����������\n");
   c = a + b;
   printf("Line 1 - c ��ֵ�� %d\n", c );
   c = a - b;
   printf("Line 2 - c ��ֵ�� %d\n", c );
   c = a * b;
   printf("Line 3 - c ��ֵ�� %d\n", c );
   c = a / b;
   printf("Line 4 - c ��ֵ�� %d\n", c );
   c = a % b;
   printf("Line 5 - c ��ֵ�� %d\n", c );
   c = a++;  // ��ֵ���ټ� 1 ��c Ϊ 21��a Ϊ 22
   printf("Line 6 - c ��ֵ�� %d\n", c );
   c = a--;  // ��ֵ���ټ� 1 ��c Ϊ 22 ��a Ϊ 21
   printf("Line 7 - c ��ֵ�� %d\n", c );
 
   c = a++; 
   printf("�ȸ�ֵ�����㣺\n");
   printf("Line 1 - c ��ֵ�� %d\n", c );
   printf("Line 2 - a ��ֵ�� %d\n", a );

   c = a--; 
   printf("Line 3 - c ��ֵ�� %d\n", c );
   printf("Line 4 - a ��ֵ�� %d\n", a );
 
   printf("�������ֵ��\n");
 
   c = ++a; 
   printf("Line 5 - c ��ֵ�� %d\n", c );
   printf("Line 6 - a ��ֵ�� %d\n", a );
   
   c = --a; 
   printf("Line 7 - c ��ֵ�� %d\n", c );
   printf("Line 8 - a ��ֵ�� %d\n", a ); 
       /*��ϵ�����*/ 
    printf("��ϵ������� \n");
 if( a == b )
   {
      printf("Line 1 - a ���� b\n" );
   }
   else
   {
      printf("Line 1 - a ������ b\n" );
   }
   if ( a < b )
   {
      printf("Line 2 - a С�� b\n" );
   }
   else
   {
      printf("Line 2 - a ��С�� b\n" );
   }
   if ( a > b )
   {
      printf("Line 3 - a ���� b\n" );
   }
   else
   {
      printf("Line 3 - a ������ b\n" );
   }
   /* �ı� a �� b ��ֵ */
   a = 5;
   b = 20;
   if ( a <= b )
   {
      printf("Line 4 - a С�ڻ���� b\n" );
   }
   if ( b >= a )
   {
      printf("Line 5 - b ���ڻ���� a\n" );
  }
  /*�߼������*/
      printf("�߼��������\n");
    a=5;
    b=20;
 
   if ( a && b )
   {
      printf("Line 1 - ����Ϊ��\n" );
   }
   if ( a || b )
   {
      printf("Line 2 - ����Ϊ��\n" );
   }
   /* �ı� a �� b ��ֵ */
   a = 0;
   b = 10;
   if ( a && b )
   {
      printf("Line 3 - ����Ϊ��\n" );
   }
   else
   {
      printf("Line 3 - ����Ϊ��\n" );
   }
   if ( !(a && b) )
   {
      printf("Line 4 - ����Ϊ��\n" );
   }
   /*��ֵ�����*/
   printf("��ֵ�������\n"); 
     a = 21;
 
   c =  a;
   printf("Line 1 - =  �����ʵ����c ��ֵ = %d\n", c );
 
   c +=  a;
   printf("Line 2 - += �����ʵ����c ��ֵ = %d\n", c );
 
   c -=  a;
   printf("Line 3 - -= �����ʵ����c ��ֵ = %d\n", c );
 
   c *=  a;
   printf("Line 4 - *= �����ʵ����c ��ֵ = %d\n", c );
 
   c /=  a;
   printf("Line 5 - /= �����ʵ����c ��ֵ = %d\n", c );
 
   c  = 200;
   c %=  a;
   printf("Line 6 - %%= �����ʵ����c ��ֵ = %d\n", c );
 
   c <<=  2;
   printf("Line 7 - <<= �����ʵ����c ��ֵ = %d\n", c );
 
   c >>=  2;
   printf("Line 8 - >>= �����ʵ����c ��ֵ = %d\n", c );
 
   c &=  2;
   printf("Line 9 - &= �����ʵ����c ��ֵ = %d\n", c );
 
   c ^=  2;
   printf("Line 10 - ^= �����ʵ����c ��ֵ = %d\n", c );
 
   c |=  2;
   printf("Line 11 - |= �����ʵ����c ��ֵ = %d\n", c );
   
   /*�������ȼ�*/
   printf("�������ȼ���\n"); 
    a = 20;
    b = 10;
    c = 15;
    /*int d=5�ڿ�ͷ*/ 
    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   printf("(a + b) * c / d ��ֵ�� %d\n",  e );
 
   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   printf("((a + b) * c) / d ��ֵ�� %d\n" ,  e );
 
   e = (a + b) * (c / d);   // (30) * (15/5)
   printf("(a + b) * (c / d) ��ֵ�� %d\n",  e );
 
   e = a + (b * c) / d;     //  20 + (150/5)
   printf("a + (b * c) / d ��ֵ�� %d\n" ,  e );
  
   return 0;
}
