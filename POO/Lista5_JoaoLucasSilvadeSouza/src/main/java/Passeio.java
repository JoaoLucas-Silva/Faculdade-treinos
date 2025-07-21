// João Lucas Silva de Souza; RA: 2649250

public final class Passeio extends Veiculo implements Calc {

    	//Atributos
    	private int qtdePassageiro;

    	//Construtores
    	//Padrão -> incialização dos atributos

    	public Passeio(){
        	qtdePassageiro = 0;
    	}

    	//Inicialização dos atributos por passagem de valor
    	public Passeio(String placa, String marca, String modelo, String cor, int qtdRodas, int velocMax, Motor motor, String dataCadastro, int qtdePassageiro) {
        	super(placa, marca, modelo, cor, qtdRodas, velocMax, motor, dataCadastro);
        	this.qtdePassageiro = qtdePassageiro;
    	}

	//Sobrescrição do método abstrato calcVel da classe mãe. Como é para efeitos de exibição, eu retorno a conversão, mas não transformo o atributo para a unidade esperada.
	public final int calcVel(){
		//Km/h para m/h = 1000 * velocMax;
		return (1000*getVelocMax());
	}
	
	//Implementação da interface -> soma das quantidades de letras.
	public final int calcular(){
		return (getPlaca().length()+getMarca().length()+getModelo().length()+getCor().length()+getDataCadastro().length());
	}	

   	//Método getter
    	public final int getQtdePassageiro() {
        	return qtdePassageiro;
    	}
    	//Método setter
    	public final void setQtdePassageiro(int qtdePassageiro) {
        	this.qtdePassageiro = qtdePassageiro;
    	}
}