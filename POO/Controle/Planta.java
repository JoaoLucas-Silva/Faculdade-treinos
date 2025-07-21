// João Lucas Silva de Souza; RA: 2649250

public class Planta{

    	private String nome;
    	private String grupoPlanta;
    	private Ambiente ambiente;

   	public Planta(){
        	nome = "";
        	grupoPlanta = "";
        	ambiente = new Ambiente();
    	}

	public Planta(String nome, String grupoPlanta, Ambiente ambiente){
		this.nome = nome;
        	this.grupoPlanta = grupoPlanta;
        	this.ambiente = ambiente;
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

    	public void setAmbiente(Ambiente ambiente){
        	this.ambiente = ambiente;
    	}

	public Ambiente getAmbiente(){
        	return ambiente;
    	}
}
