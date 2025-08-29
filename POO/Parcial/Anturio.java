// João Lucas Silva de Souza; RA: 2649250

// Herança
public class Anturio extends Planta1 implements RegarPlanta{

	private String corFlor;
	private String formatoFlor;

	public Anturio() {
		super();
		corFlor = "";
		formatoFlor = "";
	}
  
  // Polimorfismo sobrecarga
	public Anturio(String nome, String grupoPlanta, Ambiente1 ambiente1, String corFlor, String formatoFlor, double qntAgua, double tamanho){
		super(nome, grupoPlanta, ambiente1, qntAgua, tamanho);
		this.corFlor = corFlor;
		this.formatoFlor = formatoFlor;
	}
	
	// Polimorfismo sobrescrita
	public void regar(){
		setQntAgua(4);
	}

	public void setCorFlor(String corFlor){
		this.corFlor = corFlor;
	}

	public String getCorFlor(){
		return corFlor;
	}

	public void setFormatoFlor(String formatoFlor){
		this.formatoFlor = formatoFlor;
	}

	public String getFormatoFlor(){
		return formatoFlor;
	}
}
