// João Lucas Silva de Souza; RA: 2649250

// Herança
public class Cacto extends Planta1 implements RegarPlanta{

	private int quantEspinhos;
	private String toleranciaSeca;

	public Cacto() {
		super();
		quantEspinhos = 0;
		toleranciaSeca = "";
	}
  
  // Polimorfismo sobrecarga
	public Cacto(String nome, String grupoPlanta, Ambiente1 ambiente1, int quantEspinhos, String toleranciaSeca, double qntAgua, double tamanho){
		super(nome, grupoPlanta, ambiente1, qntAgua, tamanho);
		this.quantEspinhos = quantEspinhos;
		this.toleranciaSeca = toleranciaSeca;
	}
	
	// Polimorfismo sobrescrita
	public void regar(){
		setQntAgua(2);
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
