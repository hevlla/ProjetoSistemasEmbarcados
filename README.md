# Controlador do nível de água

## Introdução:

  O controlador de nível de água, é um projeto cujo objetivo é utilizar um microcontrolador que será o responsável pelo controle automático da bomba de água, mensurando com o auxílio de sensores, o nível de água em um tanque. Este sistema monitora o nível de água do tanque e liga a bomba automaticamente sempre que o tanque está vazio. A bomba é desligada quando o tanque superior ou recipiente está cheio. Aqui, o nível de água do tanque é indicado no LCD (Display de cristal líquido). Usando este sistema, podemos evitar o transbordamento da água.
  O presente trabalho apresenta uma solução prática para solucionar problemas relacionados ao controle do nível de água nos mais diversos reservatórios. Tendo em vista a dificuldade de acesso onde os reservatórios são instalados, em locais altos, torna-se difícil a visualização do seu conteúdo e consequentemente de seu controle; torna-se então indispensável a utilização de um sensor de nível de água não só para facilitar mas como também ao acrescentar a automatização, proporcionar uma melhor experiência para as pessoas que utilizam deste serviço.

## Estado da arte:

  O Sensor de Nível é um tipo de medidor feito para atuar em determinados pontos fixos de nível. Esses pontos fixos são valores de nível que, uma vez alcançados, exigem o desencadeamento de alguma ação necessária para a operação ou para a segurança do sistema em que o instrumento está inserido. Esses sensores podem ser utilizados para ligar uma bomba, acionar um alarme ou desencadear uma sequência de operações automáticas quando o nível atinge um ponto fixo, informando à eles através de ajustes determinados.
  Um Sensor de Nível é composto basicamente de duas partes: um detector de nível e um circuito de saída. O detector informa ao circuito de saída a presença ou ausência do nível em determinada posição. Já o circuito de saída se encarrega de alterar o estado de saída do sensor em função da informação transmitida pelo detector.

  - **Sensor de nível tipo bóia**
    É uma solução simples e amplamente utilizada no mercado devido a sua simplicidade e baixo custo de aplicação. Ele pode ser instalado tanto na horizontal quanto na vertical.  A forma mais utilizada é na parte lateral do tanque, horizontalmente. Quando o nível aumenta ou diminui, a boia se movimenta junto e, através de uma haste, é feito, magneticamente, o acionamento do contato.

  - **Sensor de nível capacitivo**
    Funciona como um capacitor. O sensor é uma das placas do capacitor e a parede metálica do tanque é a segunda. O que está entre eles é o material isolante. 
    A capacitância é a capacidade de armazenamento do capacitor. Isto depende das áreas da placa e de suas distância, além da constante dielétrica. Quando o tanque está com o nível zerado, existe apenas o ar como material isolante entre as placas. À medida que o produto começa a preencher o tanque, a capacitância é alterada. Ela é diretamente proporcional ao nível do tanque.

  - **Sensor de nível vibratório**
    Atua utilizando o amortecimento da vibração de uma haste só ou de duas hastes em forma de diapasão como meio de medir o nível. 
    O amortecimento mecânico acontece pela absorção de energia de vibração pela viscosidade de um líquido ou pela resistência de sólidos granulares ou em pó que entram em contato com uma ou mais hastes.
    O Sensor de Nível por vibração consiste em um garfo simétrico com duas extremidades. Na base do garfo há uma fina membrana com conexão a uma extensão em aço inoxidável que entra em contato com o processo. O garfo de vibração é excitado por uma frequência de ressonância por meio da membrana através de um cristal piezoelétrico.
    O garfo de vibração é projetado para, quando for imerso em um material, haver um deslocamento na sua frequência de ressonância de aproximadamente 10% a 20%. A frequência de ressonância é coletada por um receptor de cristal, e o seu deslocamento por um circuito específico tem por função comutar do tipo NA ou NF.
    De acordo com a configuração em que é executada, o Sensor de Nível vibratório poderá ser instalado lateralmente ou no topo do reservatório. Só é preciso ter cuidado com os cantos onde possam haver acúmulo de material e com as áreas em que ocorre a queda de material para a alimentação do reservatório.

  - Sensor de nível Condutivo
    O funcionamento desse tipo de sensor não possui restrição quanto à alta temperatura ou alta pressão. Assim, ele é indicado para vários tipos de medições de nível de líquidos, como água ou outros que não sejam condutivos.
    Seu princípio de funcionamento é simplificado! Ele se dá pela diferença de potencial (DDP) entre um eletrodo e outro no momento em que o eletrodo entrar em contato com o fluido.
    
  - Sensor de nível com RF Admitância
    É a solução mais eficiente para enfrentar os principais desafios da Medição de Nível, como incrustação, espuma, pó em suspensão e interfaces complexas, além de ser a maneira mais eficiente de evitar gargalos de produção com alarmes falsos, transbordamentos e/ou medição errônea.
    A RF Admitância utiliza um sinal de radiofrequência (RF) para, diante de um dos desafios, indicar a real presença ou ausência de produto, nível e/ou volume que está em contato com o elemento sensor do sensor.
    
## Quais sensores e atuadores serão utilizados e como serão utilizados: 

  - 2 Sensores de nível de água (boia), o sensor tipo boia funciona como uma chave magnética, entrando em curto quando a boia horizontal ou vertical é elevada, emitindo um sinal de que houve alteração naquele ponto. Serão dois sensores posicionados em níveis distintos (baixo e alto), sendo esse a faixa de intervalo a ser trabalhada e mensurada. 
  - 1 Arduino Uno.
  - 1 Display LCD com módulo I2C, será o responsável por informar como está a situação tanque “cheio, mediano ou crítico”. O módulo I2C reduz a quantidade de portas a serem preenchidas no arduino.
  - 1 contator ou relé, um contator suporta correntes maiores. Estes serão responsáveis por acionar a bomba.
  - Jumpers, resistores

## Especificações técnicas do microcontrolador: 
  O microcontrolador escolhido foi o Arduino Uno, logo após várias comparações entre custo e benefício, apesar deste, possuir menos quantidade de portas e uma memória flash 8 vezes menor ao compararmos com o Arduino Mega, concluímos que o arduino escolhido irá atender com êxito os objetivos propostos pelo projeto.    

  - Microcontrolador ATMEL ATMEGA328
  - Arquitetura: RISC
  - Comunicação é realizada pelo protocolo STK500

## Descrição do funcionamento do projeto:
  O controlador de nível de água, possui 2 sensores de nível tipo bóia que informaram três estados: cheio, mediano e crítico, este será o responsável por acionar o relé que ligará a bomba para encher a caixa da água até o estado cheio, onde será desligada.

## Link para a videoaula correspondente à explicação do circuito elétrico e o código utilizado no desenvolvimento do projeto:
  O vídeo está disponível no YouTube no seguinte endereço: https://youtu.be/xt-_fORybkc

## Artigos de referência:
  Controle de nível de água em relação a rio - https://bityli.com/8xCLy
  Automatização de cisternas e caixa d’água de condomínios via CLP - http://repositorio.utfpr.edu.br/jspui/handle/1/16909
