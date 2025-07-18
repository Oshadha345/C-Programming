#include <stdio.h>
#include <float.h>

float max() {
    float max_f = FLT_MAX;
    // Output: Max float value: 3.402823e+38
    return max_f;
}

double max_double() {
    double max_d = DBL_MAX;
    // Output: Max double value: 1.797693e+308
    return max_d;
}

long double max_long_double() {
    long double max_ld = LDBL_MAX;
    // Output: Max long double value: 1.189731e+4932
    return max_ld;
}

int main() {
    printf("=================================================\n");
    printf("float data type\n");
    printf("=================================================\n");

    printf("original float number: 3.123456789123456789\n");
    float number = 3.123456789123456789f; // Using 'f' to specify float literal
    printf("\nnumber   = %.6f\n", number);

    double dnumber =  3.123456789123456789;
    printf("dnumber  = %.16lf\n", dnumber);

    long double ldnumber = 3.123456789123456789L; // Using 'L' to specify long double literal
    printf("ldnumber = %.18Lf\n", ldnumber);


    printf("\n=================================================\n");
    printf("Max float value's\n");
    printf("=================================================\n");

    printf("Max float value      : %.6e\n", max());
    printf("Max double value     : %.6e\n", max_double());
    printf("Max long double value: %.6Le\n", max_long_double());

    return 0;
}
