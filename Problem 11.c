/*beecrowd | 1010 | Simple Calculate */
#include <stdio.h>
int main() {
int Code_of_a_product_1, Number_of_units_of_product_1, Code_of_a_product_2, Number_of_units_of_product_2;
float Price_for_one_unit_of_product_1, Price_for_one_unit_of_product_2;
scanf("%d%d%f", &Code_of_a_product_1, &Number_of_units_of_product_1, &Price_for_one_unit_of_product_1);
scanf("%d%d%f", &Code_of_a_product_2, &Number_of_units_of_product_2, &Price_for_one_unit_of_product_2);
printf("VALOR A PAGAR: R$ %0.2f", ((Number_of_units_of_product_1*Price_for_one_unit_of_product_1)+(Number_of_units_of_product_2*Price_for_one_unit_of_product_2)));
return 0;
}
