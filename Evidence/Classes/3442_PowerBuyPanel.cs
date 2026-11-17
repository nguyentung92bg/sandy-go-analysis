// Namespace: Dino.BusSand.App.UI
public class PowerBuyPanel : UIPanel, IKitPanel // TypeDefIndex: 3442
{
	// Fields
	public Action<bool> Done; // 0x38
	public const int ShopId = 2002;
	public const string AdSlot = "EnergyRefill";
	private int _buyCount; // 0x40
	private bool _adPlaying; // 0x44
	private bool _opening; // 0x45
	private bool _pendingCheck; // 0x46
	private TMP_Text _time; // 0x48
	private TMP_Text _hearts; // 0x50
	private TMP_Text _price; // 0x58
	private GameObject _timeRow; // 0x60

	// Methods

	// RVA: 0x22AF6D8 Offset: 0x22AB6D8 VA: 0x22AF6D8 Slot: 4
	public override void OnOpen(object param) { }

	[IteratorStateMachine(typeof(PowerBuyPanel.<DeferredCheck>d__12))]
	// RVA: 0x22B06BC Offset: 0x22AC6BC VA: 0x22B06BC
	private IEnumerator DeferredCheck() { }

	// RVA: 0x22B0750 Offset: 0x22AC750 VA: 0x22B0750 Slot: 6
	public override void OnClose() { }

	// RVA: 0x22B07F4 Offset: 0x22AC7F4 VA: 0x22B07F4
	protected void Finish(bool ok) { }

	// RVA: 0x22B084C Offset: 0x22AC84C VA: 0x22B084C Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22B0860 Offset: 0x22AC860 VA: 0x22B0860
	private void OnCloseClick() { }

	// RVA: 0x22B0960 Offset: 0x22AC960 VA: 0x22B0960
	private int PerBuy() { }

	// RVA: 0x22B0A60 Offset: 0x22ACA60 VA: 0x22B0A60
	private int BuyCountNow() { }

	// RVA: 0x22B0490 Offset: 0x22AC490 VA: 0x22B0490
	private void RefreshPanel() { }

	// RVA: 0x22B0B44 Offset: 0x22ACB44 VA: 0x22B0B44
	private void RefreshRestoreTime() { }

	[IteratorStateMachine(typeof(PowerBuyPanel.<RestoreTimer>d__21))]
	// RVA: 0x22B0650 Offset: 0x22AC650 VA: 0x22B0650
	private IEnumerator RestoreTimer() { }

	// RVA: 0x22B0C94 Offset: 0x22ACC94 VA: 0x22B0C94
	private void OnBuyClick() { }

	// RVA: 0x22B0F80 Offset: 0x22ACF80 VA: 0x22B0F80
	private void OnAdClick() { }

	// RVA: 0x22B133C Offset: 0x22AD33C VA: 0x22B133C
	private void OnItemChanged(int id) { }

	// RVA: 0x22B1370 Offset: 0x22AD370 VA: 0x22B1370
	private void CheckPowerEnough() { }

	// RVA: 0x22B15F8 Offset: 0x22AD5F8 VA: 0x22B15F8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x22B1608 Offset: 0x22AD608 VA: 0x22B1608
	private void <OnAdClick>b__23_0(bool ok) { }
}

