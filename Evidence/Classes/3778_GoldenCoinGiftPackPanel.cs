// Namespace: Dino.BusSand.App.UI
public class GoldenCoinGiftPackPanel : UIPanel // TypeDefIndex: 3778
{
	// Fields
	private const float ItemHeight = 200;
	private GoldenCoinGiftPackPanel.Param _p; // 0x38
	private GiftPackFeature _g; // 0x40
	private List<GiftPackFeature.GoldenStage> _stages; // 0x48
	private readonly List<Transform> _items; // 0x50
	private int _shop; // 0x58
	private bool _purchasing; // 0x5C
	private bool _closed; // 0x5D
	private bool _revive; // 0x5E
	private GiftPackTrack.Gift _track; // 0x60
	private Transform _tips; // 0x68
	private int _tipIndex; // 0x70

	// Methods

	// RVA: 0x21AEFA8 Offset: 0x21AAFA8 VA: 0x21AEFA8 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21B0808 Offset: 0x21AC808 VA: 0x21B0808 Slot: 6
	public override void OnClose() { }

	// RVA: 0x21B0934 Offset: 0x21AC934 VA: 0x21B0934 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21AFB70 Offset: 0x21ABB70 VA: 0x21AFB70
	private void BuildList() { }

	// RVA: 0x21B09D8 Offset: 0x21AC9D8 VA: 0x21B09D8
	private GoldenCoinGiftPackPanel.St StateOf(int i) { }

	// RVA: 0x21B0404 Offset: 0x21AC404 VA: 0x21B0404
	private void RefreshAll() { }

	// RVA: 0x21B0AAC Offset: 0x21ACAAC VA: 0x21B0AAC
	private void RefreshItem(int i) { }

	// RVA: 0x21B00A4 Offset: 0x21AC0A4 VA: 0x21B00A4
	private void RefreshHeader() { }

	// RVA: 0x21B0470 Offset: 0x21AC470 VA: 0x21B0470
	private void ScrollToProgress() { }

	// RVA: 0x21B12A8 Offset: 0x21AD2A8 VA: 0x21B12A8
	private void OnItemClick(int i) { }

	[IteratorStateMachine(typeof(GoldenCoinGiftPackPanel.<FlyReward>d__24))]
	// RVA: 0x21B1634 Offset: 0x21AD634 VA: 0x21B1634
	private IEnumerator FlyReward(int i, int coins) { }

	// RVA: 0x21B16BC Offset: 0x21AD6BC VA: 0x21B16BC
	private void ToggleTip(int i, GoldenCoinGiftPackPanel.St s) { }

	// RVA: 0x21B15D0 Offset: 0x21AD5D0 VA: 0x21B15D0
	private void HideTip() { }

	// RVA: 0x21B1C94 Offset: 0x21ADC94 VA: 0x21B1C94
	private void OnBuyClick() { }

	// RVA: 0x21B1E34 Offset: 0x21ADE34 VA: 0x21B1E34
	private void OnPaySucClosed() { }

	[IteratorStateMachine(typeof(GoldenCoinGiftPackPanel.<UnlockSequence>d__29))]
	// RVA: 0x21B0780 Offset: 0x21AC780 VA: 0x21B0780
	private IEnumerator UnlockSequence(bool pending) { }

	[IteratorStateMachine(typeof(GoldenCoinGiftPackPanel.<Countdown>d__30))]
	// RVA: 0x21B070C Offset: 0x21AC70C VA: 0x21B070C
	private IEnumerator Countdown() { }

	// RVA: 0x21B2010 Offset: 0x21AE010 VA: 0x21B2010
	private void OnChanged() { }

	// RVA: 0x21B2044 Offset: 0x21AE044 VA: 0x21B2044
	private void OnInvalidated(int packId) { }

	// RVA: 0x21B0948 Offset: 0x21AC948 VA: 0x21B0948
	private void OnCloseClick() { }

	// RVA: 0x21AFAE4 Offset: 0x21ABAE4 VA: 0x21AFAE4
	private void Finish() { }

	// RVA: 0x21B2078 Offset: 0x21AE078 VA: 0x21B2078
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21B2108 Offset: 0x21AE108 VA: 0x21B2108
	private void <OnOpen>b__14_1(Vector2 _) { }

	[CompilerGenerated]
	// RVA: 0x21B210C Offset: 0x21AE10C VA: 0x21B210C
	private void <OnBuyClick>b__27_0(bool ok) { }
}

