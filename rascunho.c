// #include<stdio.h>

// int main (){
//     int rotacao = 0;
//     int posicao = 20;
//     char comando;
//     int para = 1;
//     int bateu = 0;
//     int localiza = 0;

//     while (para == 1)
//     {
//         scanf(" %c", &comando);
//         //===========================================ROTACIONANDO===========================================//
//         if (comando == 'l' || comando == 'r')
//         {
//             rotacao = concequencia(comando, rotacao, posicao, graph);
//             printf("rotacao: %d\n", rotacao);
//             printf("posicao: %d\n", posicao);
//         }
//         //===========================================ANDANDO===========================================//
//         else if(comando == 'm'){

//             bateu = concequencia(comando, rotacao, posicao, graph);

//             if(bateu == 0){
//                 switch (rotacao)
//                     {
                    
//                     //olhando para frente
//                     case 0:
//                         posicao -= 5;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;
                    
//                     //olhando para direita
//                     case 1:
//                         posicao++;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;

//                     //olhando pra traz
//                     case 2:
//                         posicao += 5;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;

//                     //olhando pra esquerda
//                     case 3:
//                         posicao--;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;
                    

//                     }
                
//             }

//             else{
//                 printf("rotacao: %d\n", rotacao);
//                 printf("posicao: %d\n", posicao);
//             }

//         }

//         //===========================================CORRENDO===========================================//
//         else if(comando == 'M'){

//             bateu = concequencia(comando, rotacao, posicao, graph);

//             if(bateu == 2){
//                 switch (rotacao)
//                     {
                    
//                     //olhando para frente
//                     case 0:
//                         posicao -= 5;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;
                    
//                     //olhando para direita
//                     case 1:
//                         posicao++;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;

//                     //olhando pra traz
//                     case 2:
//                         posicao += 5;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;

//                     //olhando pra esquerda
//                     case 3:
//                         posicao--;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;
                    

//                     }
                
//             }

//             if(bateu == 3){
//                 switch (rotacao)
//                     {
                    
//                     //olhando para frente
//                     case 0:
//                         posicao -= 10;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;
                    
//                     //olhando para direita
//                     case 1:
//                         posicao += 2;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;

//                     //olhando pra traz
//                     case 2:
//                         posicao += 10;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;

//                     //olhando pra esquerda
//                     case 3:
//                         posicao -= 2;
//                         printf("rotacao: %d\n", rotacao);
//                         printf("posicao: %d\n", posicao);
//                         break;
                    

//                     }
                
//             }

//             else{
//                 printf("rotacao: %d\n", rotacao);
//                 printf("posicao: %d\n", posicao);
//             }
 
//         }

//         //===========================================RADAR DE PAREDES===========================================//
//         else if (comando == 's'){
//             localiza = concequencia(comando, rotacao, posicao, graph);
//         }


//         else if (comando == 'q')
//         {
//             para = 0;
//         }

//         else
//         {
//             printf("Comando inválido\n");
//         }
//     }
// }