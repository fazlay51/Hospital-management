#include<stdio.h>
#include<curses.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int ok;
int i,flag=0;
int x,y;
FILE*ek;

//all functions dicleration.
void m_m(void);
void add_new_p();
void remove_old_p();
void search_p();
void p_list(void);
void xyz();
void ex_it();

void wellcome_screen(){


    //system("clear");



    printf("\n");
    printf("\t\t\t\t\t\t\t###############################\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t#                             #\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t#   Welcome to ULAB Hospital  #\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t#      Management System      #\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t#                             #\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t#                             #\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t###############################\t\t\t\t\t\t\t\t\n");
    getchar_unlocked();
    system("clear");

}

void title_screen(){

    printf("\n");
    printf("\t\t\t\t\t\t\t     =----------------------=  \t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t     Ulab University Hospital  \t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t     =----------------------=  \t\t\t\t\t\t\t\n\n\n");
    printf("\t\t\t\t\t\t ==>Please Enter Your User Name & Passwprd<==  \t\t\t\t\t\t\t\n");

}
void title_screen2(){

    printf("\n");
    printf("\t\t\t\t\t\t\t     =----------------------=  \t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t     Ulab University Hospital  \t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t     =----------------------=  \t\t\t\t\t\t\t\n\n");
    //printf("\t\t\t\t\t\t ==>Please Enter Your User Name & Passwprd<==  \t\t\t\t\t\t\t\n");

}
void login(){
    printf("\t\t\t\t\t\t\t\t login successful\n\n");
}
void login2(){
    printf("\t\t\t\t\t\t\t\t login successful\n\n");
}
void xyz(){
    printf("\t\t\t\t\t\t       ...!..Patient [SEARCH] System..!...\n");
}

void login_screen(){

    int x=0;
    char user_name[20];
    char password[20];
    char saved_user_name[20]="1";
    char saved_password[20]="1";

    do{
        //printf("\t\t\t\t\t\t    Please Enter Your User Name And Password\n");
        printf("\t\t\t\t\t\t\t\t User Name:");
        scanf("%s",user_name);
        printf("\t\t\t\t\t\t\t\t Password:");
        scanf("%s",password);
        

        if(strcmp(user_name,saved_user_name)==0 && strcmp(password,saved_password)==0){

            system("clear");

            title_screen2();

            login();

            m_m();
            break;
        }
        else{
            printf("\n\t\t\t\t\t\t      !!..Wrong user name or password..!!\n");
            printf("\t\t\t\t\t\t\t    ==> please try again <==\n");
            x++;
        }
    }
    while(x<=2);
    system("clear");

        if(x>=2){
            printf("\n\n\n\n\n\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\t\t\t\t\t\t\t ...!!..You Have Crossed Your Attempt Limit..!!...\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n\n\n\n\n\n");
            getchar_unlocked();
            //e_xit();
        }
    //system("clear");

}
 void m_m(){

//    system("clear");
//    printf("see");



    printf("\nPress 1 for Add new patient.");
    printf("\nPress 2 for Remove old patient.");
    printf("\nPress 3 for Search patient.");
    printf("\nPress 4 for Patient list.");
    printf("\nPress 5 for Exit.\n");
    printf("\nChose what you want: ");

    int a;
    scanf("%d",&a);
    getchar_unlocked();
    system("clear");

    switch(a){
    case 1:
    add_new_p();
    break;

    case 2:
    remove_old_p();
    break;

    case 3:
    search_p();
    break;

    case 4:
    p_list();
    break;

    case 5:
    ex_it();
    break;

    defult:
    printf("Wrong Selection.");
    }


}

struct patient{


    char first_name[15];
    char last_name[15];
    char gender[1];
    int age;
    char mobile_no[15];
    char address[50];
    char email[30];
    char d_first_name[15];
    char d_middle_name[15];
    char d_last_name[15];
    char problem[30];
}p,temp_c;

