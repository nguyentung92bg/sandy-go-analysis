// Namespace: Dino.BusSand.App.UI
public static class LiveOpsHome // TypeDefIndex: 3615
{
	// Fields
	private const int GiftPackId = 1004;
	private static bool s_registered; // 0x0

	// Properties
	public static bool GiftPackDue { get; }
	private static bool PassportOn { get; }
	private static bool GoldenOn { get; }
	private static bool RaceOn { get; }
	private static bool RoyaleOn { get; }
	private static bool DailyOn { get; }
	private static bool CupOn { get; }
	private static StreakRateFeature Streak { get; }
	private static ClimbTowerFeature Tower { get; }
	private static GiftPackFeature Gifts { get; }
	public static bool StreakShown { get; }
	public static bool TowerShown { get; }
	public static bool GiftShown { get; }
	public static int GiftStoreItem { get; }

	// Methods

	// RVA: 0x2321040 Offset: 0x231D040 VA: 0x2321040
	public static IEnumerable<IEnumerator> Steps() { }

	// RVA: 0x23212C0 Offset: 0x231D2C0 VA: 0x23212C0
	private static void CollectSteps(List<IEnumerator> steps) { }

	// RVA: 0x2321160 Offset: 0x231D160 VA: 0x2321160
	public static bool get_GiftPackDue() { }

	// RVA: 0x2321AA4 Offset: 0x231DAA4 VA: 0x2321AA4
	private static void GiftPackDueImpl(ref bool due) { }

	// RVA: 0x232117C Offset: 0x231D17C VA: 0x232117C
	public static IEnumerator ShowGiftPack() { }

	// RVA: 0x2321EA0 Offset: 0x231DEA0 VA: 0x2321EA0
	private static void ShowGiftPackImpl(ref IEnumerator routine) { }

	[IteratorStateMachine(typeof(LiveOpsHome.<Empty>d__7))]
	// RVA: 0x2321F60 Offset: 0x231DF60 VA: 0x2321F60
	private static IEnumerator Empty() { }

	// RVA: 0x2321FE0 Offset: 0x231DFE0 VA: 0x2321FE0
	private static void Open(EventView v) { }

	// RVA: 0x23220FC Offset: 0x231E0FC VA: 0x23220FC
	private static bool get_PassportOn() { }

	// RVA: 0x23221BC Offset: 0x231E1BC VA: 0x23221BC
	private static bool get_GoldenOn() { }

	// RVA: 0x2322264 Offset: 0x231E264 VA: 0x2322264
	private static bool get_RaceOn() { }

	// RVA: 0x2322374 Offset: 0x231E374 VA: 0x2322374
	private static bool get_RoyaleOn() { }

	// RVA: 0x2322444 Offset: 0x231E444 VA: 0x2322444
	private static bool get_DailyOn() { }

	// RVA: 0x23224D0 Offset: 0x231E4D0 VA: 0x23224D0
	private static bool get_CupOn() { }

	// RVA: 0x2322574 Offset: 0x231E574 VA: 0x2322574
	private static void HiddenIntro(List<IEnumerator> steps, bool on, EventKind kind) { }

	// RVA: 0x2321798 Offset: 0x231D798 VA: 0x2321798
	private static StreakRateFeature get_Streak() { }

	// RVA: 0x2321878 Offset: 0x231D878 VA: 0x2321878
	private static ClimbTowerFeature get_Tower() { }

	// RVA: 0x2321D74 Offset: 0x231DD74 VA: 0x2321D74
	private static GiftPackFeature get_Gifts() { }

	// RVA: 0x2322760 Offset: 0x231E760 VA: 0x2322760
	public static bool get_StreakShown() { }

	// RVA: 0x2322800 Offset: 0x231E800 VA: 0x2322800
	public static bool get_TowerShown() { }

	// RVA: 0x2321DD8 Offset: 0x231DDD8 VA: 0x2321DD8
	public static bool get_GiftShown() { }

	// RVA: 0x23228B4 Offset: 0x231E8B4 VA: 0x23228B4
	public static int get_GiftStoreItem() { }

	// RVA: 0x2322908 Offset: 0x231E908 VA: 0x2322908
	public static void RegisterEntries() { }

	// RVA: 0x2322F8C Offset: 0x231EF8C VA: 0x2322F8C
	private static void RegisterHiddenEntries() { }

	// RVA: 0x23218DC Offset: 0x231D8DC VA: 0x23218DC
	private static void CollectHiddenSteps(List<IEnumerator> steps) { }

	[IteratorStateMachine(typeof(LiveOpsHome.<Intro>d__41))]
	// RVA: 0x23217FC Offset: 0x231D7FC VA: 0x23217FC
	private static IEnumerator Intro(EventKind kind, Action done) { }
}

