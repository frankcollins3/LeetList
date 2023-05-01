// double average(int salary[], int salarySize){
double average(int* salary, int salarySize) {
//     for (int i = 0; i < sizeof(salary); i++) {
//         printf(" my salary:\t %d \n", salary[i]);
//         if (salary[i+1] == NULL || salary[i+1] == '\0') { break;}
//     }


    return 777;   
}


//  for (int i = 0; i < sizeof(salary) i++)             // in this code here sizeof(salary) is accessing the bytes when you could just limit loop by *** salarySize ***

// *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  proposed approach * *
  
// I was doing a C challenge and came across strcmp which does lexicographic sorting.
// it does so by returning an integer to indicate a number being greater or not than the int to which it is compared.

//   for (int k = 0; k < i - 1; k++) {
//     for (int l = k + 1; l < i; l++) {
//       if (strcasecmp(words[k].prefix, words[l].prefix) > 0) {
//         // Swap the words:
//         struct word temp = words[k];
//         words[k] = words[l];
//         words[l] = temp;
//       }
//     }
//   }
//   return 0;

// * Looking into any built in C functionality that returns an integer upon comparison to indicate a greater or less than number compared to another int.

// end of proposed approach #1 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 