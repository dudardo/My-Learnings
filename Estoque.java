import java.util.*;
import javax.swing.*;

class Estoque
{ 
  public static String tit="Gerenciar Estoque";
  
  public static void main(String args[])
  {
    String msg="Gerenciamento simples de Estoque Carro 2.0 (Erros de entrada não tratados)";
    LinkedList<Carro> est = new LinkedList<>();

    JOptionPane.showMessageDialog(null, msg, Estoque.tit, JOptionPane.PLAIN_MESSAGE);

    int n = Integer.parseInt(JOptionPane.showInputDialog(null,"Quantos carros há no estoque?", Estoque.tit, JOptionPane.PLAIN_MESSAGE));

    for(int i=0; i<n; i++)
    {
      String mod= JOptionPane.showInputDialog(null,"Insira o modelo do carro de id "+(i+1)+":", Estoque.tit, JOptionPane.PLAIN_MESSAGE);
      Double preco = Double.parseDouble(JOptionPane.showInputDialog(null,"Insira o preço do carro de id "+(i+1)+":", Estoque.tit, JOptionPane.PLAIN_MESSAGE));
      est.add(new Carro(i+1, mod, preco));
    }
    JOptionPane.showMessageDialog(null, "Dados preenchidos.", Estoque.tit, JOptionPane.PLAIN_MESSAGE);

    while(true)
    {
      int ID = Integer.parseInt(JOptionPane.showInputDialog(null,"Insira o id do carro desejado para compra (Respectivamente de 1 a N):", Estoque.tit, JOptionPane.PLAIN_MESSAGE));

      if(ID<1 || ID>n)//pra quem disse que nao ia tratar erros de entrada né
      {
        JOptionPane.showMessageDialog(null, "Id inválido! (Insira de 1 a N)", Estoque.tit, JOptionPane.PLAIN_MESSAGE);
        continue;
      }
      
      est.get(ID-1).buy();

      if(est.get(ID-1).sell)
      {
        JOptionPane.showMessageDialog(null, "Carro já vendido!", Estoque.tit, JOptionPane.PLAIN_MESSAGE);
        continue;
      }

      int soma=0;
      
      for(Carro i:est)if(!i.sell)soma++;
      JOptionPane.showMessageDialog(null, "Faltam vender " + soma + " carros." , Estoque.tit, JOptionPane.PLAIN_MESSAGE);
      
      if(soma==0)
      {
        JOptionPane.showMessageDialog(null, "Unidades vendidas na totalidade, finalizando programa... ", Estoque.tit, JOptionPane.PLAIN_MESSAGE);
        break;      
      }else
        JOptionPane.showMessageDialog(null, "Faltam vender " + soma + " carros." , Estoque.tit, JOptionPane.PLAIN_MESSAGE);
    }

  }

 static class Carro
 {
  int id;
  String modelo;
  double preco;
  boolean sell;  

  Carro(int Id, String Modelo, double Preco)
  {
    id=Id;
    modelo=Modelo;
    preco=Preco;
    sell=false;
  }

  void buy()
  {
   if(sell==false)
   {
   String SN=JOptionPane.showInputDialog(null,"O carro foi comprado? (S ou N)", Estoque.tit, JOptionPane.PLAIN_MESSAGE);
   
   if(SN.equals("S"))
   {
    JOptionPane.showMessageDialog(null, "Venda processada.", Estoque.tit, JOptionPane.PLAIN_MESSAGE);
    sell=true;
   }
   }
  }
  
 }
}
