public class Carta
{
   private char seme;
   private int nummerro;
    public Carta() {}
    public Carta(char seme, int nummerro)
    {
        this.seme = seme;
        this.nummerro = nummerro;
    }
    public char getSeme()
    {
        return seme;
    }
    public void setSeme(char seme)
    {
        this.seme = seme;
    }
    public int getNummerro()
    {
        return nummerro;
    }
    public void setNummerro(int nummerro)
    {
        this.nummerro = nummerro;
    }
    @Override
    public String toString() {
        return this.seme+"\t"+this.nummerro+"\n";
    }
}
