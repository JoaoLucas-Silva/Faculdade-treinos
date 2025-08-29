// João Lucas Silva de Souza; RA: 2649250

public class Ambiente{

	private float temperatura;
    	private String iluminacao;
    	private Localizacao1 localizacao1;

    	public Ambiente(){
        	temperatura = 0;
        	iluminacao = "";
        	localizacao1 = new Localizacao1();
    	}
    
    // Polimorfismo sobrecarga
    	public Ambiente(float temperatura, String iluminacao, Localizacao1 localizacao1){
        	this.temperatura = temperatura;
        	this.iluminacao = iluminacao;
        	this.localizacao1 = localizacao1;
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

    	public void setLocalizacao(Localizacao1 localizacao1){
        	this.localizacao1 = localizacao1;
    	}

    	public Localizacao1 getLocalizacao(){
        	return localizacao1;
    	}
}
