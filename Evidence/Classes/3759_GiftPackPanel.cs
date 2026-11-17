// Namespace: Dino.BusSand.App.UI
public class GiftPackPanel : UIPanel // TypeDefIndex: 3759
{
	// Fields
	private static readonly Vector2[][] ItemPos; // 0x0
	private static readonly float[] Gp4BgWidth; // 0x8
	private static readonly float[] Gp4BgHeight; // 0x10
	private const float Gp4SpacingX = 13;
	private const float Gp4SpacingY = 3;
	private GiftPackPanel.Param _p; // 0x38
	private int _shopItemId; // 0x40
	private bool _purchasing; // 0x44
	private bool _closed; // 0x45
	private GiftPackTrack.Gift _track; // 0x48

	// Properties
	private bool IsGp4 { get; }

	// Methods

	// RVA: 0x21A8C98 Offset: 0x21A4C98 VA: 0x21A8C98 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21AA04C Offset: 0x21A604C VA: 0x21AA04C Slot: 6
	public override void OnClose() { }

	// RVA: 0x21AA120 Offset: 0x21A6120 VA: 0x21AA120 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21AA1A0 Offset: 0x21A61A0 VA: 0x21AA1A0
	private bool get_IsGp4() { }

	// RVA: 0x21A972C Offset: 0x21A572C VA: 0x21A972C
	private void BuildItems() { }

	// RVA: 0x21AA200 Offset: 0x21A6200 VA: 0x21AA200
	private void SetCell(Transform cell, int id, long n) { }

	// RVA: 0x21AA550 Offset: 0x21A6550 VA: 0x21AA550
	private static void LayoutGp4(RectTransform grid, List<Transform> nodes, int n) { }

	[IteratorStateMachine(typeof(GiftPackPanel.<Countdown>d__19))]
	// RVA: 0x21A9FE0 Offset: 0x21A5FE0 VA: 0x21A9FE0
	private IEnumerator Countdown() { }

	// RVA: 0x21AA134 Offset: 0x21A6134 VA: 0x21AA134
	private void OnCloseClick() { }

	// RVA: 0x21AAA58 Offset: 0x21A6A58 VA: 0x21AAA58
	private void OnBuyClick() { }

	// RVA: 0x21AAEBC Offset: 0x21A6EBC VA: 0x21AAEBC
	private void OnInvalidated(int packId) { }

	// RVA: 0x21A93DC Offset: 0x21A53DC VA: 0x21A93DC
	private void Finish(bool invokeClosed) { }

	// RVA: 0x21AAEEC Offset: 0x21A6EEC VA: 0x21AAEEC
	public void .ctor() { }

	// RVA: 0x21AAEF4 Offset: 0x21A6EF4 VA: 0x21AAEF4
	private static void .cctor() { }
}

