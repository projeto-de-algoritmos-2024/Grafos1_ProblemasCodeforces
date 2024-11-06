# PROBLEMAS CODEFORCES

**Número da Lista**: 18<br>
**Conteúdo da Disciplina**: Grafos 1<br>

## Alunos
| Matrícula  | Aluno                    |
| ---------- | ------------------------ |
| 22/2006169 | Natan da Cruz Almeida    |
| 22/1022408 | Paulo Henrique Lamounier |

## Sobre 
Este projeto consta com 4 desafios resolvidos do codeforces, sendo eles:
+ **(Q1) Problema 1928F - Forever Winter:** Um gráfico de floco de neve é gerado a partir de dois inteiros x e y, ambos maiores que 1. O processo de construção do gráfico é o seguinte:
  
	1. Começa com um vértice central.
	2. Conecta x novos vértices a este vértice central.
	3. Conecta y novos vértices a cada um desses x vértices.

	Por exemplo, para x=5x = 5x=5 e y=3y = 3y=3, o gráfico tem um vértice central e 5 vértices conectados a ele, cada um com 3 vértices conectados a eles.

	**Pergunta:** Dado um gráfico de floco de neve, determine os valores de x e y.[link](https://codeforces.com/problemset/problem/1829/F) 

+ **(Q2) Problema 129B - Students and Shoelaces:**  Anna e Maria gerenciam um clube de matemática, onde os alunos se comportam mal. Eles se amarraram com cadarços, criando conexões entre si. 

	Cada cadarço liga dois alunos, e se um aluno está ligado a outro, eles estão ligados em ambas as direções. Para restaurar a ordem, Anna verifica quais alunos estão ligados a exatamente um outro aluno. Os alunos que estão assim ligados são repreendidos e agrupados por Maria, que os expulsa do clube, levando os cadarços com eles. Esse processo se repete até que não haja mais alunos que possam ser repreendidos. 

	**Pergunta:** Determine quantos grupos de alunos serão expulsos do clube durante esse processo[link](https://codeforces.com/problemset/problem/129/B)

+ **(Q3) Problema 839C - Journey:**  

	A questão pede para calcular o comprimento esperado da jornada de Theon e Yara Greyjoy, que começam na cidade 1 e viajam aleatoriamente para cidades conectadas que ainda não visitaram. O grafo das cidades é uma árvore com n cidades e n-1 estradas, e cada estrada tem comprimento 1. A jornada termina quando chegam a uma cidade sem novos caminhos

	**Pergunta:** A tarefa é encontrar o valor esperado (média) do comprimento total da jornada[link](https://codeforces.com/problemset/problem/839/C)

+ **(Q4) Problema 977E - Cyclic Components:** 

	Um grafo com **n** vertices e **m** arestas.

	**Pergunta:** A tarefa é encontrar o número de componentes conectados que são ciclos.[link](https://codeforces.com/problemset/problem/977/E)

## Vídeos
* **Solução Q1:** [link](https://youtu.be/LXxwx8w9kwA)
* **Solução Q2:** [link](https://youtu.be/iHIgyb6aaPU)
* **Solução Q3:** [link](https://youtu.be/SLpecR-6Msc)
* **Solução Q4:** [link](https://youtu.be/9n8d8XpJQ9g)
  
## Instalação 
**Linguagem**: C++<br>
**Framework**: Não possui frameworks<br>
Para utilizar e testar os programas, primeiro é necessário ter um compilador de c/c++ instalado em sua máquina, caso não tenha, utilize esse fórum para baixar

> [acesse-aqui](https://www.geeksforgeeks.org/installing-mingw-tools-for-c-c-and-changing-environment-variable/)

Após instalar o compilador em sua máquina, clone o repositório utilizando

``` bash
git clone <link do repisotório>
```

## Uso 
Após clonar o repositório, entre na pasta via terminal e compile os códigos utilizando

``` bash
g++ -Wall -o <nome_arquivo_compilado> <arquivo_para_compilar>
```

ex: 

``` bash
g++ -Wall -o main Q1.cpp
```

Um arquivo executável (.exe) será criado, para realizar os testes, utilize

```bash
./main
```

Dessa forma será possível utilizar os casos de teste dos programas. Também é possível colocar os casos de teste em algum arquivo de texto e utilizar o comando cat para testá-los

``` bash
cat <arquivo.txt> | ./main
```