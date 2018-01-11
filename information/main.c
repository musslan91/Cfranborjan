#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define STRMAX 29



int main(int argc, char const *argv[]) {
  int n;
  printf("Number of people: ");
  scanf("%i", &n);
  struct {
    char name[STRMAX];
    int age;
    char job[STRMAX];
  } person[n - 1];
  for (size_t i = 0; i < n; i++) {
    printf("\nName: ");
    fgets(person[i].name, STRMAX, stdin);
    printf("Age: ");
    scanf("%i", &person[i].age);
    printf("Job: ");
    fgets(person[i].job, STRMAX, stdin);
  }
  for (size_t i = 0; i < n; i++) {
    printf("\n\nName: %s", person[i].name);
    printf("Age: %i", person[i].age);
    printf("\nJob: %s\n", person[i].job);
  }
  return 0;
}
