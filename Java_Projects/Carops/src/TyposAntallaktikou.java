public class TyposAntallaktikou {
	private String antallaktiko;
    private int kostos;

    public TyposAntallaktikou (String antallaktiko, int kostos) {
        this.antallaktiko = antallaktiko;
        this.kostos = kostos;
    }

	public String getAntallaktiko() {
        return antallaktiko;
    }

    public double getKostos() {
        return kostos;
    }

}
