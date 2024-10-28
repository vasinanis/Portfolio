import java.util.List;

public class Episkevi {
    private List<ErgasiaEpiskevis> ErgasiaEpiskevis;
    private List<TyposAntallaktikou> TyposAntallaktikou;
    private int DiarkeiaEpiskevis;

    public Episkevi(List<ErgasiaEpiskevis> ErgasiaEpiskevis, List<TyposAntallaktikou> TyposAntallaktikou, int DiarkeiaEpiskevis) {
        this.ErgasiaEpiskevis = ErgasiaEpiskevis;
        this.TyposAntallaktikou = TyposAntallaktikou;
        this.DiarkeiaEpiskevis = DiarkeiaEpiskevis;
    }

    public List<ErgasiaEpiskevis> getErgasiaEpiskevis() {
        return ErgasiaEpiskevis;
    }

    public List<TyposAntallaktikou> getTyposAntallaktikou() {
        return TyposAntallaktikou;
    }

    public int getDiarkeiaEpiskevis() {
        return DiarkeiaEpiskevis;
    }
    
    public double getTotalCost() {
        double totalCost = 0;

       
        for (ErgasiaEpiskevis ErgasiaEpiskevis : ErgasiaEpiskevis) {
            totalCost += ErgasiaEpiskevis.getTimh();
        }

        
        for (TyposAntallaktikou TyposAntallaktikou : TyposAntallaktikou) {
            double KostosAntallaktikou = TyposAntallaktikou.getKostos();
            
            totalCost += KostosAntallaktikou;
        }

        return totalCost;
}
}



