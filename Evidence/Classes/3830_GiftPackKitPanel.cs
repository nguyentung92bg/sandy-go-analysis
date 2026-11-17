// Namespace: Dino.BusSand.App.UI
public class GiftPackKitPanel : UIPanel, IKitPanel // TypeDefIndex: 3830
{
	// Fields
	public const string PrefabKey = "UIGiftPack2D";
	private const int PackId = 1004;
	private bool _buying; // 0x38
	private bool _waiting; // 0x39
	private int _item; // 0x3C
	private TextMeshProUGUI _timer; // 0x40
	private GiftPackFeature _g; // 0x48
	private float _tick; // 0x50

	// Methods

	// RVA: 0x21C9764 Offset: 0x21C5764 VA: 0x21C9764 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21C9C90 Offset: 0x21C5C90 VA: 0x21C9C90
	private void Update() { }

	// RVA: 0x21C9DFC Offset: 0x21C5DFC VA: 0x21C9DFC Slot: 6
	public override void OnClose() { }

	// RVA: 0x21C9E74 Offset: 0x21C5E74 VA: 0x21C9E74 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21C9E94 Offset: 0x21C5E94 VA: 0x21C9E94
	private void OnBuy() { }

	// RVA: 0x21CA05C Offset: 0x21C605C VA: 0x21CA05C
	private void Done(bool ok, bool timeout) { }

	// RVA: 0x21CA2E0 Offset: 0x21C62E0 VA: 0x21CA2E0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21CA2E8 Offset: 0x21C62E8 VA: 0x21CA2E8
	private void <OnOpen>b__7_0() { }

	[CompilerGenerated]
	// RVA: 0x21CA2FC Offset: 0x21C62FC VA: 0x21CA2FC
	private void <OnBuy>b__12_0() { }

	[CompilerGenerated]
	// RVA: 0x21CA308 Offset: 0x21C6308 VA: 0x21CA308
	private void <OnBuy>b__12_1(bool ok) { }
}

