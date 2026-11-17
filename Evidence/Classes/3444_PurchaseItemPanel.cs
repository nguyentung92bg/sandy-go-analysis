// Namespace: Dino.BusSand.App.UI
public class PurchaseItemPanel : UIPanel, IKitPanel // TypeDefIndex: 3444
{
	// Fields
	public Action<bool> Done; // 0x38
	public const string AdSlot = "ItemRefill";
	private int _shopId; // 0x40
	private int _item; // 0x44
	private bool _adBusy; // 0x48

	// Methods

	// RVA: 0x22B1AC0 Offset: 0x22ADAC0 VA: 0x22B1AC0 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22B24A8 Offset: 0x22AE4A8 VA: 0x22B24A8 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22B24C8 Offset: 0x22AE4C8 VA: 0x22B24C8
	private void OnCloseClick() { }

	// RVA: 0x22B25D0 Offset: 0x22AE5D0 VA: 0x22B25D0
	private void OnBuyClick() { }

	// RVA: 0x22B28D8 Offset: 0x22AE8D8 VA: 0x22B28D8
	private void OnFreeAdClick() { }

	// RVA: 0x22B29B0 Offset: 0x22AE9B0 VA: 0x22B29B0
	private void FlyBooster() { }

	// RVA: 0x22B24DC Offset: 0x22AE4DC VA: 0x22B24DC
	private void Finish(bool ok) { }

	// RVA: 0x22B2BC4 Offset: 0x22AEBC4 VA: 0x22B2BC4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x22B2BCC Offset: 0x22AEBCC VA: 0x22B2BCC
	private void <OnFreeAdClick>b__9_0(bool ok) { }
}

