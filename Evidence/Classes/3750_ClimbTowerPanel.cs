// Namespace: Dino.BusSand.App.UI
public class ClimbTowerPanel : UIPanel // TypeDefIndex: 3750
{
	// Fields
	private const float BarDelay = 0.6;
	private const float BarDuration = 1.6;
	private const float MainUIDelay = 0.8;
	private const float MainUIDuration = 0.8;
	private const float ScrollOffsetY = 250;
	private const float TipsOffsetY = 150;
	private const float TipsFlyHeight = 150;
	private const float ItemH = 160;
	private const float ItemPad = 700;
	private const float FirstH = 320;
	private const float FirstPad = 484;
	private const float LastH = 1320;
	private const float BarBase = 240;
	private ClimbTowerFeature _f; // 0x38
	private ClimbTowerPanel.Param _p; // 0x40
	private RectTransform _content; // 0x48
	private RectTransform _viewport; // 0x50
	private RectTransform _bar; // 0x58
	private RectTransform _barProcess; // 0x60
	private RectTransform _marker; // 0x68
	private RectTransform _objBg; // 0x70
	private RectTransform _tickRoot; // 0x78
	private RectTransform _spineRoot; // 0x80
	private ScrollRect _scroll; // 0x88
	private readonly List<ClimbTowerItemView> _views; // 0x90
	private readonly List<float> _itemY; // 0x98
	private readonly List<int> _claimedThisOpen; // 0xA0
	private int[] _win; // 0xA8
	private float _maxHeight; // 0xB0
	private bool _busy; // 0xB4

	// Properties
	private float MinScrollY { get; }

	// Methods

	// RVA: 0x21A39C8 Offset: 0x219F9C8 VA: 0x21A39C8
	public static ClimbTowerPanel Open(bool isGuide, Action callback) { }

	// RVA: 0x21A3B90 Offset: 0x219FB90 VA: 0x21A3B90 Slot: 4
	public override void OnOpen(object param) { }

	[IteratorStateMachine(typeof(ClimbTowerPanel.<CloseNextFrame>d__33))]
	// RVA: 0x21A422C Offset: 0x21A022C VA: 0x21A422C
	private IEnumerator CloseNextFrame() { }

	// RVA: 0x21A4FD0 Offset: 0x21A0FD0 VA: 0x21A4FD0 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21A4FE4 Offset: 0x21A0FE4 VA: 0x21A4FE4
	private void OnCloseClick() { }

	// RVA: 0x21A5088 Offset: 0x21A1088 VA: 0x21A5088
	private void OnContinueClick() { }

	// RVA: 0x21A4298 Offset: 0x21A0298 VA: 0x21A4298
	private void BuildList() { }

	// RVA: 0x21A50C0 Offset: 0x21A10C0 VA: 0x21A50C0
	private void GenerateLoopTree() { }

	// RVA: 0x21A57D0 Offset: 0x21A17D0 VA: 0x21A57D0
	private static void SetChildActive(Transform t, int i) { }

	// RVA: 0x21A5474 Offset: 0x21A1474 VA: 0x21A5474
	private void BuildTicks() { }

	// RVA: 0x21A58D4 Offset: 0x21A18D4 VA: 0x21A58D4
	private void RefreshTicks(float height) { }

	// RVA: 0x21A5838 Offset: 0x21A1838 VA: 0x21A5838
	private float HeightOf(int c) { }

	// RVA: 0x21A5D98 Offset: 0x21A1D98 VA: 0x21A5D98
	private void LateUpdate() { }

	// RVA: 0x21A5E50 Offset: 0x21A1E50 VA: 0x21A5E50
	private static void Follow(RectTransform t, float y) { }

	// RVA: 0x21A5F04 Offset: 0x21A1F04 VA: 0x21A5F04
	private float get_MinScrollY() { }

	// RVA: 0x21A5FB4 Offset: 0x21A1FB4 VA: 0x21A5FB4
	private float ScrollYFor(int index) { }

	// RVA: 0x21A6078 Offset: 0x21A2078 VA: 0x21A6078
	private void SetScroll(float y) { }

	// RVA: 0x21A6120 Offset: 0x21A2120 VA: 0x21A6120
	private int ScrollIndexFor(int record) { }

	// RVA: 0x21A62C4 Offset: 0x21A22C4 VA: 0x21A62C4
	private void SetProgress(float h, int label, bool hideMarker) { }

	[IteratorStateMachine(typeof(ClimbTowerPanel.<StartAnim>d__51))]
	// RVA: 0x21A4F3C Offset: 0x21A0F3C VA: 0x21A4F3C
	private IEnumerator StartAnim() { }

	// RVA: 0x21A64F4 Offset: 0x21A24F4 VA: 0x21A64F4
	private static float EaseOutQuad(float k) { }

	// RVA: 0x21A6508 Offset: 0x21A2508 VA: 0x21A6508
	private void Finish() { }

	// RVA: 0x21A4DEC Offset: 0x21A0DEC VA: 0x21A4DEC
	private void InitTime() { }

	[IteratorStateMachine(typeof(ClimbTowerPanel.<CountDown>d__55))]
	// RVA: 0x21A658C Offset: 0x21A258C VA: 0x21A658C
	private IEnumerator CountDown() { }

	// RVA: 0x21A2314 Offset: 0x219E314 VA: 0x21A2314
	public bool IsOpenedClaim(int winPoint) { }

	// RVA: 0x21A2AE4 Offset: 0x219EAE4 VA: 0x21A2AE4
	public void HideAllItemTips(ClimbTowerItemView except) { }

	// RVA: 0x21A30F0 Offset: 0x219F0F0 VA: 0x21A30F0
	public void ShowClaimedTip(RectTransform box) { }

	[IteratorStateMachine(typeof(ClimbTowerPanel.<TipsAnim>d__59))]
	// RVA: 0x21A6620 Offset: 0x21A2620 VA: 0x21A6620
	private IEnumerator TipsAnim(RectTransform tips, Vector2 from, Vector2 to) { }

	// RVA: 0x21A2C98 Offset: 0x219EC98 VA: 0x21A2C98
	public void OnClaim(ClimbTowerItemView view) { }

	// RVA: 0x21A66DC Offset: 0x21A26DC VA: 0x21A66DC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21A680C Offset: 0x21A280C VA: 0x21A680C
	private void <BuildList>b__37_0(Vector2 _) { }
}

