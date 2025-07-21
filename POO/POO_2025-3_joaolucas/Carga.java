// João Lucas Silva de Souza - RA:2649250

public final class Carga extends Veiculo implements Calc {

    	private int tara;
    	private int cargaMax;

    	public Carga(){
        	tara = 0;
        	cargaMax = 0;
    	}

    	public Carga(String placa, String marca, String modelo, String cor, int qtdRodas, int velocMax, Motor motor, String dataCadastro, int tara, int cargaMax) {

		super(placa, marca, modelo, cor, qtdRodas, velocMax, motor, dataCadastro);
        	this.tara = tara;
        	this.cargaMax = cargaMax;
    	}

	  public final int calcVel(){
		  return (100000 * getVelocMax());
	  }

	  public final int calcular(){
		  return (getQtdRodas()+getVelocMax()+getMotor().getQtdPistoes()+getMotor().getPotencia()+getTara()+getCargaMax());
	  }
	
    	public final int getTara() {
        	return tara;
    	}
    	public final int getCargaMax() {
        	return cargaMax;
    	}

    	public final void setTara(int tara) {
        	this.tara = tara;
    	}
    	public final void setCargaMax(int cargaMax) {
        	this.cargaMax = cargaMax;
    	}
}
