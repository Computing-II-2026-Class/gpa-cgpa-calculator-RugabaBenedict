/*
Name: RUGABA BENDICT
Registration Number: 25/U/BIE/01417/PE
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int S11, S12, S13, S14, S15, S16, S17, S18, S21, S22, S23, S24, S25, S26, S27, S28;

    printf("TEMB 1101 ");
    scanf("%d", &S11);
    
    printf("TEMB 1102 ");
    scanf("%d", &S12);

    printf("TEMB 1103 ");
    scanf("%d", &S13);

    printf("TEMB 1104 ");
    scanf("%d", &S14);

    printf("TEMB 1105 ");
    scanf("%d", &S15);

    printf("TEMB 1106: ");
    scanf("%d", &S16);

    printf("TEMB 1107 ");
    scanf("%d", &S17);

    printf("TEMB 1108 ");
    scanf("%d", &S18);


    printf("TEMB 1201 ");
    scanf("%d", &S21);

    printf("TEMB 1202 ");
    scanf("%d", &S22);

    printf("TEMB 1203 ");
    scanf("%d", &S23);
    
    printf("TEMB 1204 ");
    scanf("%d", &S24);

    printf("TEMB 1205 ");
    scanf("%d", &S25);

    printf("TEMB 1206 ");
    scanf("%d", &S26);

    printf("TEMB 1207 ");
    scanf("%d", &S27);

    printf("TEMB 1208 ");
    scanf("%d", &S28);

    //termination
    int marks[16] = {S11, S12, S13, S14, S15, S16, S17, S18,S21, S22, S23, S24, S25, S26, S27, S28};
    for(int i = 0; i<(sizeof(marks)/sizeof(marks[0]));i++){
        if(marks[i] < 0 || marks[i] > 100){
            printf(" Invalid score entered");
            exit(1);
        }
    }

     
    printf("\n");

    //CREDITS
    float C11=4,C12=3,C13=3,C14=3,C15=3,C16=3,C17=2,C18=3;
    float C21=4,C22=3,C23=3,C24=3,C25=3,C26=3,C27=3,C28=3;

    
    
    //GRADE AND GRADE POINT
    printf("------GRADE AND GRADE POINT SEMESTER ONE------\n");
    

    if (S11 >= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S11>=70) {printf("TEMB 1101 : Grade B, Grade point 4\n");
    } else if (S11>=60) {printf("TEMB 1101: Grade C, Grade point 3\n");
    } else if (S11>=50) {printf(" TEMB 1101: Grade D, Grade point 2\n");
    } else {printf("TEMB 1101: Grade F, Grade point 0\n");}

    if (S12 >= 80) {printf("TEMB 1102: Grade A, Grade point 5\n");
    } else if (S12>=70) {printf("TEMB 1102 : Grade B, Grade point 4\n");
    } else if (S12>=60) {printf("TEMB 1102: Grade C, Grade point 3\n");
    } else if (S12>=50) {printf(" TEMB 1102: Grade D, Grade point 2\n");
    } else {printf("TEMB 1102: Grade F, Grade point 0\n");}

    if (S13 >= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S13>=70) {printf("TEMB 1103 : Grade B, Grade point 4\n");
    } else if (S13>=60) {printf("TEMB 1103: Grade C, Grade point 3\n");
    } else if (S13>=50) {printf(" TEMB 1103: Grade D, Grade point 2\n");
    } else {printf("TEMB 1103: Grade F, Grade point 0\n");}

    if (S14 >= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S14>=70) {printf("TEMB 1104 : Grade B, Grade point 4\n");
    } else if (S14>=60) {printf("TEMB 1104: Grade C, Grade point 3\n");
    } else if (S14>=50) {printf(" TEMB 1104: Grade D, Grade point 2\n");
    } else {printf("TEMB 1104: Grade F, Grade point 0\n");}

    if (S15 >= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S15>=70) {printf("TEMB 1105 : Grade B, Grade point 4\n");
    } else if (S15>=60) {printf("TEMB 1105: Grade C, Grade point 3\n");
    } else if (S15>=50) {printf(" TEMB 1105: Grade D, Grade point 2\n");
    } else {printf("TEMB 1105: Grade F, Grade point 0\n");}

    if (S16 >= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S16>=70) {printf("TEMB 1106 : Grade B, Grade point 4\n");
    } else if (S16>=60) {printf("TEMB 1106: Grade C, Grade point 3\n");
    } else if (S16>=50) {printf(" TEMB 1106: Grade D, Grade point 2\n");
    } else {printf("TEMB 1106: Grade F, Grade point 0\n");}

    if (S17 >= 80) {printf("TEMB 1107: Grade A, Grade point 5\n");
    } else if (S17>=70) {printf("TEMB 1107 : Grade B, Grade point 4\n");
    } else if (S17>=60) {printf("TEMB 1107: Grade C, Grade point 3\n");
    } else if (S17>=50) {printf(" TEMB 1107: Grade D, Grade point 2\n");
    } else {printf("TEMB 1107: Grade F, Grade point 0\n");}

    if (S18>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S18>=70) {printf("TEMB 1108 : Grade B, Grade point 4\n");
    } else if (S18>=60) {printf("TEMB 1108: Grade C, Grade point 3\n");
    } else if (S18>=50) {printf(" TEMB 1108: Grade D, Grade point 2\n");
    } else {printf("TEMB 1108: Grade F, Grade point 0\n");}

    //GRADE SEM2
    printf("---------GRADE AND GRADE POINT SEMESTER TWO---------\n");

     if (S21>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S21>=70) {printf("TEMB 1201 : Grade B, Grade point 4\n");
    } else if (S21>=60) {printf("TEMB 1201: Grade C, Grade point 3\n");
    } else if (S21>=50) {printf(" TEMB 1201: Grade D, Grade point 2\n");
    } else {printf("TEMB 1201: Grade F, Grade point 0\n");}

     if (S22>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S22>=70) {printf("TEMB 1202 : Grade B, Grade point 4\n");
    } else if (S22>=60) {printf("TEMB 1202: Grade C, Grade point 3\n");
    } else if (S22>=50) {printf(" TEMB 1202: Grade D, Grade point 2\n");
    } else {printf("TEMB 1202: Grade F, Grade point 0\n");}

     if (S23>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S23>=70) {printf("TEMB 1203 : Grade B, Grade point 4\n");
    } else if (S23>=60) {printf("TEMB 1203: Grade C, Grade point 3\n");
    } else if (S23>=50) {printf(" TEMB 1203: Grade D, Grade point 2\n");
    } else {printf("TEMB 1203: Grade F, Grade point 0\n");}

     if (S24>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S24>=70) {printf("TEMB 1204 : Grade B, Grade point 4\n");
    } else if (S24>=60) {printf("TEMB 1204: Grade C, Grade point 3\n");
    } else if (S24>=50) {printf(" TEMB 1204: Grade D, Grade point 2\n");
    } else {printf("TEMB 1204: Grade F, Grade point 0\n");}

     if (S25>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S25>=70) {printf("TEMB 1205 : Grade B, Grade point 4\n");
    } else if (S25>=60) {printf("TEMB 1205: Grade C, Grade point 3\n");
    } else if (S25>=50) {printf(" TEMB 1205: Grade D, Grade point 2\n");
    } else {printf("TEMB 1205: Grade F, Grade point 0\n");}

     if (S26>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S26>=70) {printf("TEMB 1206 : Grade B, Grade point 4\n");
    } else if (S26>=60) {printf("TEMB 1206: Grade C, Grade point 3\n");
    } else if (S26>=50) {printf(" TEMB 1206: Grade D, Grade point 2\n");
    } else {printf("TEMB 1206: Grade F, Grade point 0\n");}

     if (S27>=80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S27>=70) {printf("TEMB 1207 : Grade B, Grade point 4\n");
    } else if (S27>=60) {printf("TEMB 1207: Grade C, Grade point 3\n");
    } else if (S27>=50) {printf(" TEMB 1207: Grade D, Grade point 2\n");
    } else {printf("TEMB 1207: Grade F, Grade point 0\n");}

     if (S28>= 80) {printf("TEMB 1101: Grade A, Grade point 5\n");
    } else if (S28>=70) {printf("TEMB 1208 : Grade B, Grade point 4\n");
    } else if (S28>=60) {printf("TEMB 1208: Grade C, Grade point 3\n");
    } else if (S28>=50) {printf(" TEMB 1208: Grade D, Grade point 2\n");
    } else {printf("TEMB 1208: Grade F, Grade point 0\n");}

    //CALCULATING GPA SEM1
    float gpa1, weight;
    float G11 = 5.0, G12 = 4.0, G13 = 3.0, G14 = 2.0, G15 = 0.0;
    float credit, W1,W2,W3,W4,W5,W6,W7,W8;
    if (S11>=80){(W1 = C11*G11);
    }else if(S11>=70){(W1 = C11*G12);
    }else if (S11>=60){(W1 = C11*G13);
    }else if (S11>=50){(W1 = C11*G14);
    }else {(W1 = C11*G15);}

     if (S12>=80){(W2 = C12*G11);
    }else if(S12>=70){(W2 = C12*G12);
    }else if (S12>=60){(W2 = C12*G13);
    }else if (S12>=50){(W2 = C12*G14);
    }else {(W2 = C12*G15);}

     if (S13>=80){(W3 = C13*G11);
    }else if(S13>=70){(W3 = C13*G12);
    }else if (S13>=60){(W3 = C13*G13);
    }else if (S13>=50){(W3 = C13*G14);
    }else {(W3 = C13*G15);}

     if (S14>=80){(W4 = C14*G11);
    }else if(S14>=70){(W4 = C14*G12);
    }else if (S14>=60){(W4 = C14*G13);
    }else if (S14>=50){(W4 = C14*G14);
    }else {(W4 = C14*G15);}

     if (S15>=80){(W5 = C15*G11);
    }else if(S15>=70){(W5 = C15*G12);
    }else if (S15>=60){(W5 = C15*G13);
    }else if (S15>=50){(W5= C15*G14);
    }else {(W5 = C15*G15);}

     if (S16>=80){(W6 = C16*G11);
    }else if(S16>=70){(W6 = C16*G12);
    }else if (S16>=60){(W6 = C16*G13);
    }else if (S16>=50){(W6 = C16*G14);
    }else {(W6 = C16*G15);}

     if (S17>=80){(W7 = C17*G11);
    }else if(S17>=70){(W7 = C17*G12);
    }else if (S17>=60){(W7 = C17*G13);
    }else if (S17>=50){(W7 = C17*G14);
    }else {(W7 = C17*G15);}

     if (S18>=80){(W8 = C18*G11);
    }else if(S18>=70){(W8 = C18*G12);
    }else if (S18>=60){(W8 = C18*G13);
    }else if (S18>=50){(W8 = C18*G14);
    }else {(W1 = C11*G15);}
    
    
    credit = C11+C12+C13+C14+C15+C16+C17+C18;
    weight = W1+W2+W3+W4+W5+W6+W7+W8;
    gpa1 = weight/credit;
    
    printf("\n");
    printf("GPA SEMESTER I IS %.2f", gpa1);
    printf("\n");
    //GPA SEM2
    float gpa2, Credit;
    Credit = C21+C22+C23+C24+C25+C26+C27+C28;

     if (S21>=80){(W1 = C21*G11);
    }else if(S21>=70){(W1 = C21*G12);
    }else if (S21>=60){(W1 = C21*G13);
    }else if (S21>=50){(W1 = C21*G14);
    }else {(W1 = C21*G15);}

     if (S22>=80){(W1 = C22*G11);
    }else if(S22>=70){(W1 = C22*G12);
    }else if (S22>=60){(W1 = C22*G13);
    }else if (S22>=50){(W1 = C12*G14);
    }else {(W2 = C22*G15);}

     if (S23>=80){(W3= C23*G11);
    }else if(S23>=70){(W3 = C23*G12);
    }else if (S23>=60){(W3 = C23*G13);
    }else if (S23>=50){(W3 = C23*G14);
    }else {(W3= C23*G15);}

     if (S24>=80){(W8 = C24*G11);
    }else if(S24>=70){(W8 = C24*G12);
    }else if (S24>=60){(W8 = C24*G13);
    }else if (S24>=50){(W8 = C24*G14);
    }else {(W4 = C24*G15);}

     if (S25>=80){(W5 = C25*G11);
    }else if(S25>=70){(W5 = C25*G12);
    }else if (S25>=60){(W5 = C25*G13);
    }else if (S25>=50){(W5 = C25*G14);
    }else {(W5 = C25*G15);}

     if (S26>=80){(W6 = C26*G11);
    }else if(S26>=70){(W6 = C26*G12);
    }else if (S26>=60){(W6= C26*G13);
    }else if (S26>=50){(W6 = C26*G14);
    }else {(W6 = C26*G15);}

     if (S27>=80){(W7 = C27*G11);
    }else if(S27>=70){(W7 = C27*G12);
    }else if (S27>=60){(W7 = C27*G13);
    }else if (S27>=50){(W7 = C27*G14);
    }else {(W7 = C27*G15);}

     if (S28>=80){(W8 = C28*G11);
    }else if(S28>=70){(W8 = C28*G12);
    }else if (S28>=60){(W8 = C28*G13);
    }else if (S28>=50){(W8 = C28*G14);
    }else {(W8 = C28*G15);}

    gpa2 =weight/Credit;
    printf("GPA SEMESTER II IS %.2f", gpa2);

    printf("\n");
    float cgpa;
    cgpa = (gpa1+gpa2)/2;
    printf("YOUR CGPA IS %.2f", cgpa);
     //classification
     if (cgpa>4.40){printf("CLASSIFICATION: FIRST CLASS\n");
    }else if (cgpa>3.60){printf("CLASSIFICATION: SECOND CLASS UPPER\n");
    }else if (cgpa>2.80){printf("CLASSIFICATION: SECOND CLASS LOWER\n");
    }else if (cgpa>2.00){printf("CLASSIFICATION: PASS\n");
    }else {printf("CLASSIFICATION: FAIL\n");}

    //REPORT
    
   
    
    printf("Semester I GPA: %.2f\n", gpa1);
    printf("Semester II GPA: %.2f\n", gpa2);
    printf("CGPA: %.2f\n", cgpa);
     if (cgpa>4.40){printf("CLASSIFICATION: FIRST CLASS\n");
    }else if (cgpa>3.60){printf("CLASSIFICATION: SECOND CLASS UPPER\n");
    }else if (cgpa>2.80){printf("CLASSIFICATION: SECOND CLASS LOWER\n");
    }else if (cgpa>2.00){printf("CLASSIFICATION: PASS\n");
    }else {printf("CLASSIFICATION: FAIL\n");}
    

    

    return 0;
}
