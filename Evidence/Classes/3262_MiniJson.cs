// Namespace: Dino.BusSand.App
public static class MiniJson // TypeDefIndex: 3262
{
	// Methods

	// RVA: 0x2154DC4 Offset: 0x2150DC4 VA: 0x2154DC4
	public static object Parse(string json) { }

	// RVA: 0x2155004 Offset: 0x2151004 VA: 0x2155004
	private static void Skip(string s, ref int i) { }

	// RVA: 0x2154E04 Offset: 0x2150E04 VA: 0x2154E04
	private static object ParseValue(string s, ref int i) { }

	// RVA: 0x2155094 Offset: 0x2151094 VA: 0x2155094
	private static Dictionary<string, object> ParseObject(string s, ref int i) { }

	// RVA: 0x2155230 Offset: 0x2151230 VA: 0x2155230
	private static List<object> ParseArray(string s, ref int i) { }

	// RVA: 0x21553C0 Offset: 0x21513C0 VA: 0x21553C0
	private static string ParseString(string s, ref int i) { }

	// RVA: 0x21555B8 Offset: 0x21515B8 VA: 0x21555B8
	private static object ParseNumber(string s, ref int i) { }

	// RVA: 0x21556EC Offset: 0x21516EC VA: 0x21556EC
	public static string Serialize(object o) { }

	// RVA: 0x2155760 Offset: 0x2151760 VA: 0x2155760
	private static void Write(StringBuilder sb, object o) { }

	// RVA: 0x2155FEC Offset: 0x2151FEC VA: 0x2155FEC
	private static void WriteString(StringBuilder sb, string s) { }

	// RVA: 0x21561EC Offset: 0x21521EC VA: 0x21561EC
	public static Dictionary<string, object> Obj(object o) { }

	// RVA: 0x2156264 Offset: 0x2152264 VA: 0x2156264
	public static List<object> Arr(object o) { }

	// RVA: 0x21562DC Offset: 0x21522DC VA: 0x21562DC
	public static int Int(object o, int fallback = 0) { }

	// RVA: 0x2156378 Offset: 0x2152378 VA: 0x2156378
	public static long Long(object o, long fallback = 0) { }

	// RVA: 0x21563FC Offset: 0x21523FC VA: 0x21563FC
	public static float Float(object o, float fallback = 0) { }

	// RVA: 0x21564D0 Offset: 0x21524D0 VA: 0x21564D0
	public static string Str(object o, string fallback = "") { }

	// RVA: 0x21565A8 Offset: 0x21525A8 VA: 0x21565A8
	public static object Get(Dictionary<string, object> d, string k) { }
}

