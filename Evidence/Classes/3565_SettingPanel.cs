// Namespace: Dino.BusSand.App.UI
public class SettingPanel : UIPanel, IKitPanel // TypeDefIndex: 3565
{
	// Fields
	public static bool QaUnlocked; // 0x0
	private const int SecretTaps = 10;
	private const float SecretGap = 1.2;
	private static int s_taps; // 0x4
	private static float s_lastTap; // 0x8
	private const bool HasRestore = True;
	private bool _restoring; // 0x38
	public const string PrivacyUrl = "https://dinogames.gg/privacy";

	// Properties
	public static string VersionText { get; }
	public static bool QaVisible { get; }

	// Methods

	// RVA: 0x2305684 Offset: 0x2301684 VA: 0x2305684
	public static string get_VersionText() { }

	// RVA: 0x23056FC Offset: 0x23016FC VA: 0x23056FC
	public static bool get_QaVisible() { }

	// RVA: 0x2305778 Offset: 0x2301778 VA: 0x2305778
	public static void AddQaCorner(KitWindow w, Action reopen) { }

	// RVA: 0x2305998 Offset: 0x2301998 VA: 0x2305998
	private static void OnSecretTap(Action reopen) { }

	// RVA: 0x2305C74 Offset: 0x2301C74 VA: 0x2305C74 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2306A3C Offset: 0x2302A3C VA: 0x2306A3C
	private static float PanelHeightToWindow(float contentEnd) { }

	// RVA: 0x2306C1C Offset: 0x2302C1C VA: 0x2306C1C
	private static TextMeshProUGUI Link(RectTransform parent, string name, string text, float fromTop, float x) { }

	// RVA: 0x2306DCC Offset: 0x2302DCC VA: 0x2306DCC Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2306E40 Offset: 0x2302E40 VA: 0x2306E40
	private void OnContactClick() { }

	// RVA: 0x2306E88 Offset: 0x2302E88 VA: 0x2306E88
	private void OnRestoreClick() { }

	// RVA: 0x2306FF8 Offset: 0x2302FF8 VA: 0x2306FF8
	private void OnTermsClick() { }

	// RVA: 0x23070A8 Offset: 0x23030A8 VA: 0x23070A8
	private void OnLangClick() { }

	// RVA: 0x2306DE0 Offset: 0x2302DE0 VA: 0x2306DE0
	private void OnCloseClick() { }

	// RVA: 0x2307218 Offset: 0x2303218 VA: 0x2307218
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2307220 Offset: 0x2303220 VA: 0x2307220
	private void <OnOpen>b__11_1() { }

	[CompilerGenerated]
	// RVA: 0x2307344 Offset: 0x2303344 VA: 0x2307344
	private void <OnRestoreClick>b__18_0(bool ok) { }
}

