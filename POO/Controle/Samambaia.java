// João Lucas Silva de Souza; RA: 2649250

public class Samambaia extends Planta{

	private String tipoFolhagem;
	private int tamFolha;

	public Samambaia(){
		super();
		tipoFolhagem = "";
		tamFolha = 0;
	}

	public Samambaia(String nome, String grupoPlanta, Ambiente ambiente, String tipoFolhagem, int tamFolha){
		super(nome, grupoPlanta, ambiente);
		this.tipoFolhagem = tipoFolhagem;
		this.tamFolha = tamFolha;
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
