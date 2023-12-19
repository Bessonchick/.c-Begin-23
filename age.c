#include <locale.h>
#include <stdio.h>
int main() {
  int age;
  printf("Введите свой возраст ");
  scanf("%d", &age);
  if (age <= 12) {
    printf("Ты еще ребенок\n");
  } else if (age < 20) {
    printf("Хорошо быть подростком\n");
  } else if (age < 38) {
    printf("Вы всё еще молоды сердцем\n");
  } else if (age > 40) {
    printf("С годами приходит мудрость\n");
  }
  if (age == 39) {
    printf("Это я, и у меня всё получится!\a");
  }
  return 0;
}