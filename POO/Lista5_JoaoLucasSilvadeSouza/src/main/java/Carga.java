// João Lucas Silva de Souza; RA: 2649250

public final class Carga extends Veiculo implements Calc {

    	//Atributos
    	private int tara;
    	private int cargaMax;

    	//Construtores
    	//Padrão -> incialização dos atributos
    	public Carga(){
        	tara = 0;
        	cargaMax = 0;
    	}

    	// Inicialização dos atributos por passagem de valor
    	public Carga(String placa, String marca, String modelo, String cor, int qtdRodas, int velocMax, Motor motor, String dataCadastro, int tara, int cargaMax) {
        	
		//É melhor usar o super aqui do que usar this para todos os atributos herdados da classe mãe.
		super(placa, marca, modelo, cor, qtdRodas, velocMax, motor, dataCadastro);
        	this.tara = tara;
        	this.cargaMax = cargaMax;
    	}

	
	
	//Sobrescrição do método abstrato calcVel da classe mãe. 
	public final int calcVel(){
		//Km/h para cm/h = 100.000 * getVelocMax -> (acesso privado,logo é necessário o uso do método getter);
		return (100000*getVelocMax());
	}

	//Implementação da inteface Calc -> soma dos inteiros
	public final int calcular(){
		return (getQtdRodas()+getVelocMax()+getMotor().getQtdPistoes()+getMotor().getPotencia()+getTara()+getCargaMax());
	}
	
    	//Método getter
    	public final int getTara() {
        	return tara;
    	}
    	public final int getCargaMax() {
        	return cargaMax;
    	}

    	//Método setter
    	public final void setTara(int tara) {
        	this.tara = tara;
    	}
    	public final void setCargaMax(int cargaMax) {
        	this.cargaMax = cargaMax;
    	}
}