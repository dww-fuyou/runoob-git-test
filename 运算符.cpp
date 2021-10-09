#include <stdio.h>
 
int main()
{
   int a = 21;
   int b = 10;
   int d=5;
   int c ,e;
    /*算术运算符*/ 
   printf("算术运算符：\n");
   c = a + b;
   printf("Line 1 - c 的值是 %d\n", c );
   c = a - b;
   printf("Line 2 - c 的值是 %d\n", c );
   c = a * b;
   printf("Line 3 - c 的值是 %d\n", c );
   c = a / b;
   printf("Line 4 - c 的值是 %d\n", c );
   c = a % b;
   printf("Line 5 - c 的值是 %d\n", c );
   c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
   printf("Line 6 - c 的值是 %d\n", c );
   c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
   printf("Line 7 - c 的值是 %d\n", c );
 
   c = a++; 
   printf("先赋值后运算：\n");
   printf("Line 1 - c 的值是 %d\n", c );
   printf("Line 2 - a 的值是 %d\n", a );

   c = a--; 
   printf("Line 3 - c 的值是 %d\n", c );
   printf("Line 4 - a 的值是 %d\n", a );
 
   printf("先运算后赋值：\n");
 
   c = ++a; 
   printf("Line 5 - c 的值是 %d\n", c );
   printf("Line 6 - a 的值是 %d\n", a );
   
   c = --a; 
   printf("Line 7 - c 的值是 %d\n", c );
   printf("Line 8 - a 的值是 %d\n", a ); 
       /*关系运算符*/ 
    printf("关系运算符： \n");
 if( a == b )
   {
      printf("Line 1 - a 等于 b\n" );
   }
   else
   {
      printf("Line 1 - a 不等于 b\n" );
   }
   if ( a < b )
   {
      printf("Line 2 - a 小于 b\n" );
   }
   else
   {
      printf("Line 2 - a 不小于 b\n" );
   }
   if ( a > b )
   {
      printf("Line 3 - a 大于 b\n" );
   }
   else
   {
      printf("Line 3 - a 不大于 b\n" );
   }
   /* 改变 a 和 b 的值 */
   a = 5;
   b = 20;
   if ( a <= b )
   {
      printf("Line 4 - a 小于或等于 b\n" );
   }
   if ( b >= a )
   {
      printf("Line 5 - b 大于或等于 a\n" );
  }
  /*逻辑运算符*/
      printf("逻辑运算符：\n");
    a=5;
    b=20;
 
   if ( a && b )
   {
      printf("Line 1 - 条件为真\n" );
   }
   if ( a || b )
   {
      printf("Line 2 - 条件为真\n" );
   }
   /* 改变 a 和 b 的值 */
   a = 0;
   b = 10;
   if ( a && b )
   {
      printf("Line 3 - 条件为真\n" );
   }
   else
   {
      printf("Line 3 - 条件为假\n" );
   }
   if ( !(a && b) )
   {
      printf("Line 4 - 条件为真\n" );
   }
   /*赋值运算符*/
   printf("赋值运算符：\n"); 
     a = 21;
 
   c =  a;
   printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );
 
   c +=  a;
   printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );
 
   c -=  a;
   printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );
 
   c *=  a;
   printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );
 
   c /=  a;
   printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );
 
   c  = 200;
   c %=  a;
   printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c );
 
   c <<=  2;
   printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );
 
   c >>=  2;
   printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );
 
   c &=  2;
   printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );
 
   c ^=  2;
   printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );
 
   c |=  2;
   printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
   
   /*运算优先级*/
   printf("运算优先级：\n"); 
    a = 20;
    b = 10;
    c = 15;
    /*int d=5在开头*/ 
    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   printf("(a + b) * c / d 的值是 %d\n",  e );
 
   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   printf("((a + b) * c) / d 的值是 %d\n" ,  e );
 
   e = (a + b) * (c / d);   // (30) * (15/5)
   printf("(a + b) * (c / d) 的值是 %d\n",  e );
 
   e = a + (b * c) / d;     //  20 + (150/5)
   printf("a + (b * c) / d 的值是 %d\n" ,  e );
  
   return 0;
}
