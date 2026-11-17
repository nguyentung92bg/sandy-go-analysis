// Namespace: Dino.BusSand.Core
public static class LevelCatalog // TypeDefIndex: 8526
{
	// Fields
	private static List<string> _levels; // 0x0
	private static int _loopFrom; // 0x8
	private static int _endSuctionPct; // 0xC
	private static int _endSuctionDepth; // 0x10
	private static readonly Dictionary<string, string> s_configIds; // 0x18
	private static string _setId; // 0x20
	private static string _rev; // 0x28

	// Properties
	public static string SetId { get; }
	public static string Rev { get; }
	public static int Count { get; }
	public static int LoopFrom { get; }
	public static int EndSuctionPct { get; }
	public static int EndSuctionDepth { get; }

	// Methods

	// RVA: 0x240F9DC Offset: 0x240B9DC VA: 0x240F9DC
	public static void Reload() { }

	// RVA: 0x240FAB0 Offset: 0x240BAB0 VA: 0x240FAB0
	public static string get_SetId() { }

	// RVA: 0x2410184 Offset: 0x240C184 VA: 0x2410184
	public static string get_Rev() { }

	// RVA: 0x241029C Offset: 0x240C29C VA: 0x241029C
	public static string ContentHash(string text) { }

	// RVA: 0x241039C Offset: 0x240C39C VA: 0x241039C
	public static string ConfigId(int level) { }

	// RVA: 0x240FB0C Offset: 0x240BB0C VA: 0x240FB0C
	private static void Ensure() { }

	// RVA: 0x2410650 Offset: 0x240C650 VA: 0x2410650
	public static int get_Count() { }

	// RVA: 0x24106C4 Offset: 0x240C6C4 VA: 0x24106C4
	public static int get_LoopFrom() { }

	// RVA: 0x2410720 Offset: 0x240C720 VA: 0x2410720
	public static int get_EndSuctionPct() { }

	// RVA: 0x241077C Offset: 0x240C77C VA: 0x241077C
	public static int get_EndSuctionDepth() { }

	// RVA: 0x2410524 Offset: 0x240C524 VA: 0x2410524
	public static string FileFor(int level) { }

	// RVA: 0x24107D8 Offset: 0x240C7D8 VA: 0x24107D8
	public static LevelData Load(int level) { }

	// RVA: 0x24109BC Offset: 0x240C9BC VA: 0x24109BC
	private static void .cctor() { }
}

