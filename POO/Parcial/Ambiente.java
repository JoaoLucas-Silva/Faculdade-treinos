// João Lucas Silva de Souza; RA: 2649250

public class Ambiente{

	private float temperatura;
    	private String iluminacao;
    	private Localizacao localizacao;

    	public Ambiente(){
        	temperatura = 0;
        	iluminacao = "";
        	localizacao = new Localizacao();
    	}
    
    // Polimorfismo sobrecarga
    	public Ambiente(float temperatura, String iluminacao, Localizacao localizacao){
        	this.temperatura = temperatura;
        	this.iluminacao = iluminacao;
        	this.localizacao = localizacao;
    	}

    	public void setTemperatura(float temperatura){
        	this.temperatura = temperatura;
    	}

    	public float getTemperatura(){
        	return temperatura;
    	}

    	public void setIluminacao(String iluminacao){
        	this.iluminacao = iluminacao;
    	}

    	public String getIluminacao(){
        	return iluminacao;
    	}

    	public void setLocalizacao(Localizacao localizacao){
        	this.localizacao = localizacao;
    	}

    	public Localizacao getLocalizacao(){
        	return localizacao;
    	}
}
