// João Lucas Silva de Souza; RA: 2649250

public class Cacto extends Planta{

	private int quantEspinhos;
	private String toleranciaSeca;

	public Cacto() {
		super();
		quantEspinhos = 0;
		toleranciaSeca = "";
	}

	public Cacto(String nome, String grupoPlanta, Ambiente ambiente, int quantEspinhos, String toleranciaSeca){
		super(nome, grupoPlanta, ambiente);
		this.quantEspinhos = quantEspinhos;
		this.toleranciaSeca = toleranciaSeca;
	}

	public void setQuantEspinhos(int quantEspinhos){
		this.quantEspinhos = quantEspinhos;
	}

	public int getQuantEspinhos(){
		return quantEspinhos;
	}

	public void setToleranciaSeca(String toleranciaSeca){
		this.toleranciaSeca = toleranciaSeca;
	}

	public String getToleranciaSeca(){
		return toleranciaSeca;
	}
}
