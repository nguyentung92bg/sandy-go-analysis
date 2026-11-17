// Namespace: Dino.BusSand.App.Meta
public static class BattleYachtSpend // TypeDefIndex: 4022
{
	// Fields
	[CompilerGenerated]
	private static Action<int, long> ItemUsed; // 0x0
	[CompilerGenerated]
	private static Action<int> RevivePaid; // 0x8
	private static readonly int[] Watched; // 0x10
	private static readonly Dictionary<int, long> s_counts; // 0x18
	private static bool s_hooked; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0x2227FCC Offset: 0x2223FCC VA: 0x2227FCC
	public static void add_ItemUsed(Action<int, long> value) { }

	[CompilerGenerated]
	// RVA: 0x22280BC Offset: 0x22240BC VA: 0x22280BC
	public static void remove_ItemUsed(Action<int, long> value) { }

	[CompilerGenerated]
	// RVA: 0x22281AC Offset: 0x22241AC VA: 0x22281AC
	public static void add_RevivePaid(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x22282A0 Offset: 0x22242A0 VA: 0x22282A0
	public static void remove_RevivePaid(Action<int> value) { }

	// RVA: 0x2228394 Offset: 0x2224394 VA: 0x2228394
	public static void Ensure() { }

	// RVA: 0x2228490 Offset: 0x2224490 VA: 0x2228490
	public static void Snapshot() { }

	// RVA: 0x222860C Offset: 0x222460C VA: 0x222860C
	private static void OnItemChanged(int id) { }

	// RVA: 0x2228A58 Offset: 0x2224A58 VA: 0x2228A58
	public static void ReportItemUse(int id, long n) { }

	// RVA: 0x2228AE8 Offset: 0x2224AE8 VA: 0x2228AE8
	public static void ReportRevive(int price) { }

	// RVA: 0x2228B64 Offset: 0x2224B64 VA: 0x2228B64
	private static void .cctor() { }
}

