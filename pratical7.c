// #include <stdio.h>

// int main() {
//     int n, i, j, space;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     int length = 2 * n - 1;  

//     for (i = 1; i <= n; i++) {
//         for (space = 1; space <= n - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (i = n - 1; i >= 1; i--) {

//         for (space = 1; space <= n - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");

//          return 0;
//     }



// #include <stdio.h>
// int main(){
//  int n, i, j, space;

//      printf("Enter n: ");
//     scanf("%d", &n);

//     int length = 2 * n - 1;  

//     for (i = n; i >= 1; i--) {
        
//         for (space = 0; space < n - i; space++) {
//             printf(" ");
//         }
//         for (j = 0; j < 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     for (i = 2; i <= n; i++) {
//         for (space = 0; space < n - i; space++) {
//             printf(" ");
//         }
        
//         for (j = 0; j < 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n, i, j;

//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         for (j = 0; j < i; j++) {
//             printf("%c", 'A' + j);  
//         }
//         printf("\n");
//     }

//     return 0;
// }