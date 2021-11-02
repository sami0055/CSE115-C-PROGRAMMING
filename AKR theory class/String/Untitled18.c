int main()
{ char s[80],t[80];
int i,p,j;
printf("Enter a Sentence:");
gets(s);
printf("Which word? ");
gets(t);
p = -1;
for(i = 0; i < strlen(s); i++)
if(s[i] == t[0]){
for(j = 1; j < strlen(t); j++)
if(s[i+j] != t[j])
break;
if(j == strlen(t)){
p = i;
break;
}
}
if(p == -1) printf("Sorry not found");
else printf("Found at position: %d", p);
}
