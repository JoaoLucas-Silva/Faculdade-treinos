// João Lucas Silva de Souza; RA: 2649250

public class Cacto1 extends Planta2 {

	private int quantEspinhos;
	private String toleranciaSeca;

	public Cacto1() {
		super();
		quantEspinhos = 0;
		toleranciaSeca = "";
	}

	public Cacto1(String nome, String grupoPlanta, Ambiente1 ambiente1, int quantEspinhos, String toleranciaSeca){
		super(nome, grupoPlanta, ambiente1);
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
