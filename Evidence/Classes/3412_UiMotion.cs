// Namespace: Dino.BusSand.App.UI
public static class UiMotion // TypeDefIndex: 3412
{
	// Fields
	public const float PopIn = 0.3;
	public const float PopOut = 0.16;
	public const float DimIn = 0.2;
	public const float Stagger = 0.04;
	public const float PunchTime = 0.32;
	public const float NopeTime = 0.36;
	private static readonly Dictionary<RectTransform, Vector2> ShakeBase; // 0x0

	// Properties
	public static float Speed { get; set; }
	public static float Dt { get; }

	// Methods

	// RVA: 0x22908F0 Offset: 0x228C8F0 VA: 0x22908F0
	public static float get_Speed() { }

	// RVA: 0x2290948 Offset: 0x228C948 VA: 0x2290948
	public static void set_Speed(float value) { }

	// RVA: 0x228A520 Offset: 0x2286520 VA: 0x228A520
	public static float get_Dt() { }

	[IteratorStateMachine(typeof(UiMotion.<Wait>d__11))]
	// RVA: 0x22909BC Offset: 0x228C9BC VA: 0x22909BC
	public static IEnumerator Wait(float seconds) { }

	// RVA: 0x2290A2C Offset: 0x228CA2C VA: 0x2290A2C
	public static void QaClockOn() { }

	// RVA: 0x2290A84 Offset: 0x228CA84 VA: 0x2290A84
	public static void QaHoldAt(float seconds) { }

	// RVA: 0x2290AE8 Offset: 0x228CAE8 VA: 0x2290AE8
	public static void QaOff() { }

	// RVA: 0x228A4FC Offset: 0x22864FC VA: 0x228A4FC
	public static float OutQuad(float t) { }

	// RVA: 0x228FDD0 Offset: 0x228BDD0 VA: 0x228FDD0
	public static float InQuad(float t) { }

	// RVA: 0x2287F20 Offset: 0x2283F20 VA: 0x2287F20
	public static float OutCubic(float t) { }

	// RVA: 0x228A8C4 Offset: 0x22868C4 VA: 0x228A8C4
	public static float InOutSine(float t) { }

	// RVA: 0x2287CFC Offset: 0x2283CFC VA: 0x2287CFC
	public static float OutBack(float t, float s = 1.70158) { }

	// RVA: 0x2290B48 Offset: 0x228CB48 VA: 0x2290B48
	public static float Spring(float k) { }

	// RVA: 0x2290B90 Offset: 0x228CB90 VA: 0x2290B90
	private static Tween Run(float duration, Action<float> step, object owner, float delay = 0, Action done) { }

	// RVA: 0x228DB38 Offset: 0x2289B38 VA: 0x228DB38
	public static CanvasGroup Group(GameObject go) { }

	// RVA: 0x2283D78 Offset: 0x227FD78 VA: 0x2283D78
	public static Tween Punch(Transform t, float amount = 0.12, float duration = 0.32, Nullable<Vector3> baseScale) { }

	// RVA: 0x2290CE8 Offset: 0x228CCE8 VA: 0x2290CE8
	public static Tween Shake(RectTransform rt, float px = 16, float duration = 0.36) { }

	// RVA: 0x228E0DC Offset: 0x228A0DC VA: 0x228E0DC
	public static Tween Appear(Transform t, float delay, float from = 0.6, float duration = 0.32, float overshoot = 2, Nullable<Vector3> baseScale) { }

	// RVA: 0x2290F98 Offset: 0x228CF98 VA: 0x2290F98
	public static float Beats(Transform page, float start, float step, string[][] groups) { }

	// RVA: 0x228E9CC Offset: 0x228A9CC VA: 0x228E9CC
	public static Tween SlideIn(RectTransform rt, Vector2 offset, float delay, float duration = 0.4, bool fade = True) { }

	// RVA: 0x2291234 Offset: 0x228D234 VA: 0x2291234
	public static Tween Fade(CanvasGroup g, float to, float duration, float delay = 0) { }

	// RVA: 0x2285AF8 Offset: 0x2281AF8 VA: 0x2285AF8
	public static Tween Count(TMP_Text text, long from, long to, float duration, float delay = 0, Func<long, string> format, Action<float> onStep) { }

	// RVA: 0x22913EC Offset: 0x228D3EC VA: 0x22913EC
	public static void Stop(Transform t) { }

	// RVA: 0x229150C Offset: 0x228D50C VA: 0x229150C
	private static void .cctor() { }
}

