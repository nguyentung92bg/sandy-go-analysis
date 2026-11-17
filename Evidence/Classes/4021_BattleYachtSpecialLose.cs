// Namespace: Dino.BusSand.App.Meta
public static class BattleYachtSpecialLose // TypeDefIndex: 4021
{
	// Fields
	public const int OrderBattleRoyale = 0;
	public const int OrderYacht = 1;
	private static readonly List<BattleYachtSpecialLose.Entry> s_pending; // 0x0
	private static bool s_running; // 0x8

	// Properties
	public static bool Running { get; }

	// Methods

	// RVA: 0x2227694 Offset: 0x2223694 VA: 0x2227694
	public static bool get_Running() { }

	// RVA: 0x2227730 Offset: 0x2223730 VA: 0x2227730
	public static void Enqueue(int order, Action<Action> open) { }

	[IteratorStateMachine(typeof(BattleYachtSpecialLose.<Run>d__8))]
	// RVA: 0x2227A74 Offset: 0x2223A74 VA: 0x2227A74
	private static IEnumerator Run() { }

	// RVA: 0x2227AF4 Offset: 0x2223AF4 VA: 0x2227AF4
	private static void .cctor() { }
}

