// João Lucas Silva de Souza; RA: 2649250

public class ExecPlanta{

	public static void main(String arg[]){

		Leitura3 l = new Leitura3();
		Cacto1 c1 = new Cacto1();
		Samambaia1 s1 = new Samambaia1();

		c1.setNome(l.entDados("\nDigite o nome do Cacto: "));
		c1.setGrupoPlanta(l.entDados("\nDigite o grupo do Cacto: "));
		c1.setQuantEspinhos(Integer.parseInt(l.entDados("\nQuantidade de espinhos: ")));
		c1.setToleranciaSeca(l.entDados("\nTolerância à seca (ex: Alta, Media): "));

		c1.getAmbiente().setTemperatura(Float.parseFloat(l.entDados("\nTemperatura ideal do ambiente do cacto: ")));
		c1.getAmbiente().setIluminacao(l.entDados("\nTipo de iluminacao do ambiente: "));
		c1.getAmbiente().getLocalizacao().setNomeComodo(l.entDados("\nNome do comodo (ex: Sala, Varanda): "));
		c1.getAmbiente().getLocalizacao().setAndarComodo(Integer.parseInt(l.entDados("\nAndar do comodo: ")));

		s1.setNome(l.entDados("\n\nDigite o nome da Samambaia: "));
		s1.setGrupoPlanta(l.entDados("\nDigite o grupo da Samambaia: "));
		s1.setTipoFolhagem(l.entDados("\nTipo de folhagem (ex: Pendente, Volumosa): "));
		s1.setTamFolha(Integer.parseInt(l.entDados("\nTamanho médio da folha (em cm): ")));

		s1.getAmbiente().setTemperatura(Float.parseFloat(l.entDados("\nTemperatura ideal do ambiente da samambaia: ")));
		s1.getAmbiente().setIluminacao(l.entDados("\nTipo de iluminacao do ambiente: "));
		s1.getAmbiente().getLocalizacao().setNomeComodo(l.entDados("\nNome do comodo (ex: Banheiro, Sala): "));
		s1.getAmbiente().getLocalizacao().setAndarComodo(Integer.parseInt(l.entDados("\nAndar do comodo: ")));

		System.out.println("\n\n===== Dados do Cacto =====");
		System.out.println("Nome: " + c1.getNome());
		System.out.println("Grupo: " + c1.getGrupoPlanta());
		System.out.println("Espinhos: " + c1.getQuantEspinhos());
		System.out.println("Tolerancia a seca: " + c1.getToleranciaSeca());
		System.out.println("Ambiente: " + c1.getAmbiente().getIluminacao() + ", " + c1.getAmbiente().getTemperatura() + "°C");
		System.out.println("Local: " + c1.getAmbiente().getLocalizacao().getNomeComodo() + " (Andar " + c1.getAmbiente().getLocalizacao().getAndarComodo() + ")");

		System.out.println("\n\n===== Dados da Samambaia =====");
		System.out.println("Nome: " + s1.getNome());
		System.out.println("Grupo: " + s1.getGrupoPlanta());
		System.out.println("Tipo de folhagem: " + s1.getTipoFolhagem());
		System.out.println("Tamanho da folha: " + s1.getTamFolha() + " cm");
		System.out.println("Ambiente: " + s1.getAmbiente().getIluminacao() + ", " + s1.getAmbiente().getTemperatura() + "°C");
		System.out.println("Local: " + s1.getAmbiente().getLocalizacao().getNomeComodo() + " (Andar " + s1.getAmbiente().getLocalizacao().getAndarComodo() + ")");
	}
}
