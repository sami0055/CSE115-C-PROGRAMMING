typedef struct patientinfo{

  char patientname[100];
  int  patientid;
  int cabinno;
  char diseasename[100];
  float currentbill;
}s;
int main(){

s a[100];
int i;
for(i=0;i<2;i++){

  printf("enter patient name:");
  fflush(stdin);
  gets(a[i].patientname);
  printf("enter patient id:");
  scanf("%d",&a[i].patientid);
  printf("enter cabin no:");
  scanf("%d",&a[i].cabinno);
   printf("enter patient desease:");
   fflush(stdin);
   gets(a[i].diseasename);
   printf("enter current bill");
   scanf("%f",&a[i].currentbill);
}
 FILE *file;
 file=fopen("input.txt","w");
 for(i=0;i<2;i++){
    if(a[i].cabinno>='100' && a[i].cabinno<='199'){
        fprintf(file,"patient id is %d",a[i].patientid);
        fprintf(file,"patient name is %s",a[i].patientname);
    }
 }
 fclose(file);

    char name[100];
    printf("which desease name you want to find");
    fflush(stdin);
    gets(name);
   patientfinders(a,name);

}
void patientfinders(s a[],char name[]){
int i;
for(i=0;i<2;i++){
    if(strcmp(a[i].diseasename,name)==0){
        printf("id is %d",a[i].patientid);
    }
}
}
