#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *strtow - function that splits a string into words.
 * @str: pointer to string
 * Returns NULL if str == NULL or str == ""
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
int i = 0, wc = 0,j,cc = 0, cc1;
char **pw;
while (*str == '\0' || str == NULL)
return (NULL);
printf("string is :%s\n",str);

for (i = 0; str[i]; i++){   
if (str[i] == ' ')
continue;

wc++;
while (str[i] != ' ' && str[i]) 
i++;
i--;
}
printf("wc is %d\n",wc);

pw = (char **)malloc(wc * sizeof(char *));


for (i = 0; i < wc; i++){ 
cc1 = cc;
cc = 0;
for (j = 0; j < str[j]; j++){ 
if (str[j] == ' ')
continue;
m = j;
while (str[j] != ' ' && str[j]){
cc++;
j++;
}
pw[i] = (char *)malloc((cc + 1) * sizeof(char));
for (l = 0; l < cc; l++,m++)
pw[i][l]= str[m];
break;        
$  ALX   a =2 // l == 3 // x==4 // sp = 5*/
}


/* ALX\0 School\0         #cisfun\0      A\0
 */
 /* pw[0]---p[wc-1] , pw[wc] = NULL */
/* nbr words == nbr of pointers 
nbr de char for each word == size to alloc for pointer 
// $  ALX School         #cisfun  ww  a =2 // l == 3 // x==4 // sp = 5*/


return(pw);
}

/* int i, j, k = 0, l = 0, size;
char *p;
if (ac == 0 || *av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
j++;
k += j;
}
size = k + ac + 1;
p = (char *)malloc(size *sizeof(char));

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
p[l] = av[i][j];
l++;
}
p[l] = '\n';
l++;
}
p[l] = '\0';
return (p);
}




int escape_space(char *str,int n)
while(str[i]== ' ' && str[i])
i++;
return (i);

alloc_string(char **pw, char *str,int lenc)
int x=0, h=0;
while (str[i]){
h++;
if (str[i] ==' ')
pos = escape_space(str, i);
count=calc_len_char (*str,pos)
pw[h] = alloc count+1 bytes
for (m = 0; m <)
pw[h][]
}

int calc_len_char (*str,i) ALX  2 // 
while(str[i] != ' ' && str[i]){
cc++;
i++;}
return (cc);

 */