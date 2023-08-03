programa
{
	cadeia nome, endereco, cidade, estado
	
	funcao Leia_Cadastro()
	{
		escreva("Qual o seu nome?")
		escreva("\n")
		leia(nome)
		
		escreva("Qual o endereço?")
		escreva("\n")
		leia(endereco)
		
		escreva("Qual a sua cidade?")
		escreva("\n")
		leia(cidade)
		
		escreva("Qual o seu estado?")
		escreva("\n")
		leia(estado)
	}
	
	funcao Mostrar_Cadastro()
	{
		escreva("Segue Abaixo o Cadastro")
		escreva("\n")
		escreva("\n")
		
		escreva("Nome: ",nome)
		escreva("\n")
		
		escreva("Endereço: ", endereco)
		escreva("\n")
		
		escreva("Cidade: ", cidade)
		escreva("\n")
		
		escreva("Estado ", estado)
		escreva("\n")
		
	}
	
	funcao inicio()
	{
		Leia_Cadastro()
		limpa()
		Mostrar_Cadastro()
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 641; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */