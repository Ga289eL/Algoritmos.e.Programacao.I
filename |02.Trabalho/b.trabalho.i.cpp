/* **************************************************** Mastermind *************************************************
 * Criadores: Alison Brito * Daniel Rosso Strutz * Gabriel Alves Jacques * Luiz Carlos Pedro * Romulo Cesar Koppe *
********************************************************************************************************************/

#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>

int main(){
    char opcao='0';                                                             //Variavel para gerar as opçãos
        
    while(opcao!='3'&&opcao!='E'&&opcao!='e'){                                  //Laço para retornar ao jogo enquanto a 'opção 3' não é selecionada
        cout<<"\033c\n----------------------------------------\n";                  //Saida de informação
        cout<<"\t###> Mastermind <###\n\n";                                         //Saida de informação
        cout<<"\t   1 - [J]ogar   \n";                                              //Saida de informação
        cout<<"\t   2 - [S]obre   \n";                                              //Saida de informação
        cout<<"\t   3 - [E]ncerrar   \n";                                           //Saida de informação
        cout<<"----------------------------------------\n";                         //Saida de informação
        cin>>opcao;                                                                 //Entrada de informação
            
        int acertos=0;                                                              //Variavel que descobre quantos numeros acertados
        int n1=0, n2=0, n3=0, n4=0;                                                 //Variaveis para definir os numeros sorteados 
        int p1=0, p2=0, p3=0, p4=0;                                                 //Variaveis para separar os numeros do palpite
            
        switch(opcao){                                                              //Gerador das 3 opções
            case '1': case 'J': case'j':                                                //Abertura da 'opção 1'
                cout<<"\033c\nVocê selecionou jogar!\n";                                    //Saida de informação
                    
                srand(time(NULL));                                                          //Gerador de numero aleatorio
                    
                while(n1>6 || n1<1)                                                         //Laço para delimitar o numero sorteado
                    n1 = rand()%10;                                                             //Calculo da aleatoriedade do primeiro numero
                while(n2>6 || n2<1 || n2==n1)                                               //Laço para delimitar o numero sorteado
                    n2 = rand()%10;                                                             //Calculo da aleatoriedade do segundo numero
                while(n3>6 || n3<1 || n3==n1 || n3==n2)                                     //Laço para delimitar o numero sorteado
                    n3 = rand()%10;                                                             //Calculo da aleatoriedade do terceiro numero
                while(n4>6 || n4<1 || n4==n1 || n4==n2 || n4==n3)                           //Laço para delimitar o numero sorteado
                    n4 = rand()%10;                                                             //Calculo da aleatoriedade do quarto numero
                    
                cout<<"\033c";                                                              //Limpeza de informação
                    
                for(int tentativas=10;tentativas>0&&acertos<4;tentativas--){                //Laço para calcular se o numero sorteado foi decifrado ou não
                    do{                                                                         //laço para verificar se o palpite tem numeros repetidos
                        do {                                                                        //Laço para verificar o palpite tem numeros validos
                            int palpite=0, correto=0, incorreto=0;                                      //Variaveis para verificar o palpite, caso erre o palpite iguala a 0 em cada repetição
                                
                            cout<<"\n\tVocê tem "<<tentativas<<" tentativas\n";                         //Saida de informação
                            cout<<"\t     -- "<<p1<<p2<<p3<<p4<<" --     \n";                           //Saida de informação
                            cout<<"Dê um palpite entre 1 a 6 (4 digitos): ";                            //Saida de informação
                            cin>>palpite;                                                               //Entrada de informação
                                
                            p1=palpite/1000;                                                            //Calculo para separar o primeiro numero do palpite
                            p2=(palpite/100)%10;                                                        //Calculo para separar o segundo numero do palpite
                            p3=(palpite/10)%10;                                                         //Calculo para separar o terceiro numero do palpite
                            p4=palpite%10;                                                              //Calculo para separar o quarto numero do palpite
                                
                            if(p1>0 && p1<7 && p2>0 && p2<7 && p3>0 && p3<7 && p4>0 && p4<7){           //Desvio para verificar se o palpite tem numeros validos
                                if(p1!=p2 && p1!=p3 && p1!=p4 && p2!=p3 && p2!=p4 && p3!=p4){               //Desvio para verificar se o palpite não tem numeros repetidos
                                    if(n1==p1)                                                                  //Desvio para verificar se o palpite do primeiro numero esta correto
                                        correto++;                                                                  //Caso esteja a variavel correto recebe mais 1
                                    else if(n2==p1 || n3==p1 || n4==p1)                                         //Desvio caso o primeiro digito do palpite seja igual o segundo ou terceito ou quarto numero sorteado
                                        incorreto++;                                                                //Caso seja a variavel incorreto recebe mais 1
                                    if(p2==n2)                                                                  //Desvio para verificar se o palpite do segundo numero esta correto
                                        correto++;                                                                  //Caso esteja a variavel correto recebe mais 1
                                    else if(n1==p2 || n3==p2 || n4==p2)                                         //Desvio caso o segundo digito do palpite seja igual o primeiro ou terceito ou quarto numero sorteado
                                        incorreto++;                                                                //Caso seja a variavel incorreto recebe mais 1
                                    if(p3==n3)                                                                  //Desvio para verificar se o palpite do terceiro numero esta correto
                                        correto++;                                                                  //Caso esteja a variavel correto recebe mais 1
                                    else if(n1==p3 || n2==p3 || n4==p3)                                         //Desvio caso o terceiro digito do palpite seja igual o primeiro ou segundo ou quarto numero sorteado
                                        incorreto++;                                                                //Caso seja a variavel incorreto recebe mais 1
                                    if(p4==n4)                                                                  //Desvio para verificar se o palpite do quarto numero esta correto
                                        correto++;                                                                  //Caso esteja a variavel correto recebe mais 1
                                    else if(n1==p4 || n2==p4 || n3==p4)                                         //Desvio caso o quarto digito do palpite seja igual o primeiro ou segundo ou terceiro numero sorteado
                                        incorreto++;                                                                //Caso seja a variavel incorreto recebe mais 1
                                        
                                    cout<<endl;                                                                 //Quebra de linha
                                    cout<<correto<<" Numero(s) certo(s), no(s) lugar(es) correto(s) \n";        //Saida de informação
                                    cout<<incorreto<<" Numero(s) certo(s), no(s) lugar(es) incorreto(s) \n";    //Saida de informação
                                    
                                    acertos=correto;                                                            //Calculo para o numero de acertos
                                    
                                } else {                                                                    //Desvio caso o palpite tenha numeros repetidos
                                    cout<<"\n         Não repita numeros!         \n";                          //Saida de informação
                                }
                            } else {                                                                    //Desvio caso o palpite não tenha numeros validos
                                cout<<"\n ??? Palpite inválido! Tente de novo! ??? \n";                     //Saida de informação
                            }
                        } while(p1>6 || p1<1 || p2>6 || p2<1 || p3>6 || p3<1 || p4>6 || p4<1);      //Laço que define se retorna com o mesmo numero de tentativas caso o palpite tenha numeros invalido
                    } while(p1==p2 || p1==p3 || p1==p4 || p2==p3 || p2==p4 || p3==p4);          //Laço que define se retorna com o mesmo numero de tentativas caso o palpite tenha numeros repetidos
                }
                    
                if(acertos==4){                                                             //Desvio para a mensagem que aparecerá caso o jogador acerte os numeros sorteados
                    cin.ignore();                                                               //Inicio do pause da menssagem a ser exibida
                    cout<<"\033c\n========================================";                    //Saida de informação
                    cout<<"\n      🎉  PARABÉNS! VOCÊ VENCEU! 🎉";                              //Saida de informação
                    cout<<"\n    Você decifrou a sequência: "<<n1<<n2<<n3<<n4;                  //Saida de informação
                    cout<<"\n========================================\n";                       //Saida de informação
                    cout<<"\nPrecione Enter para voltar ao menu principal ";                    //Saida de informação
                    cin.ignore();                                                               //Fim do pause da menssagem a ser exibida
                } else {                                                                    //Desvio para a mensagem que aparecerá caso o jogador não acerte os numeros sorteados
                    cin.ignore();                                                               //Inicio do pause da menssagem a ser exibida
                    cout<<"\033c\n+++++++++++++++++++++++++++++++++++++++++";                   //Saida de informação
                    cout<<"\n    💀  FIM DE JOGO! VOCÊ PERDEU! 💀";                             //Saida de informação
                    cout<<"\n    A sequência correta era: "<<n1<<n2<<n3<<n4;                    //Saida de informação
                    cout<<"\n+++++++++++++++++++++++++++++++++++++++++\n";                      //Saida de informação
                    cout<<"\nPrecione Enter para voltar ao menu principal ";                    //Saida de informação
                    cin.ignore();                                                               //Fim do pause da menssagem a ser exibida
                }
                    
                break;                                                                      //Fechamento da 'opção 1'
                
            case '2': case 'S': case's':                                                //Abertura da 'opção 2'
                cin.ignore();                                                               //Inicio do pause da menssagem a ser exibida
                cout<<"\033c\nVocê selecionou sobre!\n";                                    //Saida de informação
                cout<<"\033c\n\t***^^~- CRIADORES -~^^***\n";                               //Saida de informação
                cout<<"\t    *~ Alison Brito ~*    \n";                                     //Saida de informação
                cout<<"\t *~ Daniel Rosso Strutz ~* \n";                                    //Saida de informação
                cout<<"\t*~ Gabriel Alves Jacques ~*\n";                                    //Saida de informação
                cout<<"\t  *~ Luiz Carlos Pedro ~*  \n";                                    //Saida de informação
                cout<<"\t *~ Romulo Cesar Koppe ~* \n";                                     //Saida de informação
                cout<<"\t   --- DATA: 05\\26 ---     \n";                                   //Saida de informação
                cout<<"\t\\§§>>-- PROFESSOR --<<§§/\n";                                     //Saida de informação
                cout<<"\tRafael Ballottin Martins \n";                                      //Saida de informação
                cout<<"\nPrecione Enter para voltar ao menu principal ";                    //Saida de informação
                cin.ignore();                                                               //Fim do pause da menssagem a ser exibida
                break;                                                                      //Fechamento da 'opção 2'
                
            case '3': case 'E': case'e':                                                //Abertura da 'opção 3'
                cout<<"\nVocê selecionou encerrar!";                                        //Saida de informação
                break;                                                                      //Fechamento da 'opção 3'
                
            default:                                                                   //Caso a opção solicitada não exista
                cout<<"\nVocê selecionou uma opção inexistente, escolha novamente\n";       //Retorna a lista de opções
        }
    }
        
    return 0;                                                                   //Encerramento do codigo
}
