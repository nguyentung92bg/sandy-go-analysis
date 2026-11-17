// Namespace: Dino.BusSand.App.UI
public class ActivityContinuePanel : UIPanel // TypeDefIndex: 3680
{
	// Fields
	private const string CloseClip = "ani_UISteakRateNoMove_Bulletinboard_b";
	private ActivityContinuePanel.Param _p; // 0x38
	private bool _done; // 0x40

	// Methods

	// RVA: 0x2185988 Offset: 0x2181988 VA: 0x2185988
	public static ActivityContinuePanel Open(string prefab, IStakeActivity activity, Action<int> revive, Action next) { }

	// RVA: 0x2185B54 Offset: 0x2181B54 VA: 0x2185B54 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2186D10 Offset: 0x2182D10 VA: 0x2186D10 Slot: 6
	public override void OnClose() { }

	// RVA: 0x2186DB4 Offset: 0x2182DB4 VA: 0x2186DB4
	private void OnItem(int id) { }

	// RVA: 0x2186F84 Offset: 0x2182F84 VA: 0x2186F84 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2187044 Offset: 0x2183044 VA: 0x2187044
	private void OnBuy() { }

	// RVA: 0x21872E8 Offset: 0x21832E8 VA: 0x21872E8
	private void OnAd() { }

	// RVA: 0x2186F98 Offset: 0x2182F98 VA: 0x2186F98
	private void OnCloseClick() { }

	[IteratorStateMachine(typeof(ActivityContinuePanel.<CloseThen>d__12))]
	// RVA: 0x2187260 Offset: 0x2183260 VA: 0x2187260
	private IEnumerator CloseThen(Action then) { }

	// RVA: 0x21873E0 Offset: 0x21833E0 VA: 0x21873E0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21873E8 Offset: 0x21833E8 VA: 0x21873E8
	private void <OnAd>b__10_0(bool ok) { }

	[CompilerGenerated]
	// RVA: 0x21874E4 Offset: 0x21834E4 VA: 0x21874E4
	private void <OnCloseClick>b__11_0() { }
}

