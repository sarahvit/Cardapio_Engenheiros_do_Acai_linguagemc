#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>


void titulo(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
        SetConsoleTitle("Projeto final Evandro");
        printf("\n");
        printf("============================================LANCHONETE=ENGENHEIROS=DO=AÇAÍ==============================================\n\n");

}
void cardapio(){
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);
        printf("\t\t\t\t\t\t***CARDÁPIO***\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 249);
        printf("\t\t\t\t\t    Código--Lanche--Preço\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
        printf("\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\t||1-Somos o que há de melhor X-tudo -R$10.00                    ||\n");
        printf("\t\t\t||2-Pra ser sincero Açaí 500ml-R$12.00                          ||\n");
        printf("\t\t\t||3-Terra de gigantes Acaí 1L -R$15.00                          ||\n");
        printf("\t\t\t||4-Depois de nós Hamburguer vegetariano -R$6.00                ||\n");
        printf("\t\t\t||5-Muito prazer, meu nome é otário X-salada -R$7.50            ||\n");
        printf("\t\t\t||6-Ah...vida real! Salada com tomates e alfaces frescos -R$5.00||\n");
        printf("\t\t\t||7-O papa é pop - Marmitex -R$20.00                            ||\n");
        printf("\t\t\t||8-Sorriso frito -batata de carinha -R$15.00                   ||\n");
         printf("\t\t\t------------------------------------------------------------------\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 159);
        printf("\n===================================================BEBIDAS==============================================================\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
        printf("\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\t||9-Refri -R$3.00                                               ||\n");
        printf("\t\t\t||10-Aguinha -R$2.00                                            ||\n");
        printf("\t\t\t||11-Eu que não bebo pedi um conhaque -conhaque né-R$10.50      ||\n");
        printf("\t\t\t||12-Eu que não amo você -bebida potente-R$15.00                ||\n");
        printf("\t\t\t------------------------------------------------------------------\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);
        printf("========================================================================================================================\n");





}

    int main(){
    char comida[13][30]={"nada","X-tudo(s)","Açaí(s) 500ml","Açaí(s) 1L","Hamburguer(es) veg","X-salada(s)","Salada(s)","Marmitex","Batata(s) de carinha","Refri(s)","Aguinha","Conhaque","Bebida(s) potente(s)"};
    int opcao, esc, quant;
    float falta=0, valorp, valortotal, xtudo=10.00, acai500=12.00, acai1L=15.00, hambveg=6.00, xsalada=7.50, salada=5.00, marmitex=20.00, batata=15.00, refri=2.00,aguinha=2.00, conhaque=10.50, bebidapot=15.00;

    setlocale(LC_ALL, "Portuguese");
    system("color f0");

	titulo();
    cardapio();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
    printf("\nDeseja adicionar algo ao cardapio?\t\n\n1-SIM 2-NAO: ");
	scanf("%d",&esc);

	while(esc==1)
	{
		system("cls");
	    titulo();
	    cardapio();

		printf("\nSelecione a opção que deseja: ");
	    scanf("%d",&opcao);
	    system("cls");
        titulo();
	    cardapio();

	    printf("\n\nSelecione a quantidade de %s que deseja: ",comida[opcao]);
	    scanf("%d",&quant);
	    system("cls");



    switch(opcao)
	    {
	    	case 1:
	    		{   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
					printf("\t\tVocê escolheu Somos o que há de melhor X-tudo!!!");
                    printf("\n\n\t\tVoce adicionou %d X-tudo(s)\n",quant);
	    			valortotal+=xtudo*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
                    do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                            system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                            system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
	    			break;

				}
			case 2:
				{   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu Pra ser sincero Açaí 500ml!!!");
                    printf("\n\n\t\tVoce adicionou %d açaí(s)\n",quant);
	    			valortotal+=acai500*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
			        break;
				}
			case 3:
				{   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu Terra de gigantes Acaí 1L!!!");
                    printf("\n\n\t\tVocê adicionou %d açaí(s)\n",quant);
	    			valortotal+=acai1L*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
			        break;

				}
			case 4:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
			        printf("\t\tVocê escolheu Depois de nós Hamburguer vegetariano!!!");
                    printf("\n\n\t\tVocê adicionou %d hamburguer(es) vegetariano(s)\n",quant);
	    			valortotal+=hambveg*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");

                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);
                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
					break;
				}
			case 5:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                     printf("\t\tVocê escolheu Muito prazer, meu nome é otário X-salada!!!");
                    printf("\n\n\t\tVocê adicionou %d x-salada(s)\n",quant);
	    			valortotal+=xsalada*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
			    }
			case 6:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu Ah...vida real! Salada com tomates e alfaces frescos!!!");
                    printf("\n\n\t\tVocê adicionou %d salada(s)\n",quant);
	    			valortotal+=salada*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
			    }
			case 7:
                {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu O papa é pop - Marmitex!!!");
                    printf("\n\n\t\tVocê adicionou %d marmitex\n",quant);
	    			valortotal+=marmitex*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
			    }
			case 8:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu Sorriso frito -batata de carinha !!!");
                    printf("\n\n\t\tVocê adicionou %d batata(s)\n",quant);
	    			valortotal+=batata*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
			    }
            case 9:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu Refri !!!");
                    printf("\n\n\t\tVocê adicionou %d refri(s)\n",quant);
	    			valortotal+=refri*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
		        }
		     case 10:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu aguinha !!!");
                    printf("\n\n\t\tVocê adicionou %d aguinha(s)\n",quant);
	    			valortotal+=aguinha*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
		        }
		      case 11:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu Eu que não bebo pedi um conhaque!!!");
                    printf("\n\n\t\tVocê adicionou %d conhaque(s)\n",quant);
	    			valortotal+=conhaque*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                                system("cls");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);

                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
		        }
		      case 12:
			    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 245);
                    printf("\t\tVocê escolheu Eu que não amo você -bebida potente-!!!");
                    printf("\n\n\t\tVocê adicionou %d bebida(s) potente(s)\n",quant);
	    			valortotal+=bebidapot*quant;
	    			printf("\nTotal a pagar: %.2f",valortotal);
	    			do{
                    printf("\n\nDigite o valor a ser pago:");
	    			scanf("%f", &valorp);
	    			 falta=valortotal-valorp;
                        if(valorp<valortotal){
                            system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 252);
                            printf("\n\nFaltam R$%2.f a serem pagos!!", falta);

                        }else if(valorp > valortotal){
                              system("cls");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 250);
                            printf("\n\nTroco:R$%2.f!!", falta*-1);
                            falta=valortotal-valorp;
                        }
                       }while(valorp<valortotal);
                    break;
		        }

       }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 242);
       printf("\n\nDeseja fazer uma nova escolha no cardápio?\t 1-SIM 2-NAO: ");
	    scanf("%d", &esc);
        system("cls");

	}
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 253);
        printf("\nObrigada pela preferência<3\n\n");



    return 0;
    }
