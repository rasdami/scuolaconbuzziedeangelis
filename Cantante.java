public class Cantante extends Thread
{
   private String tipoVoce;
   private String nome;
   private String testo;

   public Cantante(String tipoVoce, String nome, String testo)
   {
       this.tipoVoce = tipoVoce;
       this.nome = nome;
       this.testo = testo;
   }

    @Override
    public void run() {
        System.out.println("Nome: "+getNome()+" tipo di voce:"+getTipoVoce()+"\n");
        System.out.println(getTesto()+"\n");
    }

    public String getTipoVoce() {
        return tipoVoce;
    }

    public void setTipoVoce(String tipoVoce) {
        this.tipoVoce = tipoVoce;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTesto() {
        return testo;
    }

    public void setTesto(String testo) {
        this.testo = testo;
    }
}
