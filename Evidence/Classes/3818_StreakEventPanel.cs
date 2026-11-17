// Namespace: Dino.BusSand.App.UI
public class StreakEventPanel : UIPanel, IKitPanel // TypeDefIndex: 3818
{
	// Fields
	public const string PrefabKey = "UIEvStreak2D";
	private const float PathTop = 883;
	private const float RowH = 350;
	private const float NodeX = -286;
	private const float CardX = 116;
	private const float BarY = 760;
	private const float TrackW = 910;
	private const float FillIn = 15;
	private StreakRateFeature _f; // 0x38
	private StreakRateSlot _s; // 0x40
	private RectTransform _fill; // 0x48
	private RectTransform _star; // 0x50
	private RectTransform _content; // 0x58
	private RectTransform _green; // 0x60
	private RectTransform _guide; // 0x68
	private Image _barReward; // 0x70
	private TextMeshProUGUI _barLabel; // 0x78
	private TextMeshProUGUI _barAmount; // 0x80
	private TextMeshProUGUI _timer; // 0x88
	private ScrollRect _scroll; // 0x90
	private readonly List<StreakEventPanel.Row> _rows; // 0x98
	private bool _busy; // 0xA0
	private float _tick; // 0xA4

	// Methods

	// RVA: 0x21BF9E8 Offset: 0x21BB9E8 VA: 0x21BF9E8 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21C2228 Offset: 0x21BE228 VA: 0x21C2228
	private static void At(Component c, float y, float x) { }

	// RVA: 0x21C0CDC Offset: 0x21BCCDC VA: 0x21C0CDC
	private void BuildHeader() { }

	// RVA: 0x21C22E4 Offset: 0x21BE2E4 VA: 0x21C22E4
	private void Corner(string name, string tile, float x) { }

	// RVA: 0x21C1710 Offset: 0x21BD710 VA: 0x21C1710
	private void ClearTheNotch() { }

	// RVA: 0x21BFE98 Offset: 0x21BBE98 VA: 0x21BFE98
	private void BuildPath() { }

	// RVA: 0x21C24E4 Offset: 0x21BE4E4 VA: 0x21C24E4
	private static float RowY(int i, int n) { }

	// RVA: 0x21C2428 Offset: 0x21BE428 VA: 0x21C2428
	private static void Place(Component c, float y, float x) { }

	[IteratorStateMachine(typeof(StreakEventPanel.<Glide>d__31))]
	// RVA: 0x21C251C Offset: 0x21BE51C VA: 0x21C251C
	private IEnumerator Glide(int index) { }

	[IteratorStateMachine(typeof(StreakEventPanel.<GrowGreen>d__32))]
	// RVA: 0x21C25C0 Offset: 0x21BE5C0 VA: 0x21C25C0
	private IEnumerator GrowGreen(int reached) { }

	// RVA: 0x21C2070 Offset: 0x21BE070 VA: 0x21C2070
	private void ScrollTo(int index) { }

	// RVA: 0x21C2664 Offset: 0x21BE664 VA: 0x21C2664
	private void Update() { }

	// RVA: 0x21C1AA0 Offset: 0x21BDAA0 VA: 0x21C1AA0
	private void ShowBar(int index, int score) { }

	// RVA: 0x21C27A4 Offset: 0x21BE7A4 VA: 0x21C27A4
	private void SetFill(float k) { }

	// RVA: 0x21C1E30 Offset: 0x21BDE30 VA: 0x21C1E30
	private void RefreshPath(int reached) { }

	[IteratorStateMachine(typeof(StreakEventPanel.<PayWin>d__39))]
	// RVA: 0x21C21BC Offset: 0x21BE1BC VA: 0x21C21BC
	private IEnumerator PayWin() { }

	// RVA: 0x21C28AC Offset: 0x21BE8AC VA: 0x21C28AC
	private void ShowGuide() { }

	// RVA: 0x21C2B3C Offset: 0x21BEB3C VA: 0x21C2B3C Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21C2C04 Offset: 0x21BEC04 VA: 0x21C2C04
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21C2C8C Offset: 0x21BEC8C VA: 0x21C2C8C
	private void <OnOpen>b__23_0() { }

	[CompilerGenerated]
	// RVA: 0x21C2CA0 Offset: 0x21BECA0 VA: 0x21C2CA0
	private void <OnOpen>b__23_1() { }
}

