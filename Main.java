import java.util.Random;

public class Main
{
    public static void main(String[] args)
    {
        Random random = new Random();
        Carta[] mazzo= new Carta[5];
        char[] semi={'q','p','c','f'};
        int[] nummero={1,2,3,4,5,6,7,8,9,10,11,12,13};
        for(int a=0;a<5;a++)
        {
            int num = random.nextInt(nummero.length);
            int seme= random.nextInt(semi.length);
            mazzo[a]= new Carta(semi[seme],nummero[num]);
        }
        System.out.println("prima mano del giocatore");
        for (Carta carte : mazzo)
        {
            System.out.println("carta\t" + carte.toString());
        }
        for (int i = 0; i < mazzo.length; i++)
        {
            for (int b = 0; b < mazzo.length; b++)
            {
                if (mazzo[i].getSeme() == mazzo[b].getSeme() && mazzo[i].getNummerro() == mazzo[b].getNummerro() && i != b)
                {
                    System.out.println("trovata carta " + mazzo[i].toString());
                    int num = random.nextInt(nummero.length);
                    int seme = random.nextInt(semi.length);
                    mazzo[i] = new Carta(semi[seme], nummero[num]);
                    System.out.println("carta sostituita con " + mazzo[i].toString());
                    b = 0;

                }
            }
        }
        System.out.println("mano finale di carte");
        for (Carta carte : mazzo) {
            System.out.println("carta\t" + carte.toString());
        }
    }
}