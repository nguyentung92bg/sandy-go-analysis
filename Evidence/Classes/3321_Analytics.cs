// Namespace: Dino.BusSand.App
public static class Analytics // TypeDefIndex: 3321
{
	// Fields
	public static readonly List<string> Recent; // 0x0
	public static bool Verbose; // 0x8
	public static Action<string, Dictionary<string, object>> Sink; // 0x10
	private static string s_path; // 0x18
	private static int s_writes; // 0x20
	public const long MaxFileBytes = 2097152;
	private const int RollCheckEvery = 200;
	private static string s_gameId; // 0x28
	private static int s_level; // 0x30
	private static int s_designLevel; // 0x34
	private static int s_gameType; // 0x38
	private static int s_startNum; // 0x3C
	private static int s_playIndex; // 0x40

	// Methods

	// RVA: 0x216D0C8 Offset: 0x21690C8 VA: 0x216D0C8
	public static void Log(string evt, object[] kv) { }

	// RVA: 0x2174510 Offset: 0x2170510 VA: 0x2174510
	public static string ItemName(int id, bool infinite = False) { }

	// RVA: 0x2174690 Offset: 0x2170690 VA: 0x2174690
	public static string ReasonId(string reason) { }

	// RVA: 0x2174B5C Offset: 0x2170B5C VA: 0x2174B5C
	public static void Item(int id, long delta, string reason) { }

	// RVA: 0x216FF2C Offset: 0x216BF2C VA: 0x216FF2C
	public static void BeginAttempt(int level, int designLevel, int gameType, int startNum, int playIndex = 0) { }

	// RVA: 0x216FFF0 Offset: 0x216BFF0 VA: 0x216FFF0
	public static object[] L(object[] extra) { }

	// RVA: 0x2175378 Offset: 0x2171378 VA: 0x2175378
	private static void .cctor() { }
}

