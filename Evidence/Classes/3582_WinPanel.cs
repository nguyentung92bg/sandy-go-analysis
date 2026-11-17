// Namespace: Dino.BusSand.App.UI
public class WinPanel : UIPanel, IKitPanel // TypeDefIndex: 3582
{
	// Fields
	private bool _busy; // 0x38
	private bool _done; // 0x39
	private KitTopBar _bar; // 0x40
	private RectTransform _pile; // 0x48
	private RectTransform _multRim; // 0x50
	private Tween _count; // 0x58
	private int _coins; // 0x60
	private RectTransform _needle; // 0x68
	private readonly List<RectTransform> _segs; // 0x70
	private int[] _mults; // 0x78
	private int _mult; // 0x80
	private TextMeshProUGUI _amount; // 0x88
	private bool _needleRun; // 0x90
	private float _barTotal; // 0x94
	private TMP_Text _adLabel; // 0x98
	private int _shownMult; // 0xA0
	private int _needleGen; // 0xA4
	private readonly List<TextMeshProUGUI> _segLabels; // 0xA8
	private readonly List<float> _segX; // 0xB0
	private const float ChestFillMin = 50;
	private const float ChestFillH = 64;
	private const float ChestFillIn = 13;
	private RectTransform _claimBtn; // 0xB8
	private RectTransform _adBtn; // 0xC0

	// Methods

	// RVA: 0x2310E68 Offset: 0x230CE68 VA: 0x2310E68 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2312BC4 Offset: 0x230EBC4 VA: 0x2312BC4
	private void BuildChestStrip(RectTransform box, float centreY) { }

	// RVA: 0x2313250 Offset: 0x230F250 VA: 0x2313250
	private void ChestFull(RectTransform icon, TMP_Text label) { }

	// RVA: 0x2312318 Offset: 0x230E318 VA: 0x2312318
	private void BuildMultiplier(RectTransform box, float centreY) { }

	[IteratorStateMachine(typeof(WinPanel.<NeedleLoop>d__26))]
	// RVA: 0x23135DC Offset: 0x230F5DC VA: 0x23135DC
	private IEnumerator NeedleLoop(float total) { }

	// RVA: 0x2313680 Offset: 0x230F680 VA: 0x2313680
	private void OnClaim() { }

	// RVA: 0x23136C4 Offset: 0x230F6C4 VA: 0x23136C4
	private void SpendButtons() { }

	// RVA: 0x231390C Offset: 0x230F90C VA: 0x231390C
	private void FlyAndContinue(int amount) { }

	// RVA: 0x2313BBC Offset: 0x230FBBC VA: 0x2313BBC
	private void Continue() { }

	// RVA: 0x2313E18 Offset: 0x230FE18 VA: 0x2313E18
	private void OnAd() { }

	[IteratorStateMachine(typeof(WinPanel.<CountUp>d__34))]
	// RVA: 0x2313F7C Offset: 0x230FF7C VA: 0x2313F7C
	private IEnumerator CountUp(int from, int to) { }

	// RVA: 0x2314024 Offset: 0x2310024 VA: 0x2314024 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2314038 Offset: 0x2310038 VA: 0x2314038
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2314178 Offset: 0x2310178 VA: 0x2314178
	private void <OnOpen>b__17_2() { }

	[CompilerGenerated]
	// RVA: 0x23142EC Offset: 0x23102EC VA: 0x23142EC
	private void <FlyAndContinue>b__31_0() { }

	[CompilerGenerated]
	// RVA: 0x2314404 Offset: 0x2310404 VA: 0x2314404
	private void <Continue>b__32_0() { }
}

