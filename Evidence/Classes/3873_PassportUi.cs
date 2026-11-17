// Namespace: Dino.BusSand.App.UI
public static class PassportUi // TypeDefIndex: 3873
{
	// Fields
	private static bool s_installed; // 0x0
	private static Action<int> s_continueRevive; // 0x8
	private static bool _animatingFill; // 0x10

	// Properties
	private static PassportFeature F { get; }

	// Methods

	// RVA: 0x21DAD80 Offset: 0x21D6D80 VA: 0x21DAD80
	public static void Install() { }

	// RVA: 0x21DAEB0 Offset: 0x21D6EB0 VA: 0x21DAEB0
	private static PassportFeature get_F() { }

	// RVA: 0x21DAF00 Offset: 0x21D6F00 VA: 0x21DAF00
	public static bool OpenMain(Action onClose, bool firstGuide) { }

	// RVA: 0x21DB26C Offset: 0x21D726C VA: 0x21DB26C
	public static bool OpenOpen(Action onClose) { }

	// RVA: 0x21D74BC Offset: 0x21D34BC VA: 0x21D74BC
	public static bool OpenTips(Action onClose) { }

	// RVA: 0x21DB2D4 Offset: 0x21D72D4 VA: 0x21DB2D4
	public static bool OpenGet(Action onClose) { }

	// RVA: 0x21CE3CC Offset: 0x21CA3CC VA: 0x21CE3CC
	public static bool OpenFinishGet(Action onClose) { }

	// RVA: 0x21D0F9C Offset: 0x21CCF9C VA: 0x21D0F9C
	public static bool OpenBonusBank(Action onClose) { }

	// RVA: 0x21DB1F0 Offset: 0x21D71F0 VA: 0x21DB1F0
	public static bool OpenClose(Action onClose) { }

	// RVA: -1 Offset: -1
	private static bool Open<T>(string prefab, Action onClose) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2807778 Offset: 0x2803778 VA: 0x2807778
	|-PassportUi.Open<object>
	*/

	// RVA: 0x21D75AC Offset: 0x21D35AC VA: 0x21D75AC
	public static bool OpenBuy(int storeItemId, string source) { }

	// RVA: 0x21DB33C Offset: 0x21D733C VA: 0x21DB33C
	public static bool OpenContinue(Action<int> revive, Action decline) { }

	// RVA: 0x21DB4D4 Offset: 0x21D74D4 VA: 0x21DB4D4
	internal static void RegisterContinue(Action<int> revive) { }

	// RVA: 0x21DB524 Offset: 0x21D7524 VA: 0x21DB524
	public static void ReviveFromPurchase(int buses) { }

	// RVA: 0x21CD600 Offset: 0x21C9600 VA: 0x21CD600
	public static void ShowBuySuccess(Action done) { }

	// RVA: 0x21DB764 Offset: 0x21D7764 VA: 0x21DB764
	public static void FlyBankCoins(PassportFeature f) { }

	// RVA: 0x21DB908 Offset: 0x21D7908 VA: 0x21DB908
	public static void RunGuide(Action done) { }

	// RVA: 0x21DBC04 Offset: 0x21D7C04 VA: 0x21DBC04
	public static void BindHall(UIPanel hud) { }

	// RVA: 0x21DC780 Offset: 0x21D8780 VA: 0x21DC780
	private static float Fill(PassportFeature f, int keys) { }

	// RVA: 0x21DC850 Offset: 0x21D8850 VA: 0x21DC850
	private static int HudClaimables(PassportFeature f) { }

	// RVA: 0x21DC124 Offset: 0x21D8124 VA: 0x21DC124
	private static void RefreshButton(Transform btn, bool first) { }

	// RVA: 0x21DC8DC Offset: 0x21D88DC VA: 0x21DC8DC
	public static bool PlayKeysGain(int produce, Action done) { }

	[IteratorStateMachine(typeof(PassportUi.<KeysGain>d__26))]
	// RVA: 0x21DCA94 Offset: 0x21D8A94 VA: 0x21DCA94
	private static IEnumerator KeysGain(Transform btn, PassportFeature f, int produce, Action done) { }

	// RVA: 0x21D6C1C Offset: 0x21D2C1C VA: 0x21D6C1C
	public static void SetReward(Transform anchor, PassportFeature.Reward r, int boxId) { }

	// RVA: 0x21DCB68 Offset: 0x21D8B68 VA: 0x21DCB68
	private static void SetIcon(Transform t, Sprite s) { }

	// RVA: 0x21D8358 Offset: 0x21D4358 VA: 0x21D8358
	public static List<KeyValuePair<int, long>> FlyList(List<PassportFeature.Reward> rewards) { }
}

