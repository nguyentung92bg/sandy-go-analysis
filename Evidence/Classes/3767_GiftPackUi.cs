// Namespace: Dino.BusSand.App.UI
public static class GiftPackUi // TypeDefIndex: 3767
{
	// Fields
	public static readonly string[] BreakIceIcons; // 0x0
	private const string GoldenIcon = "Btn_GoldenCoinGiftPack";
	private static bool s_installed; // 0x8

	// Methods

	// RVA: 0x21AB9A8 Offset: 0x21A79A8 VA: 0x21AB9A8
	public static void Install() { }

	// RVA: 0x21ABC44 Offset: 0x21A7C44 VA: 0x21ABC44
	public static bool OpenPack(int packId, string prefab, GiftPackType type, string source, Action onClosed) { }

	// RVA: 0x21ABEC4 Offset: 0x21A7EC4 VA: 0x21ABEC4
	public static bool OpenGoldenPanel(int packId, Action onClosed, string source, bool viaRegistry = False) { }

	// RVA: 0x21AC078 Offset: 0x21A8078 VA: 0x21AC078
	public static bool OpenGoldenSettlement(int packId, Action onClosed) { }

	// RVA: 0x21AC208 Offset: 0x21A8208 VA: 0x21AC208
	private static bool OnStoreItemClick(int storeItemId) { }

	// RVA: 0x21AC388 Offset: 0x21A8388 VA: 0x21AC388
	private static void OnStoreItemSetup(Transform item, int storeItemId) { }

	// RVA: 0x21AC93C Offset: 0x21A893C VA: 0x21AC93C
	public static int GoldenTotalCoins(int packId) { }

	// RVA: 0x21ACA94 Offset: 0x21A8A94 VA: 0x21ACA94
	public static void BindHall(UIPanel hud) { }

	// RVA: 0x21AD140 Offset: 0x21A9140 VA: 0x21AD140
	private static void RefreshHall(UIPanel hud, bool first = False) { }

	// RVA: 0x21AAC9C Offset: 0x21A6C9C VA: 0x21AAC9C
	public static void Purchase(int storeItemId, Action<bool> done) { }

	// RVA: 0x21A9508 Offset: 0x21A5508 VA: 0x21A9508
	public static void SetTexts(Transform node, string text) { }

	// RVA: 0x21A95F8 Offset: 0x21A55F8 VA: 0x21A95F8
	public static void SetActive(Transform t, bool on) { }

	// RVA: 0x21A96C0 Offset: 0x21A56C0 VA: 0x21A96C0
	public static string DiscountText(string d) { }

	// RVA: 0x21AB7DC Offset: 0x21A77DC VA: 0x21AB7DC
	public static string PanelCountdown(long s) { }

	// RVA: 0x21AD87C Offset: 0x21A987C VA: 0x21AD87C
	public static string IconCountdown(long s) { }

	// RVA: 0x21AD88C Offset: 0x21A988C VA: 0x21AD88C
	public static string ActivityCountdown(long s) { }

	// RVA: 0x21AD894 Offset: 0x21A9894 VA: 0x21AD894
	public static string TimeItemText(long seconds) { }

	// RVA: 0x21ADA68 Offset: 0x21A9A68 VA: 0x21ADA68
	public static float Play(Transform t, string clip) { }

	// RVA: 0x21ADB38 Offset: 0x21A9B38 VA: 0x21ADB38
	public static void Sample(Transform t, string clip, bool last) { }

	// RVA: 0x21AA938 Offset: 0x21A6938 VA: 0x21AA938
	public static Sprite RewardIcon(int id) { }

	// RVA: 0x21AB544 Offset: 0x21A7544 VA: 0x21AB544
	public static void Fly(List<KeyValuePair<int, long>> rewards, Vector3 from, Action done) { }

	// RVA: 0x21ACEA4 Offset: 0x21A8EA4 VA: 0x21ACEA4
	public static GiftPackTicker Ticker(UIPanel p, string owner) { }

	[IteratorStateMachine(typeof(GiftPackUi.<Wait>d__25))]
	// RVA: 0x21AB7E4 Offset: 0x21A77E4 VA: 0x21AB7E4
	public static IEnumerator Wait(float seconds) { }

	// RVA: 0x21ADD60 Offset: 0x21A9D60 VA: 0x21ADD60
	private static void .cctor() { }
}

