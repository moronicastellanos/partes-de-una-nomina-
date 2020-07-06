#include<stdio.h>

void menu();
int main(){
    system("color 80");
  
    
    menu();
    
    
    return 0;
    
}
void menu(){
    int opc,i=0,j,k;
    
    do{
        printf("\n1.-datos indentificativos de la empresa");
        printf("\n2.-datos basicos del trabajador");
        printf("\n3.-periodo de liquidacion");
        printf("\n4.-detallle de las perceepciones ");
        printf("\n5.-detalle de las deducciones");
        printf("\n6.-detalle de las bases de cotizacion");
        printf("\n7.-liquido a percibir");
        printf("\n8.-lugar de emision,firma y sello por la empresa y trabjador");
        
        printf("\n selecciona una opcion:  ");
        scanf("%d",&opc);
        
        switch(opc){
        	case 1: printf("\n1.-datos indentificativos de la empresa\n");
        		break;
        	case 2: printf("\n2.-datos basicos del trabajador\n"); 
		     break;
		case 3: printf("\n3.-periodo de liquidacio\n");  
		     break;
          case 4: printf("\n4.-detallle de las perceepciones \n"); 
               break;
		case 5: printf("\n5.-detalle de las deducciones\n");
		     break;
		case 6: printf("\n6.-detalle de las bases de cotizacion\n");  
		     break;
		case 7: printf("\n7.-liquido a percibir\n"); 
		     break;
		case 8: printf("\n8.-lugar de emision,firma y sello por la empresa y trabjador\n"); 
		     break;
		     
	}
		                   
           }while(opc<=8);

}
