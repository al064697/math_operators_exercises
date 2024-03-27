#include <stdio.h>
#include <math.h>

#define PI 3.1416

/* Pídale al usuario dos números
 * Hacer: suma, resta, multiplicación y división*/
void arithmetic_operations(){
    float num1, num2, sum, difference, product, quotient;

    printf("Ingrese dos números:\n");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2, difference = num1 - num2, product = num1 * num2, quotient = num1 / num2;

    printf("Suma=%.0f\nResta=%.0f\nMultiplicación=%.0f\nDivisión=%.2f\n\n",
           sum, difference, product, quotient);
}

// Calcula el área de: círculo, cuadrado, rectángulo y triángulo
void calculate_areas(double a, double b){
    double circle, square, rectangle, triangle;

    circle = PI * pow(a, 2), square = pow(a, 2), rectangle = a * b, triangle = (a * b) / 2;

    printf("Área del círculo: %.4f cm^2\nÁrea del cuadrado: %.0f cm^2\nÁrea del rectángulo: %.0f cm^2\nÁrea del triángulo: %.2f cm^2\n\n",
           circle, square, rectangle, triangle);
}

//Calcule: Cateto opuesto, cateto adyacente, hipotenusa usando el teorema de Pitágoras
void pythagoras(double a, double b, double c){
    a = sqrt(c - b), b = sqrt(c - a), c = sqrt(a + b);

    printf("a=%.4f\nb=%.4f\nc=%.4f\n\n", a, b, c);
}

//Incremente el salario de un usuario un 10%
void increase_salary(double salary){
    double increase;
    char name[50];

    printf("Ingrese su nombre para verificar si aumentó su salario: ");
    fgets(name, sizeof(name), stdin);
    /*Nota: fgets espera tres argumentos:
     * nombre de la variable(str),
     * el tamaño esperado del str
     * stdin que indica que la entrada se leerá desde la entrada estándar (normalmente el teclado).*/

    increase = salary * 0.1, salary += increase;

    printf("Felicidades, %s, recibiste un aumento.\nSu salario será de: $%.2f", name, salary);
}

/*Transformar:
 * años a meses,
 * meses a semanas,
 * semanas a días,
 * días a horas*/
//Pedirle al usuario que digite la cantidad de años con las que se hará la conversión
void convert_time(){
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

//Calcular su salario e imprimirlo
void calculate_salary(double hourly_late) {
    int hours_worked;
    double salary;

    printf("Digite sus horas trabajadas: ");
    scanf("%i", &hours_worked);

    salary = hourly_late * hours_worked;

    printf("Su salario es de $%.2f, por lo tanto usted ha trabajado %i", salary, hours_worked);
}

/*Un alumno desea saber cuál será su calificación finan
 * en la materia de Algoritmos
 * Dicha calificación se compone de los siguientes ejercicios:
 * 55% del promedio de sus tres calificaciones parciales
 * 30% de la calificación del examen final
 * 15% de la calificacion de un trabajo final*/
void students_marks() {
    int p1, p2, p3, final_exam, final_work;
    float final_GPA, partials_mark, mga, fea, fwa;

    printf("Ingrese el porcentaje obtenido en los tres parciales: ");
    scanf("%i %i %i", &p1, &p2, &p3);
    printf("Ingrese el porcentaje obtenido en el examen final: ");
    scanf("%i", &final_exam);
    printf("Ingrese el porcentaje obtenido en el trabajo final: ");
    scanf("%i", &final_work);

    partials_mark = ((p1 + p2 + p3) / 3),

    mga = partials_mark * 0.55;
    fea = final_exam * 0.3,
    fwa = final_work * 0.15,
    final_GPA = (mga + fea + fwa);

    printf("El porcentaje final obtenido es de %.1f por ciento", final_GPA);
}

/*Calcular la cantidad de segundos que están incluidos en:
 * el número de horas;
 * minutos;
 * segundos;
 * ingresados por el usuario*/
void convert_seconds() {
    int hours, minutes, seconds;

    printf("Ingrese el numero de horas: ");
    scanf("%i", &hours);
    printf("Ingrese el numero de minutos: ");
    scanf("%i", &minutes);
    printf("Ingrese el numero de segundos: ");
    scanf("%i", &seconds);

    seconds += (hours * 3600) + (minutes * 60);
    printf("Total de segundos = %i", seconds);
}

//Convertir grados Celsius a Farenheit
void convert_celsius_farenheit(float celsius) {
    float farenheit = ((celsius * 9) / 5) + 32;

    printf("Temperatura en Farenheit: %.1f °F", farenheit);

}

/*Una tienda ofrece un descuento del 15% sobre el total de la compra
 * y un cliente desea saber cuánto deberá pagar finalmente por su compra*/
void calculate_discoint() {
    float price, total_price;

    printf("Ingrese la cantidad total a pagar: ");
    scanf("%f", &price);

    total_price = price - (price * 0.15);

    printf("Total a pagar = : $%.2f", total_price);
}

//Hacer un programa que calcule longitudes de la circunferencia
void circumference_length(float r) {
    float p, a;
    p = PI * (2 * r);
    a = PI * pow(r, 2);

    printf("Perimetro = %.2f cm^2\nArea = %.2f cm^2", p, a);
}

//Calcule la media aritmética de tres numeros cualquiera dados por el usuario
void calculate_mean() {
    float n1, n2, n3, mean;

    printf("Ingrese tres números: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    mean = (n1 + n2 + n3) / 3;

    printf("Media aritmética = %.2f", mean);
}

/*Calcular el nuevo salario de un obrero
 * si obtuvo un incremento del 25% sobre su salario anterior*/
void new_salary() {
    float salary, new_salary;

    printf("¡Es candidato a recibir un aumento.\n"
           "Por favor, ingrese su salario anterior para poder recibir este incremento: $");
    scanf("%f", &salary);

    new_salary = salary + (salary * 0.25);

    printf("Su nuevo salario será de: $%.2f", new_salary);
}

int main() {
    //arithmetic_operations();
    //calculate_areas(5, 10);
    //pythagoras(9, 16, 25);
    //increase_salary(20000);
    //convert_time();
    //trapezoid_area(5, 10, 15);
    //calculate_salary(99.99);
    //students_marks();
    //convert_celsius_farenheit(31);
    //calculate_discoint();
    //circumference_length(10);
    //calculate_mean();
    new_salary();

    return 0;
}
