// Namespace: Dino.BusSand.App.UI
public static class LevelEnterFlow // TypeDefIndex: 3676
{
	// Fields
	public static readonly List<int> StartUseItems; // 0x0
	public static bool GuideRound; // 0x8
	private static int s_run; // 0xC
	private static readonly int[] UnlockGiftItems; // 0x10
	private static readonly int[] ItemGuideRows; // 0x18

	// Properties
	public static int UnlockGiftCount { get; }

	// Methods

	// RVA: 0x233CF40 Offset: 0x2338F40 VA: 0x233CF40
	public static int get_UnlockGiftCount() { }

	[IteratorStateMachine(typeof(LevelEnterFlow.<Run>d__7))]
	// RVA: 0x233CF90 Offset: 0x2338F90 VA: 0x233CF90
	public static IEnumerator Run(GameApp app, HudPanel hud, LevelData data) { }

	// RVA: 0x233D020 Offset: 0x2339020 VA: 0x233D020
	private static bool Alive(GameplayController gc, int run) { }

	// RVA: 0x233D0E4 Offset: 0x23390E4 VA: 0x233D0E4
	private static void Abort(HudPanel hud, int run) { }

	// RVA: 0x233D1FC Offset: 0x23391FC VA: 0x233D1FC
	public static void ResetItemTutorial(int item) { }

	// RVA: 0x233D508 Offset: 0x2339508 VA: 0x233D508
	private static List<int> GrantUnlockGifts(HudPanel hud) { }

	[IteratorStateMachine(typeof(LevelEnterFlow.<WaitClosed>d__12))]
	// RVA: 0x233D8D4 Offset: 0x23398D4 VA: 0x233D8D4
	private static IEnumerator WaitClosed(UIPanel p, GameplayController gc, int run) { }

	[IteratorStateMachine(typeof(LevelEnterFlow.<GuideStep>d__13))]
	// RVA: 0x233D96C Offset: 0x233996C VA: 0x233D96C
	private static IEnumerator GuideStep(GameApp app, HudPanel hud, GameplayController gc, int run) { }

	[IteratorStateMachine(typeof(LevelEnterFlow.<WaitItemEffect>d__14))]
	// RVA: 0x233DA40 Offset: 0x2339A40 VA: 0x233DA40
	private static IEnumerator WaitItemEffect(GameplayController gc, int item, int run) { }

	[IteratorStateMachine(typeof(LevelEnterFlow.<PrePropStep>d__15))]
	// RVA: 0x233DAC8 Offset: 0x2339AC8 VA: 0x233DAC8
	private static IEnumerator PrePropStep(GameApp app, HudPanel hud, GameplayController gc, int run) { }

	// RVA: 0x233DB60 Offset: 0x2339B60 VA: 0x233DB60
	private static bool UseProp(int id) { }

	[IteratorStateMachine(typeof(LevelEnterFlow.<RunThen>d__17))]
	// RVA: 0x233DEC0 Offset: 0x2339EC0 VA: 0x233DEC0
	private static IEnumerator RunThen(IEnumerator inner, Action then) { }

	// RVA: 0x233DF50 Offset: 0x2339F50 VA: 0x233DF50
	private static void .cctor() { }
}

