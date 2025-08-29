// João Lucas Silva de Souza; RA: 2649250

public class Localizacao1 {

	private String nomeComodo;
	private int andarComodo;
  
	public Localizacao1(){
		nomeComodo = "";
		andarComodo = 0;
	}
  
  // Polimorfismo sobrecarga
	public Localizacao1(String nomeComodo, int andarComodo){
		this.nomeComodo = nomeComodo;
		this.andarComodo = andarComodo;
	}

	public void setNomeComodo(String nomeComodo){
		this.nomeComodo = nomeComodo;
	}

	public String getNomeComodo(){
		return nomeComodo;
	}

	public void setAndarComodo(int andarComodo){
		this.andarComodo = andarComodo;
	}

	public int getAndarComodo(){
		return andarComodo;
	}
}
