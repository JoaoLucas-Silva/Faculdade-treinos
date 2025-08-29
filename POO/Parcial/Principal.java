// João Lucas Silva de Souza; RA: 2649250

public class Principal {

	public static void main(String arg[]) {
		Leitura5 l = new Leitura5();
		Cacto c1 = null;
		Samambaia s1 = null;
		Anturio a1 = null;

		boolean continua = true;
		
    do{
      int opcao = Integer.parseInt(l.entDados("\n1 - Cadastrar Cacto\n2 - Cadastrar Samambaia\n3 - Cadastrar Anturio\n4 - Sair\nEscolha uma opção: "));
      
      switch (opcao) {
			case 1:
				c1 = cadastrarCacto(l);
				break;
			case 2:
				s1 = cadastrarSamambaia(l);
				break;
			case 3:
				a1 = cadastrarAnturio(l);
				break;
			case 4:
			  System.out.println("Saindo...");
			    continua = false;
			    break;
			default:
				System.out.println("Opção inválida!");
		  }
    }while(continua == true);
  }

	public static Cacto cadastrarCacto(Leitura5 l) {
		Cacto c1 = new Cacto();
		c1.setNome(l.entDados("\nDigite o nome do Cacto: "));
		c1.setGrupoPlanta(l.entDados("\nDigite o grupo do Cacto: "));
		c1.setQuantEspinhos(Integer.parseInt(l.entDados("\nQuantidade de espinhos: ")));
		c1.setToleranciaSeca(l.entDados("\nTolerância à seca (ex: Alta, Media): "));
		// Polimorfismo sobrescrita
		c1.regar();
		
    // Reflexividade
		c1.getAmbiente().setTemperatura(Float.parseFloat(l.entDados("\nTemperatura ideal do ambiente do cacto: "))); 
		c1.getAmbiente().setIluminacao(l.entDados("\nTipo de iluminacao do ambiente: "));
		c1.getAmbiente().getLocalizacao().setNomeComodo(l.entDados("\nNome do comodo (ex: Sala, Varanda): "));
		c1.getAmbiente().getLocalizacao().setAndarComodo(Integer.parseInt(l.entDados("\nAndar do comodo: ")));
    
    // Tratamento de exceção
		try { 
			c1.setTamanho(Integer.parseInt(l.entDados("\nTamanho do cacto (em cm): ")));
		} catch (TamNegException tamNeg) {
			tamNeg.negativoTam();
			c1 = (Cacto) tamNeg.rePlantaNeg(c1);
		} catch (TamGrdException tamGrd) {
			tamGrd.grandeTam();
			c1 = (Cacto) tamGrd.rePlantaGrd(c1);
		}
		
		System.out.println("\n\n===== Dados do Cacto =====");
		System.out.println("Nome: " + c1.getNome());
		System.out.println("Grupo: " + c1.getGrupoPlanta());
		System.out.println("Tamanho: " + c1.getTamanho());
		System.out.println("Quantidade regada de agua: " + c1.getQntAgua() + " ml");
		System.out.println("Espinhos: " + c1.getQuantEspinhos());
		System.out.println("Tolerancia a seca: " + c1.getToleranciaSeca());
    // Reflexividade
		System.out.println("Ambiente: " + c1.getAmbiente().getIluminacao() + ", " + c1.getAmbiente().getTemperatura() + "°C");
		// Reflexividade
		System.out.println("Local: " + c1.getAmbiente().getLocalizacao().getNomeComodo() + " (Andar " + c1.getAmbiente().getLocalizacao().getAndarComodo() + ")");

		return c1;
	}

