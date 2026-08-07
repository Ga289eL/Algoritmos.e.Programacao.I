/* **************************************************** Mastermind *************************************************
 * Criadores: Alison Brito * Daniel Rosso Strutz * Gabriel Alves Jacques * Luiz Carlos Pedro * Romulo Cesar Koppe *
********************************************************************************************************************/

#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>

int main(){
    char opcao='0'; //Variavel para gerar as opçãos
        
    while(opcao!='3'&&opcao!='E'&&opcao!='e'){ //Laço para retornar ao jogo enquanto a 'opção 3' não é selecionada
        cout<<"\033c\n----------------------------------------\n";
        cout<<"\t###> Mastermind <###\n\n";
        cout<<"\t   1 - [J]ogar   \n";
        cout<<"\t   2 - [S]obre   \n";
        cout<<"\t   3 - [E]ncerrar   \n";
        cout<<"----------------------------------------\n";
        cin>>opcao;
            
        int acertos=0; //Variavel que descobre quantos numeros acertados
        int n1=0, n2=0, n3=0, n4=0; //Variaveis para definir os numeros sorteados 
        int p1=0, p2=0, p3=0, p4=0; //Variaveis para separar os numeros do palpite
            
        switch(opcao){
            case '1': case 'J': case'j':
                cout<<"\033c\nVocê selecionou jogar!\n";
                    
                srand(time(NULL)); //Gerador de numero aleatorio
                    
                while(n1>6 || n1<1) //Laços para delimitar os numeros sorteados
                    n1 = rand()%10
                while(n2>6 || n2<1 || n2==n1)
                    n2 = rand()%10;
                while(n3>6 || n3<1 || n3==n1 || n3==n2)
                    n3 = rand()%10;
                while(n4>6 || n4<1 || n4==n1 || n4==n2 || n4==n3)
                    n4 = rand()%10;
                    
                cout<<"\033c";
                    
                for(int tentativas=10;tentativas>0&&acertos<4;tentativas--){ //Laço para calcular se o numero sorteado foi decifrado
                    do { //Laço para verificar se o palpite tem numeros repetidos
                        do { //Laço para verificar o palpite tem numeros validos
                            int palpite=0, correto=0, incorreto=0; //Variaveis para verificar o palpite, caso erre, o palpite iguala a 0 em cada repetição
                                
                            cout<<"\n\tVocê tem "<<tentativas<<" tentativas\n";
                            cout<<"\t     -- "<<p1<<p2<<p3<<p4<<" --     \n";
                            cout<<"Dê um palpite entre 1 a 6 (4 digitos): ";
                            cin>>palpite;
                                
                            p1=palpite/1000; //Calculos para separar os numeros do palpite
                            p2=(palpite/100)%10;
                            p3=(palpite/10)%10;
                            p4=palpite%10;
                                
                            if(p1>0 && p1<7 && p2>0 && p2<7 && p3>0 && p3<7 && p4>0 && p4<7){ //Desvio para verificar se o palpite tem numeros validos
                                if(p1!=p2 && p1!=p3 && p1!=p4 && p2!=p3 && p2!=p4 && p3!=p4){ //Desvio para verificar se o palpite não tem numeros repetidos
                                    if(n1==p1) //Desvios para verificar se os palpites dos estão corretos
                                        correto++;
                                    else if(n2==p1 || n3==p1 || n4==p1)
                                        incorreto++;
                                    if(p2==n2)
                                        correto++;
                                    else if(n1==p2 || n3==p2 || n4==p2)
                                        incorreto++;
                                    if(p3==n3)
                                        correto++;
                                    else if(n1==p3 || n2==p3 || n4==p3)
                                        incorreto++;
                                    if(p4==n4)
                                        correto++;
                                    else if(n1==p4 || n2==p4 || n3==p4)
                                        incorreto++;
                                        
                                    cout<<endl;
                                    cout<<correto<<" Numero(s) certo(s), no(s) lugar(es) correto(s) \n";
                                    cout<<incorreto<<" Numero(s) certo(s), no(s) lugar(es) incorreto(s) \n";
                                    
                                    acertos=correto; //Calculo para o numero de acertos
                                    
                                } else {
                                    cout<<"\n        Não repita os numeros!        \n";
                                }
                            } else {
                                cout<<"\n ??? Palpite inválido! Tente de novo! ??? \n";
                            }
                        } while(p1>6 || p1<1 || p2>6 || p2<1 || p3>6 || p3<1 || p4>6 || p4<1);
                    } while(p1==p2 || p1==p3 || p1==p4 || p2==p3 || p2==p4 || p3==p4);
                }
                    
                if(acertos==4){ //Desvio para a mensagem que aparecerá caso o jogador acerte os numeros sorteados
                    cin.ignore();
                    cout<<"\033c\n========================================";
                    cout<<"\n      🎉  PARABÉNS! VOCÊ VENCEU! 🎉";
                    cout<<"\n    Você decifrou a sequência: "<<n1<<n2<<n3<<n4;
                    cout<<"\n========================================\n";
                    cout<<"\nPrecione Enter para voltar ao menu principal ";
                    cin.ignore();
                } else { //Desvio para a mensagem que aparecerá caso o jogador não acerte os numeros sorteados
                    cin.ignore();
                    cout<<"\033c\n+++++++++++++++++++++++++++++++++++++++++";
                    cout<<"\n    💀  FIM DE JOGO! VOCÊ PERDEU! 💀";
                    cout<<"\n    A sequência correta era: "<<n1<<n2<<n3<<n4;
                    cout<<"\n+++++++++++++++++++++++++++++++++++++++++\n";
                    cout<<"\nPrecione Enter para voltar ao menu principal ";
                    cin.ignore();
                }
                
                break;
                
            case '2': case 'S': case's':
                cin.ignore();
                cout<<"\033c\nVocê selecionou sobre!\n";
                cout<<"\033c\n\t***^^~- CRIADORES -~^^***\n";
                cout<<"\t    *~ Alison Brito ~*    \n";
                cout<<"\t *~ Daniel Rosso Strutz ~* \n";
                cout<<"\t*~ Gabriel Alves Jacques ~*\n";
                cout<<"\t  *~ Luiz Carlos Pedro ~*  \n";
                cout<<"\t *~ Romulo Cesar Koppe ~* \n";
                cout<<"\t   --- DATA: 05\\26 ---     \n";
                cout<<"\t\\§§>>-- PROFESSOR --<<§§/\n";
                cout<<"\tRafael Ballottin Martins \n";
                cout<<"\nPrecione Enter para voltar ao menu principal ";
                cin.ignore();
                break;
                
            case '3': case 'E': case'e':
                cout<<"\nVocê selecionou encerrar!";
                break;
                
            default:
                cout<<"\nVocê selecionou uma opção inexistente, escolha novamente\n";
        }
    }
        
    return 0;
}
