# Controle de Ruídos

## Descrição

O Sistema embarcado emite alertas visuais de acordo com a verificação dos níveis de ruídos em um determinado ambiente e seus respectivos limites máximos estabelecidos para tal.

## Funcionalidade

| Função              | Descrição                                                                                                                                                 |
|---------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| Entradas            | Leitura em tempo real dos níveis de ruídos no ambiente.                                                                                                   |
| Fonte               | Leitura atual dos níveis de ruídos no ambiente pelo módulo sensor de som.                                                                                  |
| Saídas              | Acionamento de LED's e piezo (despertador de som).                                                                                                        |
| Destino             | Loop principal do controle.                                                                                                                              |
| Ação                | O dispositivo possui três níveis que variam de acordo com o ruído presente no ambiente, medido em decibéis.                                               |
|                     | - Nível 1: Baixa frequência (0 a 20 decibéis) acende LED verde.                                                                                           |
|                     | - Nível 2: Média frequência (20 a 45 decibéis) acende LED amarelo.                                                                                        |
|                     | - Nível 3: Alta frequência (acima de 45 decibéis) acende LED vermelho.                                                                                    |
| Requisitos          | Estar ligado em um ambiente com presença de ondas sonoras.                                                                                                |
| Pré-condição        | Ter um módulo sensor de som, LEDs e piezo que serão programados para agir conforme os níveis de ruído estabelecidos pelas normas técnicas de saúde.         |
| Pós-condição        | Os valores dos volumes sonoros se alternam após as medidas que acontecem sem intervalo, definindo assim a coloração dos LEDs.                            |
| Efeitos colaterais  | Nenhum.                                                                                                                                                   |

## Tecnologias Utilizadas

- Arduino

  ![Arduino](https://th.bing.com/th/id/R.5f9fb52e5962ab071f2f84a9ba0e2b55?rik=s6RQULWZlyhAXg&pid=ImgRaw&r=0)
  
- ELEtricidade

  ![Bateria](https://th.bing.com/th/id/OIP.qsboPgB6pljAxBWYuEvA0gHaHb?w=192&h=192&c=7&r=0&o=5&pid=1.7)
  
- Sensor de Som

  ![Sensor de Som](https://th.bing.com/th/id/OIP.WKuDEgKMh7OBy6_ts4nDvwAAAA?pid=ImgDet&rs=1)
  
- Fita de LED

 ![Sensor de Som](https://http2.mlstatic.com/D_NQ_NP_611789-MLB49205830067_022022-W.jpg)


## Configuração

Antes de executar o programa, certifique-se de que os seguintes componentes estejam configurados corretamente:

1. Conecte o módulo sensor de som ao Arduino.
2. Conecte os LEDs e o piezo aos pinos correspondentes as portas definidas no código.
3. Certifique-se de que todas as dependências e bibliotecas necessárias estão instaladas.

## Uso

1. Execute o programa no Arduino IDE.
2. Monitore as leituras em tempo real dos níveis de ruído no ambiente.
3. Observe as ações do dispositivo, como o acionamento dos LEDs e do piezo, de acordo com os níveis de ruído detectados.

Lembre-se de calibrar adequadamente os limites de frequência e decibéis de acordo com suas necessidades e as normas técnicas aplicáveis.




## Produto Final

![Stopspeaking](https://stripedbleaklea--darlandos.repl.co/stopspeaking.jpeg)



### Autor
---

![Imagem do autor](https://media.licdn.com/dms/image/D4D35AQEaArHpYygSfQ/profile-framedphoto-shrink_400_400/0/1676827319640?e=1689030000&v=beta&t=EI9NzBKbjy56r1aFldNvym7GATPY5sQhvoPA90vGMhQ)





Feito com ❤️ por Darlan Almeida👋🏽 Entre em contato!

[![Linkedin Badge](https://img.shields.io/badge/-Darlan-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/darlan-almeida/)](https://www.linkedin.com/in/darlan-almeida-92251a232/) 
[![Gmail Badge](https://img.shields.io/badge/-adarlan748@gmail.com-c14438?style=flat-square&logo=Gmail&logoColor=white&link=mailto:adarlan748@gmail.com)](mailto:adarlan748@gmail.com)

