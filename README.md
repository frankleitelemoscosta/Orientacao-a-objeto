# PROJETO-DO-CONSULTÓRIO-AUTOMATIZADO

## INTRODUÇÃO

    Esse projeto tem por objetivo apresentar o gerenciamento de um consultório médico.
    Nossa atual realidade apresenta um auto nível de desenvolvimento técnico e tecnologico, e
    a tecnologia nos trouxe comodidade, e praticidade, um microondas permite ao individuo ter
    seu alimento rapidamente aquecido, o computador permite o armazenamento de uma grande quantidade 
    de informações no mesmo lugar, alem disso ainda permite o processamento de varias ações ao mesmo 
    tempo, muitos e muitos dados em pouquissimo tempo, é uma realidade inevitável atualmente, esse projeto
    traz um pouco dessa realidade ao mundo da medicina, com o intuito de trazer agilidade nos processos
    rotineiros, demonstrarei nos demais paragrafos como modelei o processo de gerenciamento de um 
    consultório médico, detalhando minhas decisões de implementação, baseadas no diagrama de classe 
    que meu orientador Eduardo Habib forneceu para que esse projeto fosse desenvolvido.

## DECISÕES DE IMPLEMENTAÇÃO E ATUALIZAÇÃO DO DIAGRAMA DE CLASSES

        A primeira decisão de implementação foi a de criar um menu, onde 
    o usuário pudesse acessar todas as funcionalidades do programa, como mostra 
    os prints dos terminais a seguir:

![Captura de tela de 2022-10-22 21-26-14](https://user-images.githubusercontent.com/107070061/197369877-de221b95-4900-4b0a-9fda-7db0b01df488.png)

    Esta primeira imagem demonstra o menu, implementado em C++, alem das opções 
    para o usuário usar alguma funcionalidade foi adicionado uma opção para limpar a tela do programa
    com o intuito de não poluir visualmente a interface para o usuário.

        Após a implementação do menu decidi que era necessário iniciar o desenvolvimento
    das funcionalidades do mesmo, com isso em mente criei a classe consultório
    no meu projeto, essa classe dá partida para todas as listas e demais classes consti- 
    tuintes do projeto, ou seja antes de acessar qualquer outra classe o programa vai 
    passar por esta classe, sendo assim ela teria de ser a primeira a ser implementada
    após o menu.

        Depois da implementação da classe consultório decidi implementar a classe médico
    para que fosse possíve o cadastro de um médico no sistema, possibilitando ao usuário 
    do sistema inserir, listar e remover um médico do programa.

## CASOS DE TESTE

        O primeiro teste realizado foi o teste do menu, esse teste foi realizado 
    para que comprovasse se o menu estava funcionando sem nenhum erro, porem observe
    que nesse caso as funcionalidade do menu ainda não estavam implementadas, porem era
    possível escolher uma opção mesmo que ela não proporcionace algum resultado definitivo.

### RESULTADOS DO PRIMEIRO CASO

![primeiroteste](https://user-images.githubusercontent.com/107070061/197371828-3d6ef9fb-ee2d-4477-a616-318eeea9b82e.png)

    Os primeiros resultados foram positivos, como mostrado nas imagens
    o menu não apresentou nenhum erro, e apresoutou as
    informações ao usuário como esperado.

        O segundo teste foi o de cadastro de um medico no sistema, porem de primeira mão
    o que foi implementado apenas foi a inserção do crm do médico e sua especialidade, pois
    a classe onde estaria informações pessoais como nome, cpf, endereço seria uma classe compar-
    tilhada com outras como a classe paciente, que tambem pode ter as mesmas catacterísticas.

### RESULTADOS DO SEGUNDO CASO DE TESTE

        Em uma primeira tentativa ocorreu um pequeno erro, devido a introdução 
    de um construtor vazio em uma classe e a não declaração do mesmo no arquivo
    hpp dessa classe, o print a seguir evidencia o erro.

![segundoteste](https://user-images.githubusercontent.com/107070061/197396494-15b50c94-459a-425f-b79d-3b86ea4b9ed0.png)

        Após a correção desse erro foi realizado um segundo teste, com os seguintes resultados:

![correçãodoerrodosegundoteste](https://user-images.githubusercontent.com/107070061/197398196-5f5c2d9e-d53c-41dc-867e-f97a8e966656.png)

    como mostra a imagem o cadastro do médico ainda se tratava de apenas de inserir o CRM e sua 
    especialização.

![correcaodosegundoteste](https://user-images.githubusercontent.com/107070061/197398299-109794ef-033b-45c8-ae33-6d2d388317f3.png)

        Essa segunda imagem mostra o resultado da impressão das informações dos médicos cadastrados,
    afirmando o sucesso na implementação da classe medico e sua lista.


