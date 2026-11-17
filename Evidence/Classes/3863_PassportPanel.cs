// Namespace: Dino.BusSand.App.UI
public class PassportPanel : UIPanel // TypeDefIndex: 3863
{
	// Fields
	private const float HStart = 238;
	private const float HItem = 372;
	private const float HItem1 = 482;
	private const float HEnd = 840;
	private static PassportPanel s_open; // 0x0
	private PassportPanel.Param _p; // 0x38
	private PassportFeature _f; // 0x40
	private bool _closed; // 0x48
	private bool _effect; // 0x49
	private bool _endRevealed; // 0x4A
	private RectTransform _content; // 0x50
	private ScrollRect _scroll; // 0x58
	private Transform _start; // 0x60
	private Transform _end; // 0x68
	private Transform _lockRow; // 0x70
	private readonly List<Transform> _stageNodes; // 0x78

	// Properties
	private int LastUnlocked { get; }

	// Methods

	// RVA: 0x21D224C Offset: 0x21CE24C VA: 0x21D224C
	public static void ForceClose(bool invoke) { }

	// RVA: 0x21D2EC8 Offset: 0x21CEEC8 VA: 0x21D2EC8 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21D45B0 Offset: 0x21D05B0 VA: 0x21D45B0 Slot: 6
	public override void OnClose() { }

	// RVA: 0x21D46E4 Offset: 0x21D06E4 VA: 0x21D46E4 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21D3334 Offset: 0x21CF334 VA: 0x21D3334
	private void FitScroll() { }

	// RVA: 0x21D355C Offset: 0x21CF55C VA: 0x21D355C
	private void BuildList() { }

	// RVA: 0x21D5284 Offset: 0x21D1284 VA: 0x21D5284
	private int get_LastUnlocked() { }

	// RVA: 0x21D4ECC Offset: 0x21D0ECC VA: 0x21D4ECC
	private List<float> Layout() { }

	// RVA: 0x21D52CC Offset: 0x21D12CC VA: 0x21D52CC
	private static float Place(Transform t, float top, float h) { }

	// RVA: 0x21D53D0 Offset: 0x21D13D0 VA: 0x21D53D0
	private void ScrollTo(int listIndex) { }

	// RVA: 0x21D44B0 Offset: 0x21D04B0 VA: 0x21D44B0
	private void ScrollToCurrent() { }

	// RVA: 0x21D3AEC Offset: 0x21CFAEC VA: 0x21D3AEC
	private void BindButtons() { }

	// RVA: 0x21D4718 Offset: 0x21D0718 VA: 0x21D4718
	private void BindStage(Transform node, int i) { }

	// RVA: 0x21D55D8 Offset: 0x21D15D8 VA: 0x21D55D8
	private static void Rebind(Transform t, Action a) { }

	// RVA: 0x21D5690 Offset: 0x21D1690 VA: 0x21D5690
	private void OnChanged() { }

	// RVA: 0x21D42E8 Offset: 0x21D02E8 VA: 0x21D42E8
	private void RefreshAll() { }

	// RVA: 0x21D56A8 Offset: 0x21D16A8 VA: 0x21D56A8
	private void RefreshTop() { }

	// RVA: 0x21D69EC Offset: 0x21D29EC VA: 0x21D69EC
	private void SetSlider(float v) { }

	// RVA: 0x21D6AF4 Offset: 0x21D2AF4 VA: 0x21D6AF4
	private void SetStageNum(int stage) { }

	// RVA: 0x21D5994 Offset: 0x21D1994 VA: 0x21D5994
	private void RefreshStage(int i) { }

	// RVA: 0x21D62B4 Offset: 0x21D22B4 VA: 0x21D62B4
	private void RefreshEnd() { }

	// RVA: 0x21D68E0 Offset: 0x21D28E0 VA: 0x21D68E0
	private void RefreshLockRow() { }

	[IteratorStateMachine(typeof(PassportPanel.<Countdown>d__40))]
	// RVA: 0x21D4544 Offset: 0x21D0544 VA: 0x21D4544
	private IEnumerator Countdown() { }

	// RVA: 0x21D7264 Offset: 0x21D3264 VA: 0x21D7264
	private bool CanClick() { }

	// RVA: 0x21D7284 Offset: 0x21D3284 VA: 0x21D7284
	private void Tip(string key) { }

	// RVA: 0x21D74A0 Offset: 0x21D34A0 VA: 0x21D74A0
	private void OnTips() { }

	// RVA: 0x21D7524 Offset: 0x21D3524 VA: 0x21D7524
	private void OnActive() { }

	// RVA: 0x21D773C Offset: 0x21D373C VA: 0x21D773C
	private void OnFreeClick(int i) { }

	// RVA: 0x21D8054 Offset: 0x21D4054 VA: 0x21D8054
	private void OnPaidClick(int i) { }

	// RVA: 0x21D7F0C Offset: 0x21D3F0C VA: 0x21D7F0C
	private void Toast(string text) { }

	// RVA: 0x21D7B50 Offset: 0x21D3B50 VA: 0x21D7B50
	private static string BoxText(int box) { }

	// RVA: 0x21D823C Offset: 0x21D423C VA: 0x21D823C
	private void PlayLock(int i) { }

	// RVA: 0x21D7884 Offset: 0x21D3884 VA: 0x21D7884
	private void AfterClaim(int i, bool paid, List<PassportFeature.Reward> rewards) { }

	// RVA: 0x21D8580 Offset: 0x21D4580 VA: 0x21D8580
	private void OnEndClick() { }

	// RVA: 0x21D86D8 Offset: 0x21D46D8 VA: 0x21D86D8
	private void OnLockRowClick() { }

	// RVA: 0x21D87CC Offset: 0x21D47CC VA: 0x21D87CC
	private void BlockInput(bool block) { }

	[IteratorStateMachine(typeof(PassportPanel.<AppendKeys>d__54))]
	// RVA: 0x21D4444 Offset: 0x21D0444 VA: 0x21D4444
	private IEnumerator AppendKeys() { }

	// RVA: 0x21D8930 Offset: 0x21D4930 VA: 0x21D8930
	private void FinishAppend(int lastBefore) { }

	[IteratorStateMachine(typeof(PassportPanel.<UnlockEffect>d__56))]
	// RVA: 0x21D436C Offset: 0x21D036C VA: 0x21D436C
	private IEnumerator UnlockEffect() { }

	[IteratorStateMachine(typeof(PassportPanel.<Guide>d__57))]
	// RVA: 0x21D43D8 Offset: 0x21D03D8 VA: 0x21D43D8
	private IEnumerator Guide() { }

	// RVA: 0x21D4704 Offset: 0x21D0704 VA: 0x21D4704
	private void OnCloseClick() { }

	// RVA: 0x21D2DF4 Offset: 0x21CEDF4 VA: 0x21D2DF4
	private void Finish(bool invoke) { }

	// RVA: 0x21D8C10 Offset: 0x21D4C10 VA: 0x21D8C10
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21D8C98 Offset: 0x21D4C98 VA: 0x21D8C98
	private void <BindButtons>b__29_0() { }
}

