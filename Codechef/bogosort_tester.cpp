import java.math.BigInteger;
import java.util.Scanner;
 
public class Main {
	public static void main(String[] args){
		//new Bogosort().precompute(150);
		new Bogosort().solveAll(args);
	}
}
 
class Bogosort {
	Rational[] K, L, P, M, F, G, H;
	BigInteger[] C;
	private static final int MAXN = 150;
	Bogosort(){
		K = new Rational[MAXN+1];
		L = new Rational[MAXN+1];
		P = new Rational[MAXN+1];
		M = new Rational[MAXN+1];
		F = new Rational[MAXN+1];
		G = new Rational[MAXN+1];
		H = new Rational[MAXN+1];
		
		C = new BigInteger[MAXN+1];
		for(int i=0;i<=MAXN;++i)
			C[i] = new BigInteger(""+i);
	}
 
	public void solveAll(String[] args){
		precompute(MAXN);
		Scanner scanner = new Scanner(System.in);
		int cases = scanner.nextInt();
		while(cases-- > 0){
			int n = scanner.nextInt();
			if(n < 2 || n > MAXN) throw new IllegalArgumentException("n should be in [2, "+MAXN+"]");
			System.out.println(F[n]);
		}
	}
	
	public void precompute(int MAX){
		K[2] = Rational.ZERO;
		G[2] = new Rational(3);
		H[2] = new Rational(6);
		M[2] = Rational.ONE;
		L[2] = Rational.ZERO;
		F[2] = new Rational(2);
		P[2] = Rational.ONE;
		
		F[1] = Rational.ZERO;
		
		precomputePandM(MAX);
		
		for(int i=3;i<=MAX;++i){
			doCompute(i);
		}
	}
 
	private void precomputePandM(int max) {
		BigInteger X = new BigInteger("2"), Y = new BigInteger("1"), Z = new BigInteger("1");
		for(int i=3;i<=max;++i){
			X = X.multiply(C[i]);
			Y = Y.multiply(C[i-1]);
			Z = Z.multiply(C[i-2]);
			BigInteger W = Y.multiply(C[2]).subtract(Z);
			P[i] = new Rational(W);
			M[i] = new Rational(X.subtract(W));
		}
	}
 
	private void doCompute(int n) {
		K[n] = K[n-1].add(G[n-1]);
		L[n] = L[n-1].add(H[n-1]);
		F[n] = new Rational(n+1).multiply(K[n]).add(Rational.ONE).subtract(L[n]).add(M[n]).divide(P[n]);
		G[n] = M[n].multiply(F[n].add(Rational.ONE));
		H[n] = G[n].multiply(new Rational(n));
		
		F[n].normalize();
		G[n].normalize();
		H[n].normalize();
		K[n].normalize();
		L[n].normalize();
		
		//System.out.println("Expected for "+n+" = "+F[n]);
	}
}
 
class Rational{
	public BigInteger x, y;
	public static final Rational ONE = new Rational(1);
	public static final Rational ZERO = new Rational(0);
	public Rational(int numerator, int denominator){
		x = new BigInteger(""+numerator);
		y = new BigInteger(""+denominator);
	}
	public Rational(int numerator){
		this(numerator, 1);
	}
	public Rational(BigInteger numerator){
		this(numerator, BigInteger.ONE);
	}
	public Rational(BigInteger numerator, BigInteger denominator){
		x = numerator;
		y = denominator;
		
	}
	
	public String toString(){
		normalize();
		if(y.equals(new BigInteger("1"))) return x.toString();
		return x+"/"+y;
	}
	
	public Rational multiply(Rational b){
		return new Rational(x.multiply(b.x), y.multiply(b.y));
	}
	public Rational divide(Rational b){
		return new Rational(x.multiply(b.y), y.multiply(b.x));
	}
	public Rational add(Rational b){
		BigInteger X = x.multiply(b.y).add(y.multiply(b.x));
		BigInteger Y = y.multiply(b.y);
		return new Rational(X,Y);
	}
	public Rational negate(){
		return new Rational(x.negate(), y);
	}
	public Rational subtract(Rational b){
		return add(b.negate());
	}
	public void normalize(){
		BigInteger g = gcd(x.abs(), y.abs());
		x = x.divide(g);
		y = y.divide(g);
		if(!y.abs().equals(y)){
			x = x.negate();
			y = y.negate();
		}
	}
	private BigInteger gcd(BigInteger a, BigInteger b){
		while(!a.equals(BigInteger.ZERO)){
			BigInteger temp = b.mod(a);
			b = a;
			a = temp;
		}
		return b;
	}
}
 