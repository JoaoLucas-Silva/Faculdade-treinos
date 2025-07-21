// João Lucas Silva de Souza; RA: 2649250

// Herança
public class Samambaia extends Planta {

	private String tipoFolhagem;
	private int tamFolha;

	public Samambaia(){
		super();
		tipoFolhagem = "";
		tamFolha = 0;
	}
  
        // Polimorfismo sobrecarga
	public Samambaia(String nome, String grupoPlanta, Ambiente ambiente, String tipoFolhagem, double qntAgua, int tamFolha, double tamanho){ 
		super(nome, grupoPlanta, ambiente, qntAgua, tamanho);
		this.tipoFolhagem = tipoFolhagem;
		this.tamFolha = tamFolha;
	}
  
        // Polimorfismo sobrescrita
	public void regar(){
		setQntAgua(10);
	}

	public void setTipoFolhagem(String tipoFolhagem){
		this.tipoFolhagem = tipoFolhagem;
	}

	public String getTipoFolhagem(){
		return tipoFolhagem;
	}

	public void setTamFolha(int tamFolha){
		this.tamFolha = tamFolha;
	}

	public int getTamFolha(){
		return tamFolha;
	}
}
