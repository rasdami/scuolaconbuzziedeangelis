/*
* Autori: Karol Antonini, Mattia De Angelis
* Classe: 4bI
* Data: 23/01/24
* */
public class Main {
    public static void main(String[] args) throws InterruptedException {
       Cantante c1= new Cantante("tenore", "DUCA"," Bella figlia dell'amore,\n" +
               "Schiavo son dei vezzi tuoi;\n" +
               "Con un detto sol tu puoi\n" +
               "Le mie pene consolar.\n" +
               "Vieni e senti del mio core\n" +
               "Il frequente palpitar.");

       Cantante c2 = new Cantante("contralto", "MADDALENA", "Ah! ah! rido ben di core,\n" +
               "Che tai baie costan poco\n" +
               "Quanto valga il vostro gioco,\n" +
               "Mel credete, so apprezzar.\n" +
               "Son avvezza, bel signore,\n" +
               "Ad un simile scherzar.");

       Cantante c3= new Cantante("soprano", "GILDA", "Ah, così parlar d'amore\n" +
               "A me pur l'infame ho udito!\n" +
               "Infelice cor tradito,\n" +
               "Per angoscia non scoppiar.");

       Cantante c4 = new Cantante("baritono", "RIGOLETTO", "Taci, il piangere non vale...\n" +
               "Ch'ei mentiva sei sicura.\n" +
               "Taci, e mia sarà la cura\n" +
               "La vendetta d'affrettar.\n" +
               "Sì, pronta fia, sarà fatale,\n" +
               "Io saprollo fulminar.");

       c1.start();
       c1.join();
       c2.start();
       c2.join();
       c3.start();
       c4.start();
    }
}