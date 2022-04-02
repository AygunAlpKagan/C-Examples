/*Alp Kağan Aygün 170106109034*/
#include<stdio.h>

void convert (int sayi, int taban)
{
        int a = sayi%taban;

        if(sayi==0)
                return;
        convert(sayi/taban, taban);

        if(a < 10)
                printf("%d", a);
        else
                printf("%c", a-10+'A' );
}

int main()
{  
    int sec;  

do{
		
	int sayi;
        printf("Sayi Girin:  ");
        scanf("%d", &sayi);
	printf("Binary (2) : ");
        convert(sayi, 2);
        printf("\nOctal (8) : ");
        convert(sayi, 8);
        printf("\nHexadecimal (16) : ");
        convert(sayi, 16);
        printf("\n");
        printf("\n");

	dongu:
	printf("Devam edelim mi (e/E - h/H) ?:");
 	scanf("%s",&sec);
 	
	}while(sec=='e' || sec=='E');
	
	
	if(sec=='h' || sec=='H' ){
	    printf("Seans sona erdi....\n");
	}
	
	else 
	goto dongu;
	 
	system("pause");
    return 0;
}
