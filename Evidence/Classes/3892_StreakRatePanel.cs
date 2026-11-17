// Namespace: Dino.BusSand.App.UI
public class StreakRatePanel : UIPanel // TypeDefIndex: 3892
{
	// Fields
	private const float ItemH = 300;
	private const float Padding = 9;
	private const float GuideScrollTime = 2;
	private StreakRateFeature _f; // 0x38
	private StreakRatePanel.Param _p; // 0x40
	private long _endMs; // 0x48
	private RectTransform _content; // 0x50
	private RectTransform _viewport; // 0x58
	private ScrollRect _scroll; // 0x60
	private readonly List<RectTransform> _items; // 0x68
	private Transform _clickedFor; // 0x70
	private bool _autoScrolling; // 0x78

	// Properties
	private float MinY { get; }

	// Methods

	// RVA: 0x21E15B4 Offset: 0x21DD5B4 VA: 0x21E15B4
	public static StreakRatePanel Open(bool isGuide, Action callback) { }

	// RVA: 0x21E333C Offset: 0x21DF33C VA: 0x21E333C Slot: 4
	public override void OnOpen(object param) { }

	[IteratorStateMachine(typeof(StreakRatePanel.<CloseNextFrame>d__15))]
	// RVA: 0x21E38DC Offset: 0x21DF8DC VA: 0x21E38DC
	private IEnumerator CloseNextFrame() { }

	// RVA: 0x21E48A0 Offset: 0x21E08A0 VA: 0x21E48A0 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21E48B4 Offset: 0x21E08B4 VA: 0x21E48B4
	private void OnCloseClick() { }

	// RVA: 0x21E3948 Offset: 0x21DF948 VA: 0x21E3948
	private void InitRate() { }

	// RVA: 0x21E3A84 Offset: 0x21DFA84 VA: 0x21E3A84
	private void RefreshInfo() { }

	[IteratorStateMachine(typeof(StreakRatePanel.<Timer>d__20))]
	// RVA: 0x21E480C Offset: 0x21E080C VA: 0x21E480C
	private IEnumerator Timer() { }

	// RVA: 0x21E404C Offset: 0x21E004C VA: 0x21E404C
	private void BuildList() { }

	// RVA: 0x21E4990 Offset: 0x21E0990 VA: 0x21E4990
	private void SetItem(RectTransform item, int state, int score, int rewardId, int index, int count) { }

	// RVA: 0x21E50E4 Offset: 0x21E10E4 VA: 0x21E50E4
	private void OnItemClicked(Transform item, int state, bool forceClose) { }

	[IteratorStateMachine(typeof(StreakRatePanel.<PopBubble>d__24))]
	// RVA: 0x21E5300 Offset: 0x21E1300 VA: 0x21E5300
	private IEnumerator PopBubble(Transform c) { }

	// RVA: 0x21E5254 Offset: 0x21E1254 VA: 0x21E5254
	private void HideClicked() { }

	// RVA: 0x21E5394 Offset: 0x21E1394 VA: 0x21E5394
	private float get_MinY() { }

	// RVA: 0x21E46EC Offset: 0x21E06EC VA: 0x21E46EC
	private void ScrollToIndex(int index) { }

	[IteratorStateMachine(typeof(StreakRatePanel.<GuideScroll>d__29))]
	// RVA: 0x21E4680 Offset: 0x21E0680 VA: 0x21E4680
	private IEnumerator GuideScroll() { }

	// RVA: 0x21E5498 Offset: 0x21E1498 VA: 0x21E5498
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21E5520 Offset: 0x21E1520 VA: 0x21E5520
	private void <BuildList>b__21_0(Vector2 _) { }
}