	public static Samambaia cadastrarSamambaia(Leitura5 l) {
		Samambaia s1 = new Samambaia();
		s1.setNome(l.entDados("\n\nDigite o nome da Samambaia: "));
		s1.setGrupoPlanta(l.entDados("\nDigite o grupo da Samambaia: "));
		s1.setTipoFolhagem(l.entDados("\nTipo de folhagem (ex: Pendente, Volumosa): "));
		s1.setTamFolha(Integer.parseInt(l.entDados("\nTamanho médio da folha (em cm): ")));
		// Polimorfismo sobrescrita
		s1.regar();
    
    // Reflexividade
		s1.getAmbiente().setTemperatura(Float.parseFloat(l.entDados("\nTemperatura ideal do ambiente da samambaia: ")));
		s1.getAmbiente().setIluminacao(l.entDados("\nTipo de iluminacao do ambiente: "));
		s1.getAmbiente().getLocalizacao().setNomeComodo(l.entDados("\nNome do comodo (ex: Banheiro, Sala): ")); // Reflexividade
		s1.getAmbiente().getLocalizacao().setAndarComodo(Integer.parseInt(l.entDados("\nAndar do comodo: "))); // Reflexividade
    
    // Tratamento de exceção
		try {
			s1.setTamanho(Integer.parseInt(l.entDados("\nTamanho da samambaia (em cm): ")));
		} catch (TamNegException tamNeg) {
			tamNeg.negativoTam();
			s1 = (Samambaia) tamNeg.rePlantaNeg(s1);
		} catch (TamGrdException tamGrd) {
			tamGrd.grandeTam();
			s1 = (Samambaia) tamGrd.rePlantaGrd(s1);
		}
		
		System.out.println("\n\n===== Dados da Samambaia =====");
	    System.out.println("Nome: " + s1.getNome());
		System.out.println("Grupo: " + s1.getGrupoPlanta());
		System.out.println("Tamanho: " + s1.getTamanho());
		System.out.println("Quantidade regada de agua: " + s1.getQntAgua() + " ml");
		System.out.println("Tipo de folhagem: " + s1.getTipoFolhagem());
		System.out.println("Tamanho da folha: " + s1.getTamFolha() + " cm");
		// Reflexividade
		System.out.println("Ambiente: " + s1.getAmbiente().getIluminacao() + ", " + s1.getAmbiente().getTemperatura() + "°C");
		// Reflexividade
		System.out.println("Local: " + s1.getAmbiente().getLocalizacao().getNomeComodo() + " (Andar " + s1.getAmbiente().getLocalizacao().getAndarComodo() + ")");

		return s1;
	}

	public static Anturio cadastrarAnturio(Leitura5 l) {
		Anturio a1 = new Anturio();
		a1.setNome(l.entDados("\n\nDigite o nome da Anturio: "));
		a1.setGrupoPlanta(l.entDados("\nDigite o grupo da Anturio: "));
		a1.setCorFlor(l.entDados("\nCor da flor: "));
		a1.setFormatoFlor(l.entDados("\nFormato da flor (ex: Aberta, Fechada):"));
		// Polimorfismo sobrescrita
		a1.regar();

    // Reflexividade
		a1.getAmbiente().setTemperatura(Float.parseFloat(l.entDados("\nTemperatura ideal do ambiente do Anturio: ")));
		a1.getAmbiente().setIluminacao(l.entDados("\nTipo de iluminacao do ambiente: "));
		a1.getAmbiente().getLocalizacao().setNomeComodo(l.entDados("\nNome do comodo (ex: Banheiro, Sala): "));
		a1.getAmbiente().getLocalizacao().setAndarComodo(Integer.parseInt(l.entDados("\nAndar do comodo: ")));
		
    // Tratamento de exceção
		try {
			a1.setTamanho(Integer.parseInt(l.entDados("\nTamanho do anturio (em cm): ")));
		} catch (TamNegException tamNeg) {
			tamNeg.negativoTam();
			a1 = (Anturio) tamNeg.rePlantaNeg(a1);
		} catch (TamGrdException tamGrd) {
			tamGrd.grandeTam();
			a1 = (Anturio) tamGrd.rePlantaGrd(a1);
		}
    
    System.out.println("\n\n===== Dados do Anturio =====");
	  System.out.println("Nome: " + a1.getNome());
		System.out.println("Grupo: " + a1.getGrupoPlanta());
		System.out.println("Tamanho: " + a1.getTamanho());
		System.out.println("Quantidade regada de agua: " + a1.getQntAgua() + " ml");
	  System.out.println("Cor da flor: " + a1.getCorFlor());
		System.out.println("Formato da flor: " + a1.getFormatoFlor());
		// Reflexividade
		System.out.println("Ambiente: " + a1.getAmbiente().getIluminacao() + ", " + a1.getAmbiente().getTemperatura() + "°C");
		// Reflexividade
		System.out.println("Local: " + a1.getAmbiente().getLocalizacao().getNomeComodo() + " (Andar " + a1.getAmbiente().getLocalizacao().getAndarComodo() + ")");
    
		return a1;
	}
} 

