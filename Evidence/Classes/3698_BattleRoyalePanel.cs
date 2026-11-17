// Namespace: Dino.BusSand.App.UI
public class BattleRoyalePanel : UIPanel // TypeDefIndex: 3698
{
	// Fields
	private static readonly string[] Keys; // 0x0
	private BattleRoyalePanel.Param _p; // 0x38
	private BattleRoyaleCore _core; // 0x40
	private float _openTime; // 0x48
	private bool _forbidTips; // 0x4C
	private bool _flowClosed; // 0x4D
	private Coroutine _timer; // 0x50

	// Properties
	public BattleRoyalePanel.PanelState State { get; }

	// Methods

	// RVA: 0x218CB10 Offset: 0x2188B10 VA: 0x218CB10
	public BattleRoyalePanel.PanelState get_State() { }

	// RVA: 0x218CB28 Offset: 0x2188B28 VA: 0x218CB28 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x218CEF8 Offset: 0x2188EF8 VA: 0x218CEF8
	private void Refresh() { }

	// RVA: 0x218D61C Offset: 0x218961C VA: 0x218D61C
	private void RefreshNormal() { }

	// RVA: 0x218D500 Offset: 0x2189500 VA: 0x218D500
	private void RefreshLose() { }

	// RVA: 0x218D890 Offset: 0x2189890 VA: 0x218D890
	private void SetTime(long end) { }

	[IteratorStateMachine(typeof(BattleRoyalePanel.<Countdown>d__16))]
	// RVA: 0x218D92C Offset: 0x218992C VA: 0x218D92C
	private IEnumerator Countdown(long end) { }

	// RVA: 0x218D9A8 Offset: 0x21899A8 VA: 0x218D9A8
	private void ShowFinished() { }

	// RVA: 0x218DBE8 Offset: 0x2189BE8 VA: 0x218DBE8
	public void SetForbidTips(bool on) { }

	// RVA: 0x218DBF0 Offset: 0x2189BF0 VA: 0x218DBF0
	public void PlayWinChangeStage(float delay) { }

	[IteratorStateMachine(typeof(BattleRoyalePanel.<WinChangeStage>d__20))]
	// RVA: 0x218DC3C Offset: 0x2189C3C VA: 0x218DC3C
	private IEnumerator WinChangeStage(float delay) { }

	// RVA: 0x218DCE0 Offset: 0x2189CE0 VA: 0x218DCE0
	public void PlayBigWin(float duration) { }

	[IteratorStateMachine(typeof(BattleRoyalePanel.<BigWin>d__22))]
	// RVA: 0x218DD30 Offset: 0x2189D30 VA: 0x218DD30
	private IEnumerator BigWin(float d) { }

	[IteratorStateMachine(typeof(BattleRoyalePanel.<MoveBottomTip>d__23))]
	// RVA: 0x218DDD4 Offset: 0x2189DD4 VA: 0x218DDD4
	public IEnumerator MoveBottomTip(bool show) { }

	// RVA: 0x218DE7C Offset: 0x2189E7C VA: 0x218DE7C
	private void OnMaskClick() { }

	// RVA: 0x218E05C Offset: 0x218A05C VA: 0x218E05C
	private void OnTipsClick() { }

	// RVA: 0x218E208 Offset: 0x218A208 VA: 0x218E208
	private void OnContinueClick() { }

	// RVA: 0x218E38C Offset: 0x218A38C VA: 0x218E38C
	private void OnCloseClick() { }

	// RVA: 0x218E478 Offset: 0x218A478 VA: 0x218E478 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x218E48C Offset: 0x218A48C VA: 0x218E48C
	public void FinishGuide() { }

	// RVA: 0x218E240 Offset: 0x218A240 VA: 0x218E240
	public void CloseFlow() { }

	// RVA: 0x218E490 Offset: 0x218A490 VA: 0x218E490 Slot: 6
	public override void OnClose() { }

	// RVA: 0x218E4D4 Offset: 0x218A4D4 VA: 0x218E4D4
	public void .ctor() { }

	// RVA: 0x218E4DC Offset: 0x218A4DC VA: 0x218E4DC
	private static void .cctor() { }
}

