// João Lucas Silva de Souza; RA: 2649250

public class Samambaia1 extends Planta2 {

	private String tipoFolhagem;
	private int tamFolha;

	public Samambaia1(){
		super();
		tipoFolhagem = "";
		tamFolha = 0;
	}

	public Samambaia1(String nome, String grupoPlanta, Ambiente1 ambiente1, String tipoFolhagem, int tamFolha){
		super(nome, grupoPlanta, ambiente1);
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
