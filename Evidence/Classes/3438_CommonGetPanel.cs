// Namespace: Dino.BusSand.App.UI
public class CommonGetPanel : UIPanel // TypeDefIndex: 3438
{
	// Fields
	private const float CellW = 290;
	private const float CellH = 236;
	private const float SpacingX = 36;
	private const float SpacingY = 84;
	private const int Columns = 3;
	private const string AnimItem = "UIPassportFinishGet_b";
	private const string AnimClaim = "UIPassportFinishGet_c";
	private const string AnimClose = "UIPassportFinishGet_d_common";
	private CommonGetPanel.Request _req; // 0x38
	private readonly List<Animation> _itemAnims; // 0x40
	private bool _playing; // 0x48
	private bool _closing; // 0x49

	// Methods

	// RVA: 0x22AC838 Offset: 0x22A8838 VA: 0x22AC838
	public static CommonGetPanel Open(CommonGetPanel.Request r) { }

	// RVA: 0x22AC96C Offset: 0x22A896C VA: 0x22AC96C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22AE390 Offset: 0x22AA390 VA: 0x22AE390 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22ACB6C Offset: 0x22A8B6C VA: 0x22ACB6C
	private static CommonGetPanel.Request ToRequest(object param) { }

	// RVA: 0x22ADAC8 Offset: 0x22A9AC8 VA: 0x22ADAC8
	private void RefreshTitle() { }

	// RVA: 0x22ADD50 Offset: 0x22A9D50 VA: 0x22ADD50
	private void RefreshDesc() { }

	// RVA: 0x22ADE38 Offset: 0x22A9E38 VA: 0x22ADE38
	private void RefreshRewardList() { }

	// RVA: 0x22AE748 Offset: 0x22AA748 VA: 0x22AE748
	private static void Place(RectTransform rt, int index, int count, float gridW) { }

	// RVA: 0x22AE87C Offset: 0x22AA87C VA: 0x22AE87C
	private void SetRewardItem(RectTransform item, int id, long count) { }

	[IteratorStateMachine(typeof(CommonGetPanel.<PlayStaggered>d__23))]
	// RVA: 0x22AE324 Offset: 0x22AA324 VA: 0x22AE324
	private IEnumerator PlayStaggered() { }

	// RVA: 0x22AE3A4 Offset: 0x22AA3A4 VA: 0x22AE3A4
	private void OnMaskClick() { }

	[IteratorStateMachine(typeof(CommonGetPanel.<CloseAfter>d__25))]
	// RVA: 0x22AEE18 Offset: 0x22AAE18 VA: 0x22AEE18
	private IEnumerator CloseAfter(float delay) { }

	// RVA: 0x22AEEBC Offset: 0x22AAEBC VA: 0x22AEEBC
	public void .ctor() { }
}

