// #include <stdio.h>
// #include<string.h>
// int main() {

//     //1
//     int a, b, i;

//     printf("Enter start value (a): ");
//     scanf("%d", &a);
//     printf("Enter end value (b): ");
//     scanf("%d", &b);

//     printf("Numbers from %d to %d:\n", a, b);
//     for (i = a; i <= b; i++) {
//         printf("%d\n", i);
//     }
// //2
//     int y, sum = 0;

//     for (y = 1; y <= 20; y++) {
//         if (y % 2 != 0) {
//             continue; 
//         }
//         sum += y;
//     }

//     printf("Sum of even numbers between 1 and 20: %d\n", sum);


// //3


//     char correct_pin[] = "1234";
//     char pin[10];
//     int attempts = 3;

//     while (attempts > 0) {
//         printf("Enter your ATM PIN: ");
//         scanf("%s", pin);

//         if (strcmp(pin, correct_pin) == 0) {
//             printf("Access Granted \n");
//             break;
//         } else {
//             attempts--;
//             printf("Incorrect PIN. Attempts left: %d\n", attempts);
//         }
//     }

//     if (attempts == 0) {
//         printf("Card Blocked \n");
//     }

//     return 0;
// }

