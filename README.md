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
    o usuário pudesse acessar todas as funcionalidades do programa, e desde já 
    tambem fiz uma primeira modelagem do software para que pudesse ser um norte
    para criação do programa, tal primeira versão é esta que se segue:

![PRIMEIRA VERÇÃO DO DIAGRAMA DE CLASSE](https://user-images.githubusercontent.com/107070061/198628281-0f12d17c-6e7c-4962-aa45-c37b44f01ff0.png)

        No meu menu, implementado em C++, alem das opções para o usuário usar alguma
    funcionalidade foi adicionado uma opção para limpar a tela do programa
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

        Com a implementação da lista de médicos decidi implementar uma classe que iden-
    ficasse melhor o médico do que apenas a sua especialidade e CRM, e que 
    posteriormente seria usada em outras listas como a de pacientes por exemplo, isso
    foi feito utilizando herança.

        Neste ponto de desenvolvimento do projeto me deparei com a primera inserção com-
    pleta realizada, isto é: se faz até aqui possível cadastrar um médico de maneira 
    integra, porem ainda me deparei com um possível problema quando em dialogo com meus
    companheiros de faculdade, e se tivesse apenas um medico na lista?, se não fosse 
    tratado de maneira particular na parte do código onde seria efetuado a remoção 
    me traria potenciais problemas, no caso de falha de segmentação, tornando 
    meu software potencialmente mal elaborado, com isso decidi colocar um caso 
    a parte no momento da remoção, o qual possibilitou ao meu programa lidar
    com essa situação de maneira adequa. 

        Com esse potencial problema resolvido tomei a decisão de permiti o cadastro
    de uma consulta no sistema, e com isso o uso de mais uma funcionalidade do sistema,
    em primeira mão apenas foi implementado a classe consulta com hora da cosulta, cpf
    e CRM do médico, outra característica importante de uma consulta seria a data a qual
    a mesma acontecerá, por exemplo. Com isso tomei a decisão de implementar a classe data
    trazendo a funcionalidade de datar uma consulta.

        Será mostrado nos casos de teste que mesmo com lixo de memoria na impressão da 
    data da consulta decidi seguir em diante com o projeto por hora, e tratar desse 
    problema com o projeto um pouco mais a frente, para que eu consiguisse ganhar 
    tempo acelerando o processo de desenvolvimento do software. Então decidi partir 
    para implementação da classe paciente, para que possibilitasse ao usuário 
    inserir pacientes no sistema.
    


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

        Após estes testes foi implementado por mim a remoção de um médico do sistema
    a lista que salva as informações de um médico é duplamente encadeada, assim a remoção
    de um nó é uma simples questão de redirecionar ponteiros internos de um nó corretamente.

### RESULTADO DO TERCEIRO CASO DE TESTE

        Em uma primeira tentativa houve um erro, visto que não tinha cido tratado o caso 
    para remoção de apenas um elemento na lista de medicos, o video a seguir mostra isso:

https://user-images.githubusercontent.com/107070061/197761099-7f30a397-c700-4981-820e-f970b0fae0d7.mp4


        Em uma segunda tentativa após alterações no código da lista onde se localizava a função de remo-
    ção, foi obtido exito como mostra o curto video a seguir:

https://user-images.githubusercontent.com/107070061/197824596-f3391405-570c-4ad0-aeac-abcc6b856c17.mp4

### RESULTADO DO QUARTO CASO DE TESTE

        Foi feito a implementação de uma classe para dar nome e pegar outras informações
    do médico, foi feito uma primeira tentativa, e foi encontrado um erro de inserção de dados,
    como mostrar a imagem a seguir:

![aprimoramento da coleta de informações do medico](https://user-images.githubusercontent.com/107070061/197837280-e621f41a-218a-4295-b8c4-0ff52b59d0b4.png)

        Como mostra a imagem o programa não permitia ao usuário inserir, foi adicionado 
    a função cin.ingnore(), que obriga o computador retirar o que estava no buffer, e 
    o resultado foi:

![correção de erro](https://user-images.githubusercontent.com/107070061/197846413-544eee7c-ac55-47d3-ba44-f710bee8b631.png)

        È evidente que nesta tentativa foi possivel cadastrar
    um endereço para o médico o que não era possível antes da devida
    correção.

### RESULTADO DO QUINTO CASO DE TESTE

        Esse caso de teste se trata da correção de um erro que não havia acontecido
    porem em dialogo com colegas de faculdade percebi que se tratava de um caso a 
    ser tratado, quando se tem apenas um elemento na lista, para que não desse 
    erro seria necessário fazer um tratamento diferente do apenas remover convencional
    implementei no projeto, em uma primeira tentativa obtive os seguintes resultados:
        

https://user-images.githubusercontent.com/107070061/197918379-fd4c3bd8-bd8a-43f7-bc52-ea6e98374b8c.mp4


        É facil notar que no inicio deste video havia um médico cadastrado na lista
    acessando a opção 8 de removo o medico e após entro novamente na opção 4, 
    mostrando a lista de médicos vazia, confirmando o exito da tentativa de remover
    um elemento da lista quanto existe apenas um elemento. 


### RESULTADO DO SEXTO CASO DE TESTE

        Esse caso de teste se trata da implementação da classe consulta e 
    de sua lista, visto que podemos ter diversas consultas em um mesmo consultorio,
    os resultado seguem no video a seguir:


https://user-images.githubusercontent.com/107070061/198507973-b904fdc3-0c09-4d51-b9ce-c9980a518a8b.mp4

        Como mostra o curto video a implementação foi bem sucedida, sem casos de erro
    porem observe que tal classe ainda não estava armazenando a data da consulta.

### RESULTADO DO SÉTIMO CASO DE TESTE

       Como já foi dito por mim por aqui, que em primeira mão foi criado a classe consulta
    sem suas características principais adicionadas, por isso neste caso de teste será 
    mostrado a implementação de uma classe de codinome data para realizar esse função 
    tão importante no processo de registro de uma consulta de maneira automatizada,
    na primeira tentativa obtive estes resultados:

![implementação da classe data](https://user-images.githubusercontent.com/107070061/198577284-ab2e9d4b-2f92-480d-9db3-570ff623acc3.png)

![introdução da classe data](https://user-images.githubusercontent.com/107070061/198577376-6d2ec4c0-1ca8-437f-8f49-138e44a24f21.png)


        È facil perceber que esta fase do projeto teve bons resultados de primeira mão, 
    porem como o segundo print mostra junto com as informações da consulta veio um lixo
    de memória, logo após a impressão da data da consulta.

### RESULTADO DO OITAVO CASO DE TESTE

        Agora implementei mais uma lista que se tratava da inserção de um paciente no sistema,
    porem em uma primeira tentativa obtive um erro, que se tratava da não implementação de um
    dos métodos, como mostra os prints do terminal:

![ERRO da implementação da listapaciente](https://user-images.githubusercontent.com/107070061/198587942-68ccb5a2-f824-4220-816b-376374e35111.png)

        Na implementação da classe paciente, me passou despercebido o desenvolvimento do método
    que retornava um ponteiro que apontava para o nó anterior da lista, visto que usei uma lista
    duplamente encadeada.
    
