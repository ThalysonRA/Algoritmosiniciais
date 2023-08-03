programa
{
	inteiro homens, mulheres, troca
	funcao receber_valores()
	{
		escreva("Digite os valores")
		escreva("\n")
		escreva("\n")
		escreva("Quantidade de Mulheres")
		escreva("\n")
		leia(homens)
		escreva("\n")

		escreva("Quantidade de Homens")
		escreva("\n")
		leia(mulheres)		
		escreva("\n")
	}
	funcao ajuste()
	{
		troca = mulheres
		mulheres = homens
		homens = troca
		
	}
	funcao valores_corretos()
	{
		escreva("Segue valores corretos dos homens ", homens)
		escreva("\n")
		escreva("Segue valores corretos dos mulheres ", mulheres)
	}
	funcao inicio()
	{
		receber_valores()
		ajuste()
		valores_corretos()
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 324; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */