// João Lucas Silva de Souza - RA:2649250

public final class Passeio extends Veiculo implements Calc {

  private int qtdePassageiro;

  	public Passeio(){
    qtdePassageiro = 0;
  	}

  public Passeio(String placa, String marca, String modelo, String cor, int qtdRodas, int velocMax, Motor motor, String dataCadastro, int qtdePassageiro) {
    super(placa, marca, modelo, cor, qtdRodas, velocMax, motor, dataCadastro);
    this.qtdePassageiro = qtdePassageiro;
  }

	public final int calcVel(){
	  return (1000*getVelocMax());
	}
	
  public final int calcular(){
	  return (getPlaca().length()+getMarca().length()+getModelo().length()+getCor().length()+getDataCadastro().length());
	}	

  public final int getQtdePassageiro() {
    	return qtdePassageiro;
  	}

  public final void setQtdePassageiro(int qtdePassageiro) {
    	this.qtdePassageiro = qtdePassageiro;
  }
}
