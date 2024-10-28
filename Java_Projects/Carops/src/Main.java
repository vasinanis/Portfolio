import java.util.ArrayList;
import java.util.List;
public class Main {
public static void main(String[] args) {
	
	
        ArrayList<ErgasiaEpiskevis> ErgasiaEpiskevis = new ArrayList<>();

        
        ErgasiaEpiskevis ErgasiaEpiskevis1 = new ErgasiaEpiskevis("Allagi ladiwn", 20);
        ErgasiaEpiskevis.add(ErgasiaEpiskevis1);

        ErgasiaEpiskevis ErgasiaEpiskevis2 = new ErgasiaEpiskevis("Allagi filtrou kampinas", 5);
        ErgasiaEpiskevis.add(ErgasiaEpiskevis2);

        ErgasiaEpiskevis ErgasiaEpiskevis3 = new ErgasiaEpiskevis("Sunthrhsh frenwn", 30);
        ErgasiaEpiskevis.add(ErgasiaEpiskevis3);
        
        
        ArrayList<TyposAntallaktikou> TyposAntallaktikou = new ArrayList<>();

        
        TyposAntallaktikou TyposAntallaktikou1 = new TyposAntallaktikou("Suskevasia ladiwn 4L", 30);
        TyposAntallaktikou.add(TyposAntallaktikou1);

        TyposAntallaktikou TyposAntallaktikou2 = new TyposAntallaktikou("Filtro ladiou", 20);
        TyposAntallaktikou.add(TyposAntallaktikou2);

        TyposAntallaktikou TyposAntallaktikou3 = new TyposAntallaktikou("Filtro kampinas", 30);
        TyposAntallaktikou.add(TyposAntallaktikou3);

        TyposAntallaktikou TyposAntallaktikou4 = new TyposAntallaktikou("Takaki frenwn empros troxou", 5);
        TyposAntallaktikou.add(TyposAntallaktikou4);

        TyposAntallaktikou TyposAntallaktikou5 = new TyposAntallaktikou("Takaki frenwn pisw troxou", 5);
        TyposAntallaktikou.add(TyposAntallaktikou5);

        TyposAntallaktikou TyposAntallaktikou6 = new TyposAntallaktikou("Ygro frenwn", 10);
        TyposAntallaktikou.add(TyposAntallaktikou6);
        
        List<ErgasiaEpiskevis> ListaErgasiaEpiskevis1 = new ArrayList<>();
        List<TyposAntallaktikou> ListaTyposAntallaktikou1 = new ArrayList<>();

        ListaErgasiaEpiskevis1.add(ErgasiaEpiskevis1);
        ListaErgasiaEpiskevis1.add(ErgasiaEpiskevis2);

        ListaTyposAntallaktikou1.add(TyposAntallaktikou1);
        ListaTyposAntallaktikou1.add(TyposAntallaktikou2);
        ListaTyposAntallaktikou1.add(TyposAntallaktikou3);
        
        Episkevi Episkevi1 = new Episkevi(ListaErgasiaEpiskevis1, ListaTyposAntallaktikou1, 1);
        
        
        List<ErgasiaEpiskevis> ListaErgasiaEpiskevis2 = new ArrayList<>();
        List<TyposAntallaktikou> ListaTyposAntallaktikou2 = new ArrayList<>();

        ListaErgasiaEpiskevis2.add(ErgasiaEpiskevis3);
        
        ListaTyposAntallaktikou2.add(TyposAntallaktikou4);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou4);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou4);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou4);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou5);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou5);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou5);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou5);
        ListaTyposAntallaktikou2.add(TyposAntallaktikou6);
        
        Episkevi Episkevi2 = new Episkevi(ListaErgasiaEpiskevis2, ListaTyposAntallaktikou2, 2);
        
        System.out.println("Ergasies Episkeuhs:");
        System.out.println("Onoma: " + ErgasiaEpiskevis1.getEpiskevi() + ", Timh: " + ErgasiaEpiskevis1.getTimh() + " euro");
        System.out.println("Onoma: " + ErgasiaEpiskevis2.getEpiskevi() + ", Timh: " + ErgasiaEpiskevis2.getTimh() + " euro");
        System.out.println("Onoma: " + ErgasiaEpiskevis3.getEpiskevi() + ", Timh: " + ErgasiaEpiskevis3.getTimh() + " euro");
        System.out.println();

        
        System.out.println("Typoi Antallaktikwn:");
        System.out.println("Onoma: " + TyposAntallaktikou1.getAntallaktiko() + ", Kostos: " + TyposAntallaktikou1.getKostos() + " euro");
        System.out.println("Onoma: " + TyposAntallaktikou2.getAntallaktiko() + ", Kostos: " + TyposAntallaktikou2.getKostos() + " euro");
        System.out.println("Onoma: " + TyposAntallaktikou3.getAntallaktiko() + ", Kostos: " + TyposAntallaktikou3.getKostos() + " euro");
        System.out.println("Onoma: " + TyposAntallaktikou4.getAntallaktiko() + ", Kostos: " + TyposAntallaktikou4.getKostos() + " euro");
        System.out.println("Onoma: " + TyposAntallaktikou5.getAntallaktiko() + ", Kostos: " + TyposAntallaktikou5.getKostos() + " euro");
        System.out.println("Onoma: " + TyposAntallaktikou6.getAntallaktiko() + ", Kostos: " + TyposAntallaktikou6.getKostos() + " euro");
        System.out.println();

        
        System.out.println("Episkeves:");
        System.out.println("Diarkeia Episkevis: " + Episkevi1.getDiarkeiaEpiskevis() + " hmeres");
        System.out.println("Synoliko Kostos: " + Episkevi1.getTotalCost() + " euro");
        System.out.println("Diarkeia Episkevis: " + Episkevi2.getDiarkeiaEpiskevis() + " hmeres");
        System.out.println("Synoliko Kostos: " + Episkevi2.getTotalCost() + " euro");        
        System.out.println();
        }
    

        
        
        


       
        }
    


