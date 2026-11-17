// Namespace: Dino.BusSand.App.UI
public class LanguagePanel : UIPanel, IKitPanel // TypeDefIndex: 3539
{
	// Fields
	private static string[] s_available; // 0x0
	private const float PanelH = 1180;
	private const float RowW = 760;
	private const float RowH = 120;
	private const float RowStep = 136;
	private const float ListPad = 28;
	public static bool NamesAfterChain; // 0x8
	private const string ClickSfx = "sfx_common_button_scale_click";

	// Properties
	private static string[] Available { get; }

	// Methods

	// RVA: 0x22F6B04 Offset: 0x22F2B04 VA: 0x22F6B04
	private static string[] get_Available() { }

	// RVA: 0x22F71F4 Offset: 0x22F31F4 VA: 0x22F71F4 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22F82CC Offset: 0x22F42CC VA: 0x22F82CC Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22F833C Offset: 0x22F433C VA: 0x22F833C Slot: 8
	protected override void OnDestroy() { }

	// RVA: 0x22F7438 Offset: 0x22F3438 VA: 0x22F7438
	private void BuildList(RectTransform box) { }

	// RVA: 0x22F8470 Offset: 0x22F4470 VA: 0x22F8470
	private TMP_Text BuildRow(RectTransform content, LanguagePanel.Row row, bool selected, float fromTop, int index, out string code) { }

	// RVA: 0x22F8A04 Offset: 0x22F4A04 VA: 0x22F8A04
	private static void Name(TMP_Text t, LanguagePanel.Row row, string code, bool native) { }

	// RVA: 0x22F8938 Offset: 0x22F4938 VA: 0x22F8938
	private static bool CanRender(TMP_Text tmp, string text) { }

	// RVA: 0x22F8B98 Offset: 0x22F4B98 VA: 0x22F8B98
	private void OnPick(List<string> codes) { }

	// RVA: 0x22F82E0 Offset: 0x22F42E0 VA: 0x22F82E0
	private void ReturnToSettings() { }

	// RVA: 0x22F93C4 Offset: 0x22F53C4 VA: 0x22F93C4
	private static void OpenSettings() { }

	// RVA: 0x22F9518 Offset: 0x22F5518 VA: 0x22F9518
	public void .ctor() { }

	// RVA: 0x22F9520 Offset: 0x22F5520 VA: 0x22F9520
	private static void .cctor() { }
}

