#include <stdio.h>
int main(void)
{
    int num1 = 0, num2 = 0; // عرف المتغيرين بصفر

    printf("Enter number: \n"); // اطبع ادخل الرقم 1
    scanf("%d", &num1);         // لادخال القيمة 1

    printf("Enter other number: \n"); // اطبع ادخل الرقم 2
    scanf("%d", &num2);               // لادخال القيمة 2

    printf("The sum is: %d\n", num1 + num2); // اطبع ان المجموع حاصل جمع المتغيرين
    printf("%d + %d = %d\n\n", num1, num2, num1 + num2);

    printf("The defferance is: %d\n", num1 - num2); // طرح
    printf("%d - %d = %d\n\n", num1, num2, num1 - num2);

    printf("The product is: %d\n", num1 * num2); // ضرب
    printf("%d * %d = %d\n\n", num1, num2, num1 * num2);

    printf("The quotient is: %d\n", num1 / num2); // قسمة
    printf("%d / %d = %d\n\n", num1, num2, num1 / num2);

    printf("The remainder is: %d\n", num1 % num2); // النسبة المئوية
    printf("%d %% %d = %d\n\n", num1, num2, num1 % num2);

    return 0;
}