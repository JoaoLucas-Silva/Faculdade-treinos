// João Lucas Silva de Souza; RA: 2649250

public class Motor{

	//Atributos
	private int qtdPistoes;
	private int potencia;
	
	//Construtores
	//Básico
	public Motor(){
		qtdPistoes = 0;
		potencia = 0;
	
	}
	//Incializando através de passagem de valor
	public Motor(int qtdPistoes, int potencia){
		this.qtdPistoes = qtdPistoes;
		this.potencia = potencia;
	
	}
		
	//Métodos getters
	public int getQtdPistoes (){
		return qtdPistoes;
	}
	public int getPotencia (){
		return potencia;
	}

	//Métodos setters -> Não podem ser sobrescritos
	public final void setQtdPistoes (int qtdPistoes){
		this.qtdPistoes = qtdPistoes;
	}
	public final void setPotencia (int potencia){
		this.potencia = potencia;
	}	
}