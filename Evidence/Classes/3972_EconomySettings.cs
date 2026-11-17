// Namespace: Dino.BusSand.App.Meta
public static class EconomySettings // TypeDefIndex: 3972
{
	// Fields
	public const string RemoteRule = "economy";
	public const string Table = "TbMonetization";
	public const int SchemaVersion = 1;
	public const int DefaultUnlockGift = 1;
	[CompilerGenerated]
	private static string <ConfigId>k__BackingField; // 0x0
	[CompilerGenerated]
	private static string <Source>k__BackingField; // 0x8
	[CompilerGenerated]
	private static string <Summary>k__BackingField; // 0x10
	[CompilerGenerated]
	private static Action Changed; // 0x18
	public static Action RefreshRemote; // 0x20
	public static readonly Dictionary<string, string> BoosterRows; // 0x28
	public static readonly Dictionary<string, int> ItemNames; // 0x30
	private static string s_remoteJson; // 0x38
	private static bool s_built; // 0x40
	private static EconomySettings.Parsed s_parsed; // 0x48
	private static readonly Dictionary<string, Dictionary<string, object>> s_merged; // 0x50

	// Properties
	public static string ConfigId { get; set; }
	public static string Source { get; set; }
	public static string Summary { get; set; }
	public static int UnlockGift { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2204FE0 Offset: 0x2200FE0 VA: 0x2204FE0
	public static string get_ConfigId() { }

	[CompilerGenerated]
	// RVA: 0x2205038 Offset: 0x2201038 VA: 0x2205038
	private static void set_ConfigId(string value) { }

	[CompilerGenerated]
	// RVA: 0x22050A0 Offset: 0x22010A0 VA: 0x22050A0
	public static string get_Source() { }

	[CompilerGenerated]
	// RVA: 0x22050F8 Offset: 0x22010F8 VA: 0x22050F8
	private static void set_Source(string value) { }

	[CompilerGenerated]
	// RVA: 0x2205158 Offset: 0x2201158 VA: 0x2205158
	public static string get_Summary() { }

	[CompilerGenerated]
	// RVA: 0x22051B0 Offset: 0x22011B0 VA: 0x22051B0
	private static void set_Summary(string value) { }

	[CompilerGenerated]
	// RVA: 0x2205210 Offset: 0x2201210 VA: 0x2205210
	public static void add_Changed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x22052EC Offset: 0x22012EC VA: 0x22052EC
	public static void remove_Changed(Action value) { }

	// RVA: 0x22053C8 Offset: 0x22013C8 VA: 0x22053C8
	public static int get_UnlockGift() { }

	// RVA: 0x22054C8 Offset: 0x22014C8 VA: 0x22054C8
	public static Dictionary<string, object> Row(string id) { }

	[IteratorStateMachine(typeof(EconomySettings.<Rows>d__29))]
	// RVA: 0x220588C Offset: 0x220188C VA: 0x220588C
	public static IEnumerable<Dictionary<string, object>> Rows() { }

	// RVA: 0x22056AC Offset: 0x22016AC VA: 0x22056AC
	public static Dictionary<string, object> Merge(Dictionary<string, object> baseRow, Dictionary<string, object> over) { }

	// RVA: 0x2205454 Offset: 0x2201454 VA: 0x2205454
	private static void Ensure() { }

	// RVA: 0x2205BC0 Offset: 0x2201BC0 VA: 0x2205BC0
	private static void CrashKey() { }

	// RVA: 0x2205D34 Offset: 0x2201D34 VA: 0x2205D34
	public static string ApplyRemote(string json) { }

	// RVA: 0x220606C Offset: 0x220206C VA: 0x220606C
	public static void ResetForTests() { }

	// RVA: 0x220592C Offset: 0x220192C VA: 0x220592C
	private static void Rebuild() { }

	// RVA: 0x22063D4 Offset: 0x22023D4 VA: 0x22063D4
	public static EconomySettings.Parsed Parse(string json, string source = "remote", Func<string, bool> boosterRowSells) { }

	// RVA: 0x220753C Offset: 0x220353C VA: 0x220753C
	private static void Boosters(EconomySettings.Parsed p, object v, Func<string, bool> sells) { }

	// RVA: 0x2208A98 Offset: 0x2204A98 VA: 0x2208A98
	private static void Revive(EconomySettings.Parsed p, object v) { }

	// RVA: 0x2209124 Offset: 0x2205124 VA: 0x2209124
	private static void WinReward(EconomySettings.Parsed p, object v) { }

	// RVA: 0x2209660 Offset: 0x2205660 VA: 0x2209660
	private static void Section(EconomySettings.Parsed p, object v, string name, string row, Dictionary<string, string> map) { }

	// RVA: 0x220AA78 Offset: 0x2206A78 VA: 0x220AA78
	private static List<object> RewardList(EconomySettings.Parsed p, object v, string label) { }

	// RVA: 0x220AEA0 Offset: 0x2206EA0 VA: 0x220AEA0
	private static int ItemId(object o) { }

	// RVA: 0x220A50C Offset: 0x220650C VA: 0x220A50C
	private static List<object> Ints(object v, long min, long max) { }

	// RVA: 0x22087A0 Offset: 0x22047A0 VA: 0x22087A0
	private static bool Whole(object o, out long n) { }

	// RVA: 0x2208890 Offset: 0x2204890 VA: 0x2208890
	private static long Clamp(EconomySettings.Parsed p, string label, long v, long min, long max) { }

	// RVA: 0x220A7B0 Offset: 0x22067B0 VA: 0x220A7B0
	private static string Join(List<object> l) { }

	// RVA: 0x220B0CC Offset: 0x22070CC VA: 0x220B0CC
	private static void .cctor() { }
}

