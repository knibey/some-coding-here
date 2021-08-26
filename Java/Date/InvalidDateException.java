public class InvalidDateException extends Exception {
	public StringBuffer text;
    public InvalidDate(StringBuffer text) : text(text) {
    	this.text = text;
    }
}