int main()
{

    wellcome_screen();
    title_screen();
    login_screen();
    //main_menu();
}
void add_new_p(){
    system("clear");
    title_screen2();

    FILE*ek;
    ek=fopen("record2.dat","a");
    printf("Please Add Your Patient:\n");

    A:
    printf("First Name: ");
    scanf("%s",p.first_name);
    p.first_name[0]=toupper(p.first_name[0]);
    if(strlen(p.first_name)>15 || strlen(p.first_name)<2){
        printf("Your Name Should Be Greater Then 2 Char And Less Then 15.\n");
        goto A;
    }
    else{
        for(int i=0;i<strlen(p.first_name);i++){
            if(isalpha(p.first_name[i])){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(!flag){
            printf("No Numaric value allowed\n");
            goto A;
        }
    }
    B:
    printf("Last Name: ");
    scanf("%s",p.last_name);
    p.last_name[0]=toupper(p.last_name[0]);
    if(strlen(p.last_name)>15 || strlen(p.last_name)<2){
        printf("Your Name Should Be Greater Then 2 Char And Less Then 15.\n");
        goto B;
    }
    else{
        for(int i=0;i<strlen(p.last_name);i++){
            if(isalpha(p.last_name[i])){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(!flag){
            printf("No Numaric value allowed\n");
            goto B;
        }
    }

    C:
    printf("Gender[F/M]: ");
    scanf("%s",p.gender);
    if(toupper(p.gender[i])=='M' || toupper(p.gender[i])=='F'){
        ok=1;
    }
    else{
        ok=0;
    }
    if(!ok){
        printf("\nPlease enter either F or M\n");
        goto C;
    }

    printf("age: ");
    scanf("%d",&p.age);

    do{
        D:
        printf("Address: ");
        scanf("%s",p.address);
        p.address[0]=toupper(p.address[0]);
        if(strlen(p.address)>30||strlen(p.address)<4){
        printf("Invalid Address..!!\n");
        goto D;
        }
    }while(!flag);

    do{
        E:
        printf("Give Mobile Number: ");
        scanf("%s",p.mobile_no);
        if(strlen(p.mobile_no)<9||strlen(p.mobile_no)>15){
            printf("invalid Mobile Number\n");
            goto E;
        }
    }while(!flag);

        do{
        F:
        printf("Give Email Address: ");
        scanf("%s",p.email);
        if(strlen(p.email)<5||strlen(p.email)>30){
            printf("Invalid Email");
            goto F;
        }
    }while(!flag);

    DA:
    printf("Doctor's First Name: ");
    scanf("%s",p.d_first_name);
    p.d_first_name[0]=toupper(p.d_first_name[0]);
    if(strlen(p.d_first_name)>15 || strlen(p.d_first_name)<2){
        printf("Your Name Should Be Greater Then 2 Char And Less Then 15.\n");
        goto DA;
    }
    else{
        for(int i=0;i<strlen(p.d_first_name);i++){
            if(isalpha(p.d_first_name[i])){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(!flag){
            printf("No Numaric value allowed\n");
            goto DA;
        }
    }
    DC:
    printf("Doctor's Last Name: ");
    scanf("%s",p.d_last_name);
    p.d_last_name[0]=toupper(p.d_last_name[0]);
    if(strlen(p.d_last_name)>15 || strlen(p.d_last_name)<2){
        printf("Your Name Should Be Greater Then 2 Char And Less Then 15.\n");
        goto DC;
    }
    else{
        for(int i=0;i<strlen(p.d_last_name);i++){
            if(isalpha(p.d_last_name[i])){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(!flag){
            printf("No Numaric value allowed\n");
            goto DC;
        }
    }


        do{
        H:
        printf("Disease Type: ");
        scanf("%s",p.problem);
        if(strlen(p.problem)<4||strlen(p.problem)>30){
            printf("Be More Detailed..!!\n");
            goto H;
        }
    }while(!flag);

    fprintf(ek," %s %s %s %d %s %s %s %s %s %s",  p.first_name, p.last_name, p.gender, p.age, p.mobile_no, p.address, p.email, p.d_first_name,p.d_last_name, p.problem);
    printf("\n\n\n\n\n\n\n");
    system("clear");
    printf("\t\t\t\t\t\t\t\t\t...!..Paitent Added..!...\n");
    fclose(ek);
    xd:
    getchar_unlocked();
    printf("\nWanna  add more [Y/N]?");
    char hy;
    scanf("%c",&hy);
    if(toupper(hy)=='Y'){
        add_new_p();
    }
    else if(toupper(hy)=='N'){
        system("clear");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t ...!!..Thank You..!!...\n");
        getchar_unlocked();
        getchar_unlocked();
        m_m();
    }
    else{
        printf("invalid choice");
        goto xd;
    }
}
void p_list(){// when 4

    //printf("jfh");
    // title_screen2();
    FILE*ek;
    ek=fopen("record2.dat","r");

            system("clear");
            x=4,y=17;
            printf("\033[%d;%dHFull name\n",x,y);
            x=4,y=37;
            printf("\033[%d;%dH Gender\n",x,y);
            x=4,y=57;
            printf("\033[%d;%dH Age\n",x,y);
            x=4,y=77;
            printf("\033[%d;%dH Mobile\n",x,y);
            x=4,y=97;
            printf("\033[%d;%dH Address\n",x,y);
            x=4,y=117;
            printf("\033[%d;%dH Email\n",x,y);
            x=4,y=137;
            printf("\033[%d;%dH Doctor\n",x,y);
            x=4,y=157;
            printf("\033[%d;%dH Problem\n",x,y);

    printf("          ====================================================================================================================================================================\n");
    int r=7;
    while(fscanf(ek,"%s %s %s %d %s %s %s %s %s %s \n", p.first_name, p.last_name, p.gender, &p.age, p.mobile_no, p.address, p.email, p.d_first_name,p.d_last_name, p.problem)!=EOF)
    {
    
            y=12;
            printf("\033[%d;%dH %s %s",r,y,p.first_name,p.last_name);
            y=40;
            printf("\033[%d;%dH %s",r,y,p.gender);
            y=57;
            printf("\033[%d;%dH %d",r,y,p.age);
            y=74;
            printf("\033[%d;%dH %s",r,y,p.mobile_no);
            y=98;
            printf("\033[%d;%dH %s",r,y,p.address);
            y=112;
            printf("\033[%d;%dH %s",r,y,p.email);
            y=137;
            printf("\033[%d;%dH %s %s",r,y,p.d_first_name,p.d_last_name);
            y=157;
            printf("\033[%d;%dH %s",r,y,p.problem);
            r++;
    }
    printf("\n");
    fclose(ek);
    getchar_unlocked();
    system("clear");
    m_m();
}
void search_p()
{
    int flag=0;
    int r=18;
    char phone[15];
    //system("clear");
    title_screen2();
    xyz();
    FILE*ek;
    ek=fopen("record2.dat","r");

    printf("\n\nGive Phone Number:");
    fflush(stdin);
    scanf("%s",phone);
    // name[0]=toupper(name[0]);
       system("clear");
            x=15,y=20;
            printf("\033[%d;%dHFull name\n",x,y);
            x=15,y=40;
            printf("\033[%d;%dH Gender\n",x,y);
            x=15,y=60;
            printf("\033[%d;%dH Age\n",x,y);
            x=15,y=80;
            printf("\033[%d;%dH Mobile\n",x,y);
            x=15,y=100;
            printf("\033[%d;%dH Address\n",x,y);
            x=15,y=120;
            printf("\033[%d;%dH Email\n",x,y);
            x=15,y=140;
            printf("\033[%d;%dH Doctor\n",x,y);
            x=15,y=160;
            printf("\033[%d;%dH Problem\n",x,y);

    printf("          ====================================================================================================================================================================\n");
    
    while(fscanf(ek,"%s %s %s %d %s %s %s %s %s %s \n", p.first_name, p.last_name, p.gender, &p.age, p.mobile_no, p.address, p.email, p.d_first_name,p.d_last_name, p.problem)!=EOF)
    
    {
        if(strcmp(p.mobile_no,phone)==0)
        {

            flag=1;
            // printf("record found");

    
            y=16;
            printf("\033[%d;%dH %s %s",r,y,p.first_name,p.last_name);
            y=43;
            printf("\033[%d;%dH %s",r,y,p.gender);
            y=61;
            printf("\033[%d;%dH %d",r,y,p.age);
            y=76;
            printf("\033[%d;%dH %s",r,y,p.mobile_no);
            y=99;
            printf("\033[%d;%dH %s",r,y,p.address);
            y=116;
            printf("\033[%d;%dH %s",r,y,p.email);
            y=140;
            printf("\033[%d;%dH %s %s",r,y,p.d_first_name,p.d_last_name);
            y=160;
            printf("\033[%d;%dH %s",r,y,p.problem);
            r++;
        }
    }
    if(flag==0){
        system("clear");
        printf("\t\t\t\t\t\t\t\t ...!!..Not Listed..!!...\n");
    }
    // printf("\n\n\n\n\n");
    xd:
    getchar_unlocked();
    printf("\n\n\n\n\nDo You want to Search more [Y/N]?");
    char hy;
    scanf("%c",&hy);
    if(toupper(hy)=='Y'){
    search_p();
    }
    else if(toupper(hy)=='N'){
        printf("thanks");
        getchar_unlocked();
        m_m();
    }
    else{
        printf("invalid choice");
        goto xd;
    }

}
void remove_old_p(){//when press 2
    int found=0;
    char phone[15];
    system("clear");
    title_screen2();
    FILE *ek, *ft;
    ft=fopen("temp_file2.dat","w+");
    ek=fopen("record2.dat","r");
    printf("\t\t\t\t\t\t\t\t ...!!..Delete Patient Record..!!...\n");
    printf("Enter Patient Phone Number:");
    fflush(stdin);
    scanf("%s",phone);
    while(fscanf(ek,"%s %s %s %d %s %s %s %s %s %s \n", p.first_name, p.last_name, p.gender, &p.age, p.mobile_no, p.address, p.email, p.d_first_name,p.d_last_name, p.problem)!=EOF)
    {
        if(strcmp(p.mobile_no,phone)!=0)
        {

            fprintf(ft,"%s %s %s %d %s %s %s %s %s %s \n", p.first_name, p.last_name, p.gender, p.age, p.mobile_no, p.address, p.email, p.d_first_name,p.d_last_name, p.problem);

        }
        else
        {
            printf("%s %s %s %d %s %s %s %s %s %s \n", p.first_name, p.last_name, p.gender, p.age, p.mobile_no, p.address, p.email, p.d_first_name,p.d_last_name, p.problem);
            found=1;
        }
    }
    if(found==0){
            printf("result not found");
            getchar_unlocked();
            m_m();
        }
    else{//found==1
        fclose(ft);
        fclose(ek);
        remove("record2.dat");
        rename("temp_file2.dat","record2.dat");
        printf("patient deleted\n");
        getchar_unlocked();
        m_m();
    }
}
void ex_it(){

    system("clear");

}