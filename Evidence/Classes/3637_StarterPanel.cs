// Namespace: Dino.BusSand.App.UI
public class StarterPanel : UIPanel, IKitPanel // TypeDefIndex: 3637
{
	// Fields
	public const string PrefabKey = "UIStarter2D";
	private bool _buying; // 0x38
	private bool _waiting; // 0x39
	private TextMeshProUGUI _timer; // 0x40
	private string _source; // 0x48
	private float _tick; // 0x50

	// Properties
	public static int StoreItem { get; }

	// Methods

	// RVA: 0x232DFA4 Offset: 0x2329FA4 VA: 0x232DFA4
	public static int get_StoreItem() { }

	// RVA: 0x232DFAC Offset: 0x2329FAC VA: 0x232DFAC Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x232F7A0 Offset: 0x232B7A0 VA: 0x232F7A0
	private void Update() { }

	// RVA: 0x232F908 Offset: 0x232B908 VA: 0x232F908 Slot: 6
	public override void OnClose() { }

	// RVA: 0x232F960 Offset: 0x232B960 VA: 0x232F960 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x232F980 Offset: 0x232B980 VA: 0x232F980
	private void OnCloseClick() { }

	// RVA: 0x232F994 Offset: 0x232B994 VA: 0x232F994
	private void OnBuy() { }

	// RVA: 0x232FB88 Offset: 0x232BB88 VA: 0x232FB88
	private void BuyDone(bool ok, bool timeout) { }

	// RVA: 0x232FF14 Offset: 0x232BF14 VA: 0x232FF14
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x232FF1C Offset: 0x232BF1C VA: 0x232FF1C
	private void <OnBuy>b__13_0() { }

	[CompilerGenerated]
	// RVA: 0x232FF28 Offset: 0x232BF28 VA: 0x232FF28
	private void <OnBuy>b__13_1(bool ok) { }
}

