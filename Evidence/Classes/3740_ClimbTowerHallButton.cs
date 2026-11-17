// Namespace: Dino.BusSand.App.UI
public static class ClimbTowerHallButton // TypeDefIndex: 3740
{
	// Fields
	private const float FillMin = 0.1;
	private const float FillRange = 0.79999995;
	private static UIPanel s_hud; // 0x0
	private static Transform s_btn; // 0x8
	private static Transform s_anchor; // 0x10
	private static ClimbTowerFeature s_f; // 0x18
	private static ClimbTowerState s_state; // 0x20
	private static bool s_idlePlaying; // 0x24

	// Properties
	private static bool Alive { get; }

	// Methods

	// RVA: 0x219F1E4 Offset: 0x219B1E4 VA: 0x219F1E4
	private static bool get_Alive() { }

	// RVA: 0x219F2E8 Offset: 0x219B2E8 VA: 0x219F2E8
	public static void Bind(UIPanel hud, ClimbTowerFeature f) { }

	// RVA: 0x219F894 Offset: 0x219B894 VA: 0x219F894
	public static void UpdateState() { }

	// RVA: 0x21A02DC Offset: 0x219C2DC VA: 0x21A02DC
	private static float SliderFill(int canClaim, bool beforeAnim) { }

	// RVA: 0x21A043C Offset: 0x219C43C VA: 0x21A043C
	private static void SetFill(float v) { }

	[IteratorStateMachine(typeof(ClimbTowerHallButton.<CountDown>d__14))]
	// RVA: 0x21A01BC Offset: 0x219C1BC VA: 0x21A01BC
	private static IEnumerator CountDown() { }

	// RVA: 0x21A05D4 Offset: 0x219C5D4 VA: 0x21A05D4
	private static void OnClick() { }

	[IteratorStateMachine(typeof(ClimbTowerHallButton.<PlayProcess>d__16))]
	// RVA: 0x21A084C Offset: 0x219C84C VA: 0x21A084C
	public static IEnumerator PlayProcess(ClimbTowerFeature f) { }

	// RVA: 0x21A0214 Offset: 0x219C214 VA: 0x21A0214
	private static void SetActive(Transform t, bool on) { }

	// RVA: 0x219F7A4 Offset: 0x219B7A4 VA: 0x219F7A4
	private static void SetTexts(Transform node, string text) { }

	// RVA: 0x21A08E0 Offset: 0x219C8E0 VA: 0x21A08E0
	private static void .cctor() { }
}

