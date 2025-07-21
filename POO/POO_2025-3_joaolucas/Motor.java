// João Lucas Silva de Souza - RA:2649250

public class Motor{

  private int qtdPistoes;
	private int potencia;
	
	public Motor(){
		qtdPistoes = 0;
		potencia = 0;
	}
	
	public Motor(int qtdPistoes, int potencia){
		this.qtdPistoes = qtdPistoes;
		this.potencia = potencia;
	}

	public int getQtdPistoes (){
		return qtdPistoes;
	}
	public int getPotencia (){
		return potencia;
	}

	public final void setQtdPistoes (int qtdPistoes){
		this.qtdPistoes = qtdPistoes;
	}
	public final void setPotencia (int potencia){
		this.potencia = potencia;
	}	
}
