// Namespace: Dino.BusSand.App.UI
public static class MechanicGuide // TypeDefIndex: 3945
{
	// Fields
	public static bool EnabledInTests; // 0x0
	private const int GuideIdBase = 100;
	private const string PauseOwner = "MechanicGuide";
	private static readonly string[] Order; // 0x8

	// Methods

	// RVA: 0x21F91C4 Offset: 0x21F51C4 VA: 0x21F91C4
	public static string Pending(LevelData lv) { }

	[IteratorStateMachine(typeof(MechanicGuide.<RunMechanic>d__6))]
	// RVA: 0x21F94A0 Offset: 0x21F54A0 VA: 0x21F94A0
	public static IEnumerator RunMechanic(GameApp app, HudPanel hud, GameplayController gc, MechanicGuide.AliveFn alive) { }

	// RVA: 0x21F9580 Offset: 0x21F5580 VA: 0x21F9580
	public static int FindWandBait(StageEngine e) { }

	[IteratorStateMachine(typeof(MechanicGuide.<RunWand>d__8))]
	// RVA: 0x21F98A0 Offset: 0x21F58A0 VA: 0x21F98A0
	public static IEnumerator RunWand(GameApp app, HudPanel hud, GameplayController gc, int guideRow, MechanicGuide.AliveFn alive) { }

	// RVA: 0x21F9988 Offset: 0x21F5988 VA: 0x21F9988
	private static bool AnyRiding(GameplayController gc, out int id) { }

	// RVA: 0x21F9BA8 Offset: 0x21F5BA8 VA: 0x21F9BA8
	private static GuideRequest WorldGuide(int id, Vector3 world, string textKey, bool tapThrough, GameplayController gc) { }

	[IteratorStateMachine(typeof(MechanicGuide.<WaitClosed>d__11))]
	// RVA: 0x21F9DB8 Offset: 0x21F5DB8 VA: 0x21F9DB8
	private static IEnumerator WaitClosed(UIPanel p, MechanicGuide.AliveFn alive) { }

	// RVA: 0x21F9E68 Offset: 0x21F5E68 VA: 0x21F9E68
	private static void .cctor() { }
}

