// Draw the following pattern
// *****
// *****
// *****
// *****

// #include<stdio.h>

// void main() {
//     int num;
//     printf("Enter the number of rows: ");
//     scanf("%d",&num);
//     for (int row = 1; row <= num; row++)
//     {
//         for (int col = 1; col <= num; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 2.
// 1234
// 1234
// 1234
// 1234

// #include<stdio.h>

// void main() {
//     int num;
//     printf("Enter the number of rows: ");
//     scanf("%d",&num);
//     for (int row = 1; row <= num; row++)
//     {
//         for (int col = 1; col <= num; col++)
//         {
//             printf("%d",col);
//         }
//         printf("\n");
//     }
// }

// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1

// #include<stdio.h>

// void main() {
//     system("cls");
//     int num,row,col;
//     printf("Enter number of rows => ");
//     scanf("%d",&num);
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d ",col);
//         }
//         printf("\n");
//     }
//     for (row = num; row >= 1; row--)
//     {
//         for (col = 1; col < row; col++)
//         {
//             printf("%d ",col);
//         }
//         printf("\n");
//     }
// }

// 5
// 54
// 543
// 5432
// 54321
// 5432
// 543
// 54
// 5

// #include<stdio.h>

// void main() {
//     system("cls");
//     int num,row,col;
//     printf("Enter the number of rows: ");
//     scanf("%d",&num);
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d ",6-col);
//         }
//         printf("\n");
//     }
//     for (row = num; row >= 1; row--)
//     {
//         for (col = 1; col < row; col++)
//         {
//             printf("%d ",6-col);
//         }
//         printf("\n");
//     }
// }

// A
// AB
// ABC
// ABCD
// ABCDE
// ABCD
// ABC
// AB
// A

// #include<stdio.h>

// void main() {
//     system("cls");
//     int num,row,col;
//     printf("ENter number of rows: ");
//     scanf("%d",&num);
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             char ch = 'A';
//             printf("%c ", ch+col-1);
//         }
//         printf("\n");
//     }
//     for (row = num; row >= 1; row--)
//     {
//         for (col = 1; col < row; col++)
//         {
//             char ch = 'A';
//             printf("%c ", ch+col-1);
//         }
//         printf("\n");
//     }
// }