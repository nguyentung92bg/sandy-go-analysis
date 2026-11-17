// Namespace: 
private sealed class YachtRacingExpr.Parser // TypeDefIndex: 4123
{
	// Fields
	public readonly string S; // 0x10
	public int Pos; // 0x18
	private readonly Dictionary<string, double> _vars; // 0x20
	private readonly Random _rng; // 0x28

	// Properties
	private char Peek { get; }

	// Methods

	// RVA: 0x2259474 Offset: 0x2255474 VA: 0x2259474
	public void .ctor(string s, Dictionary<string, double> vars, Random rng) { }

	// RVA: 0x2259568 Offset: 0x2255568 VA: 0x2259568
	private char get_Peek() { }

	// RVA: 0x22594D4 Offset: 0x22554D4 VA: 0x22594D4
	public double ParseExpression() { }

	// RVA: 0x225959C Offset: 0x225559C VA: 0x225959C
	private double ParseTerm() { }

	// RVA: 0x2259634 Offset: 0x2255634 VA: 0x2259634
	private double ParsePower() { }

	// RVA: 0x22596E4 Offset: 0x22556E4 VA: 0x22596E4
	private double ParseUnary() { }

	// RVA: 0x2259750 Offset: 0x2255750 VA: 0x2259750
	private double ParsePrimary() { }

	// RVA: 0x2259D44 Offset: 0x2255D44 VA: 0x2259D44
	private double Call(string fn) { }

	// RVA: 0x2259C60 Offset: 0x2255C60 VA: 0x2259C60
	private void Expect(char c) { }

	[CompilerGenerated]
	// RVA: 0x225A938 Offset: 0x2256938 VA: 0x225A938
	internal static double <Call>g__A|12_0(int i, ref YachtRacingExpr.Parser.<>c__DisplayClass12_0 ) { }
}

