#include <stdio.h>
#include <math.h>

void charges(double hours, double *average, double *total);

double round_money(double money);

FILE *open_file(char *filename);

double read_file(FILE *filename, double item);

double revenue(int t);

int predict(double m);
