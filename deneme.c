#include <stdio.h>
#include <string.h>
void main()
{
printf("KCS String Reverse 2021.1.0.0-^");
char ananinseyi[3072];
printf("\nEnter the text to be reversed: ");
scanf("%[^\n]", &ananinseyi);
int ananw = strlen(ananinseyi) - 1;
const int babanw = strlen(ananinseyi);
int nenenw = 0;
char dizigercek[babanw];
while (ananw>=0){
char tersdizi = ananinseyi[ananw];
dizigercek[nenenw] = tersdizi;
ananw--;
nenenw++;
}
dizigercek[babanw] = '\0';
printf("Reversed String: ");
printf("%s", dizigercek);
}
