// Namespace: Dino.BusSand.App.UI
public static class YachtRacingUi // TypeDefIndex: 3940
{
	// Fields
	public const string PrefabRace = "UIYachtRacing";
	public const string PrefabStart = "UIYachtRacingStart";
	public const string PrefabReward = "UIYachtRacingReward";
	public const string PrefabTips = "UIYachtRacingTips";
	public const string PrefabContinue = "UIYachtRacingContinue";

	// Properties
	public static int PlayerHeadId { get; }
	public static YachtRacingCore Core { get; }

	// Methods

	// RVA: 0x21F5F98 Offset: 0x21F1F98 VA: 0x21F5F98
	public static int get_PlayerHeadId() { }

	// RVA: 0x21F7CDC Offset: 0x21F3CDC VA: 0x21F7CDC
	public static void OpenRace(bool special, bool isGuide, Action done) { }

	// RVA: 0x21F7FB4 Offset: 0x21F3FB4 VA: 0x21F7FB4
	public static void OpenStart(bool isGuide, Action done) { }

	// RVA: 0x21F7FBC Offset: 0x21F3FBC VA: 0x21F7FBC
	public static void OpenStartDelayed(bool isGuide, Action done, float delaySeconds) { }

	// RVA: 0x21F809C Offset: 0x21F409C VA: 0x21F809C
	private static bool CanOpenStart() { }

	[IteratorStateMachine(typeof(YachtRacingUi.<DelayedStart>d__11))]
	// RVA: 0x21F81E8 Offset: 0x21F41E8 VA: 0x21F81E8
	private static IEnumerator DelayedStart(bool isGuide, Action once, float delay) { }

	// RVA: 0x21F8278 Offset: 0x21F4278 VA: 0x21F8278
	private static void DoOpenStart(bool isGuide, Action once) { }

	// RVA: 0x21F83F8 Offset: 0x21F43F8 VA: 0x21F83F8
	public static void OpenTips(Action done) { }

	// RVA: 0x21F8594 Offset: 0x21F4594 VA: 0x21F8594
	public static YachtRacingRewardPanel OpenReward(Action animAction, Action closeCallback) { }

	// RVA: 0x21F7EF4 Offset: 0x21F3EF4 VA: 0x21F7EF4
	public static Action Once(Action a) { }

	// RVA: 0x21F6838 Offset: 0x21F2838 VA: 0x21F6838
	public static YachtRacingCore get_Core() { }

	// RVA: 0x21F4B10 Offset: 0x21F0B10 VA: 0x21F4B10
	public static string L(string key, object[] args) { }

	// RVA: 0x21F4BB8 Offset: 0x21F0BB8 VA: 0x21F4BB8
	public static void SetTexts(Transform node, string text) { }

	// RVA: 0x21F8718 Offset: 0x21F4718 VA: 0x21F8718
	public static void SetAutoSize(Transform node, float size) { }

	// RVA: 0x21F60F8 Offset: 0x21F20F8 VA: 0x21F60F8
	public static void SetActive(Transform t, bool on) { }

	// RVA: 0x21F6568 Offset: 0x21F2568 VA: 0x21F6568
	public static void SetActive(GameObject go, bool on) { }

	// RVA: 0x21F5E8C Offset: 0x21F1E8C VA: 0x21F5E8C
	public static bool SetSprite(Image img, string spriteName, bool nativeSize = False) { }

	// RVA: 0x21F8818 Offset: 0x21F4818 VA: 0x21F8818
	public static bool SetSprite(Transform node, string spriteName, bool nativeSize = False) { }

	// RVA: 0x21F5FE8 Offset: 0x21F1FE8 VA: 0x21F5FE8
	public static Sprite HeadSprite(int headId) { }

	// RVA: 0x21F88D0 Offset: 0x21F48D0 VA: 0x21F88D0
	public static string RemainText(long endMs) { }

	// RVA: 0x21F8914 Offset: 0x21F4914 VA: 0x21F8914
	public static AudioSource PlayLoop(GameObject host, string clipKey) { }

	// RVA: 0x21F8C34 Offset: 0x21F4C34 VA: 0x21F8C34
	public static float PlayClip(Animation a, string clip) { }

	[IteratorStateMachine(typeof(YachtRacingUi.<Tween>d__29))]
	// RVA: 0x21F746C Offset: 0x21F346C VA: 0x21F746C
	public static IEnumerator Tween(float duration, Func<float, float> ease, Action<float> apply) { }

	// RVA: 0x21F8DB4 Offset: 0x21F4DB4 VA: 0x21F8DB4
	public static Vector2 RootCanvasSize() { }
}

