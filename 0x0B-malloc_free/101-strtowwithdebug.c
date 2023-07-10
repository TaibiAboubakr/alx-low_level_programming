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
int i = 0, l,m, wc = 0,j = 0,cc = 0;
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

pw = (char **)malloc((wc + 1) * sizeof(char *));

printf("after malloc is %d\n",wc);
for (i = 0; i < wc; i++){ 
cc = 0;
for (; str[j]; j++){   
if (str[j] == ' ')
continue;
m = j;
while (str[j] != ' ' && str[j]){ 
cc++;
j++;
if (j > 23){
printf("j=%d\n",j);
printf("str[%d]=|%c|\n",j,str[j]);
}
}

printf("j=%d , cc=%d,m=%d, l=%d\n",j,cc,m,l);

/* j--; */
pw[i] = (char *)malloc((cc + 1) * sizeof(char));
for (l = 0; l < cc; l++,m++)
pw[i][l]= str[m];
pw[i][l+1]='\0';
break;                     
}
}
pw[wc] = NULL;
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





 */

