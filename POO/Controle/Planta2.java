// João Lucas Silva de Souza; RA: 2649250

public class Planta2 {

    	private String nome;
    	private String grupoPlanta;
    	private Ambiente1 ambiente1;

   	public Planta2(){
        	nome = "";
        	grupoPlanta = "";
        	ambiente1 = new Ambiente1();
    	}

	public Planta2(String nome, String grupoPlanta, Ambiente1 ambiente1){
		this.nome = nome;
        	this.grupoPlanta = grupoPlanta;
        	this.ambiente1 = ambiente1;
    	}

    	public void setNome(String nome){
        	this.nome = nome;
    	}

    	public String getNome(){
        	return nome;
    	}

   	public void setGrupoPlanta(String grupoPlanta){
        	this.grupoPlanta = grupoPlanta;
    	}

    	public String getGrupoPlanta(){
        	return grupoPlanta;
    	}

    	public void setAmbiente(Ambiente1 ambiente1){
        	this.ambiente1 = ambiente1;
    	}

	public Ambiente1 getAmbiente(){
        	return ambiente1;
    	}
}
