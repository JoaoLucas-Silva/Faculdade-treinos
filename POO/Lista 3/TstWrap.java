// João Lucas Silva de Souza; RA: 2649250

// Classe main

public class TstWrap{

	public static void main(String arg[]){
		
		Leitura1 l = new Leitura1();
		int op;

		System.out.println("\nMenu:\n1 - Integer\n2 - Boolean\n3 - Character\n4 - Double\n5 - Byte\n6 - Short\n7 - Float\n8 - Long\n0 - Sair\n");
		
		op = Integer.parseInt(l.entDados("Digite a opcao: "));
			
		switch(op){
			case 1:
				Integer numInt = Integer.parseInt(l.entDados("\nDigite um numero inteiro: "));
				Character charInt = l.entDados("\nDigite uma letra:").charAt(0);

				TstInt objInt = new TstInt();

				objInt.floatHash(numInt, charInt);
			break;
			
			case 2:
				boolean valor1 = Boolean.parseBoolean(l.entDados("\nDigite o primeiro valor booleano (true ou false):"));
				boolean valor2 = Boolean.parseBoolean(l.entDados("\nDigite o segundo valor booleano (true ou false):"));
				String valor3 = l.entDados("\nDigite alguma dessas palavras e veja se sao True ou False - 'professor', 'aluno', 'utfpr' -:");

				System.setProperty("professor", "true");
				System.setProperty("utfpr", "true");
				
				TstBool objBool = new TstBool();

				objBool.logicGet(valor1, valor2, valor3);
			break;
			
			case 3:
				char carac1 = l.entDados("\nDigite uma letra:").charAt(0);
				char carac2 = l.entDados("\nDigite uma outra letra:").charAt(0);
				
				char carac3 = l.entDados("\nDigite uma letra para ter o seu valor em uma base:").charAt(0);
				int base = Integer.parseInt(l.entDados("\nDigite a base que deseja:"));
				
				TstChar objChar = new TstChar();

				objChar.compBase(carac1, carac2, carac3, base);
			break;
			
			case 4:
				Double valorD = Double.parseDouble(l.entDados("\nDigite um valor para saber se e finito:"));		
				Double val1 = Double.parseDouble(l.entDados("\nDigite o primeiro valor para ser comparado:"));
				Double val2 = Double.parseDouble(l.entDados("\nDigite o segundo valor para ser comparado:"));

				TstDoub objDoub = new TstDoub();

				objDoub.finMax(valorD, val1, val2);
			break;

			case 5:
				String strByte = l.entDados("\nDigite uma string qualquer em hexadecimal ou octal (ex: 0x7F; 0177) para ter seu valor em bytes: ");
				Byte byteSt = Byte.parseByte(l.entDados("\nDigite um valor byte:"));


				TstByte objByte = new TstByte();

				objByte.teste(strByte, byteSt);
			break;

			case 6:
				short valorS1 = Short.parseShort(l.entDados("\nDigite o primeiro valor short: "));
        			short valorS2 = Short.parseShort(l.entDados("\nDigite o segundo valor short para inverter os bytes: "));

        			TstShort objShort = new TstShort();

       				objShort.unsRev(valorS1, valorS2);
			break;

			case 7:
				float hexaFt = Float.parseFloat(l.entDados("\nDigite um valor float para ter seu hexadecimal: "));
				int bitsF = Integer.parseInt(l.entDados("\nDigite um valor inteiro: "));

				TstFloat objFloat = new TstFloat();

				objFloat.hexBit(hexaFt, bitsF);
			break;
			
			case 8:
       				long vaL1 = Long.parseLong(l.entDados("\nDigite um valor para ter a contagem de bits 1:"));
				long vaL2 = Long.parseLong(l.entDados("\nDigite um valor para ter o valor em binario:"));
				
				TstLong objLong = new TstLong();
				
       				objLong.test(vaL1, vaL2);
			break;
			
			case 0:
				System.out.println("\nSaindo...");
				break;
			
			default:
				System.out.println("Opcao invalida");
			break;
		}
	}
}