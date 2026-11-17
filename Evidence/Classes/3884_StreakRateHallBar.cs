// Namespace: Dino.BusSand.App.UI
public static class StreakRateHallBar // TypeDefIndex: 3884
{
	// Fields
	private const string ClipWin = "ani_UIMainHud_Rect_streakRate";
	private const string ClipWin1 = "ani_UIMainHud_Rect_streakRate_1";
	private static readonly string[] CommonNodes; // 0x0
	private static UIPanel s_hud; // 0x8
	private static Transform s_bar; // 0x10
	private static Transform s_anchor; // 0x18
	private static StreakRateFeature s_f; // 0x20
	private static bool s_animating; // 0x28
	private static long s_endMs; // 0x30

	// Properties
	private static bool Alive { get; }

	// Methods

	// RVA: 0x21DF1A0 Offset: 0x21DB1A0 VA: 0x21DF1A0
	private static bool get_Alive() { }

	// RVA: 0x21DF2A4 Offset: 0x21DB2A4 VA: 0x21DF2A4
	public static void Bind(UIPanel hud, StreakRateFeature f) { }

	// RVA: 0x21DFA24 Offset: 0x21DBA24 VA: 0x21DFA24
	private static void InitRates() { }

	// RVA: 0x21DFD10 Offset: 0x21DBD10 VA: 0x21DFD10
	public static void Refresh() { }

	// RVA: 0x21E0CA0 Offset: 0x21DCCA0 VA: 0x21E0CA0
	private static Slider SliderComp() { }

	// RVA: 0x21E0B30 Offset: 0x21DCB30 VA: 0x21E0B30
	private static void RefreshTarget(ActivityRewardEntry e) { }

	// RVA: 0x21E0E4C Offset: 0x21DCE4C VA: 0x21E0E4C
	public static void ApplyRewardRibbon(Transform anchor, ActivityRewardEntry e, string icon, string bgBlue, string bgRed, string numBlue, string numRed) { }

	// RVA: 0x21E0D90 Offset: 0x21DCD90 VA: 0x21E0D90
	private static void HideGetPanel() { }

	// RVA: 0x21E1140 Offset: 0x21DD140 VA: 0x21E1140
	private static void ShowGetPanel() { }

	[IteratorStateMachine(typeof(StreakRateHallBar.<Timer>d__19))]
	// RVA: 0x21E09E8 Offset: 0x21DC9E8 VA: 0x21E09E8
	private static IEnumerator Timer() { }

	// RVA: 0x21E1224 Offset: 0x21DD224 VA: 0x21E1224
	private static void OnClick() { }

	[IteratorStateMachine(typeof(StreakRateHallBar.<PlayWin>d__21))]
	// RVA: 0x21E1904 Offset: 0x21DD904 VA: 0x21E1904
	public static IEnumerator PlayWin(int rate, int baseScore, int add, List<Vector3> segments) { }

	[IteratorStateMachine(typeof(StreakRateHallBar.<DelayedSfx>d__22))]
	// RVA: 0x21E19BC Offset: 0x21DD9BC VA: 0x21E19BC
	private static IEnumerator DelayedSfx(string sfx, float delay) { }

	[IteratorStateMachine(typeof(StreakRateHallBar.<MoveSlider>d__23))]
	// RVA: 0x21E1A60 Offset: 0x21DDA60 VA: 0x21E1A60
	private static IEnumerator MoveSlider(List<Vector3> segs, Action done) { }

	// RVA: 0x21E1B10 Offset: 0x21DDB10 VA: 0x21E1B10
	private static void FakeAddReward(int rewardId) { }

	// RVA: 0x21DF95C Offset: 0x21DB95C VA: 0x21DF95C
	private static void SetActive(Transform t, bool on) { }

	// RVA: 0x21E0A40 Offset: 0x21DCA40 VA: 0x21E0A40
	public static void SetTexts(Transform node, string text) { }

	// RVA: 0x21DF7AC Offset: 0x21DB7AC VA: 0x21DF7AC
	public static void Sample(Animation anim, string clip, bool last) { }

	// RVA: 0x21E1EA0 Offset: 0x21DDEA0 VA: 0x21E1EA0
	private static void .cctor() { }
}

