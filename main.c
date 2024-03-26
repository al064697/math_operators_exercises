#include <stdio.h>
#include <math.h>

#define PI 3.1416

void arithmetic_operations(){
    /* Pídale al usuario dos números
     * Hacer: suma, resta, multiplicación y división*/

    float num1, num2, sum, difference, product, quotient;

    printf("Ingrese dos números:\n");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2, difference = num1 - num2, product = num1 * num2, quotient = num1 / num2;

    printf("Suma=%.0f\nResta=%.0f\nMultiplicación=%.0f\nDivisión=%.2f\n\n",
           sum, difference, product, quotient);
}

void calculate_areas(double a, double b){
    // Calcula el área de: círculo, cuadrado, rectángulo y triángulo

    double circle, square, rectangle, triangle;

    circle = PI * pow(a, 2), square = pow(a, 2), rectangle = a * b, triangle = (a * b) / 2;

    printf("Área del círculo: %.4f cm^2\nÁrea del cuadrado: %.0f cm^2\nÁrea del rectángulo: %.0f cm^2\nÁrea del triángulo: %.2f cm^2\n\n",
           circle, square, rectangle, triangle);
}

void pythagoras(double a, double b, double c){
    //Calcule: Cateto opuesto, cateto adyacente, hipotenusa usando el teorema de Pitágoras

    a = sqrt(c - b), b = sqrt(c - a), c = sqrt(a + b);

    printf("a=%.4f\nb=%.4f\nc=%.4f\n\n", a, b, c);
}

void increase_salary(double salary){
    //Incremente el salario de un usuario un 10%

    double increase;
    char name[50];

    printf("Ingrese su nombre para verificar si aumentó su salario: ");
    fgets(name, sizeof(name), stdin);
    /*Nota: fgets espera tres argumentos:
     * nombre de la variable(str),
     * el tamaño esperado del str
     * stdin que indica que la entrada se leerá desde la entrada estándar (normalmente el teclado).*/

    increase = salary * 0.1;
    salary += increase;

    printf("Felicidades, %s, recibiste un aumento.\nSu salario será de: $%.2f", name, salary);
}

void convert_time(){
    /*Transformar:
     * años a meses,
     * meses a semanas,
     * semanas a días,
     * días a horas*/
    //Pedirle al usuario que digite la cantidad de años con las que se hará la conversión

    int years, months, weeks, days, hours;

    printf("Ingrese la cantidad que desea convertir: ");
    scanf("%i", &years);

    months = years * 12, weeks = months * 4, days = months * 30, hours = days * 24;

    printf("%i año(s) tienen:\n%i meses,\n%i semanas,\n%i días,\n%i horas",
           years, months, weeks, days, hours);
}

void trapezoid_area(int b1, int b2, int h) {
    //Calcular el área de un trapecio

    float a = (float)((b1 + b2) * h) / 2;

    printf("El área del trapecio es de: %.2f cm^2", a);
}

void calculate_salary(double hourly_late) {
    //Calcular su salario e imprimirlo

    int hours_worked;
    double salary;

    printf("Digite sus horas trabajadas: ");
    scanf("%i", &hours_worked);

    salary = hourly_late * hours_worked;

    printf("Su salario es de $%.2f, por lo tanto usted ha trabajado %i", salary, hours_worked);
}


int main() {
    //arithmetic_operations();
    //calculate_areas(5, 10);
    //pythagoras(9, 16, 25);
    //increase_salary(20000);
    //convert_time();
    //trapezoid_area(5, 10, 15);
    calculate_salary(99.99);

    return 0;
}
