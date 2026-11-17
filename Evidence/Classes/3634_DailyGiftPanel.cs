// Namespace: Dino.BusSand.App.UI
public class DailyGiftPanel : RewardPopup // TypeDefIndex: 3634
{
	// Fields
	public const string PrefabKey = "UIDailyGift2D";
	private const float Top = 384.5;
	private const float WinH = 1560.5;
	private const float CardW = 270;
	private const float CardH = 316;
	private const float ColX = 281;
	private const float Row1Y = 640.5;
	private const float Row2Y = 972.5;
	private const float Day7Y = 1306.5;
	private const float Day7W = 830;
	private const float BarY = 381.5;
	private const float TrackX = -18;
	private const float TrackW = 616;
	private const float FillIn = 9;
	private const float FillH = 57;
	private const float FillMin = 51;
	private const float TapY = 1669;
	private const float AdY = 1565.5;
	private static readonly Color Cream; // 0x0
	private KitWindow _w; // 0x58
	private RectTransform _today; // 0x60
	private RectTransform _guide; // 0x68
	private RectTransform _chest; // 0x70
	private RectTransform _fill; // 0x78
	private TextMeshProUGUI _count; // 0x80
	private readonly List<ValueTuple<TextMeshProUGUI, KeyValuePair<int, long>>> _labels; // 0x88
	private const float AmountFont = 30;
	private static readonly Vector2 AmountNudge; // 0x10
	private static readonly Color AmountFace; // 0x18

	// Properties
	protected override string AdSlot { get; }
	protected override Vector3 FlyFrom { get; }

	// Methods

	// RVA: 0x2327FFC Offset: 0x2323FFC VA: 0x2327FFC Slot: 11
	protected override string get_AdSlot() { }

	// RVA: 0x232803C Offset: 0x232403C VA: 0x232803C Slot: 10
	protected override Vector3 get_FlyFrom() { }

	// RVA: 0x23280C4 Offset: 0x23240C4 VA: 0x23280C4 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2328F54 Offset: 0x2324F54 VA: 0x2328F54
	private static void At(Component c, float y, float x) { }

	// RVA: 0x2329C64 Offset: 0x2325C64 VA: 0x2329C64
	private void Fit(KitWindow w, float bottom) { }

	// RVA: 0x2329010 Offset: 0x2325010 VA: 0x2329010
	private void BuildBar(RectTransform root) { }

	// RVA: 0x232AF00 Offset: 0x2326F00 VA: 0x232AF00
	private void SetBar(float claims) { }

	// RVA: 0x23294F8 Offset: 0x23254F8 VA: 0x23294F8
	private RectTransform Card(RectTransform root, int index, int state, bool big) { }

	// RVA: 0x232B574 Offset: 0x2327574 VA: 0x232B574
	private static Vector2 TickPos(float w) { }

	// RVA: 0x232B284 Offset: 0x2327284 VA: 0x232B284
	private void SmallRewards(RectTransform node, List<KeyValuePair<int, long>> get, int state) { }

	// RVA: 0x232AF88 Offset: 0x2326F88 VA: 0x232AF88
	private void Day7Rewards(RectTransform node, List<KeyValuePair<int, long>> get, int state) { }

	// RVA: 0x232B58C Offset: 0x232758C VA: 0x232B58C
	private static Image RewardImage(RectTransform node, KeyValuePair<int, long> r, float scale) { }

	// RVA: 0x232B77C Offset: 0x232777C VA: 0x232B77C
	private static TextMeshProUGUI Amount(RectTransform node, KeyValuePair<int, long> r, float size) { }

	// RVA: 0x2329DC8 Offset: 0x2325DC8 VA: 0x2329DC8
	private RectTransform BuildGuide() { }

	// RVA: 0x232BB38 Offset: 0x2327B38 VA: 0x232BB38
	private static void GuideAmount(Image days, string name, int day, float artRight) { }

	// RVA: 0x232BA10 Offset: 0x2327A10 VA: 0x232BA10
	private static TextMeshProUGUI GuideText(RectTransform page, string name, string text) { }

	// RVA: 0x232B954 Offset: 0x2327954 VA: 0x232B954
	private static void Place(RectTransform page, Component c, float y, float x) { }

	// RVA: 0x232A840 Offset: 0x2326840 VA: 0x232A840
	private void ShowGuide(bool fromInfo) { }

	// RVA: 0x232BD74 Offset: 0x2327D74 VA: 0x232BD74
	private void HideGuide() { }

	// RVA: 0x232C03C Offset: 0x232803C VA: 0x232C03C Slot: 9
	protected override List<KeyValuePair<int, long>> Grant(int times) { }

	// RVA: 0x232C094 Offset: 0x2328094 VA: 0x232C094 Slot: 12
	protected override void OnGranted(List<KeyValuePair<int, long>> got, int times) { }

	// RVA: 0x232C818 Offset: 0x2328818 VA: 0x232C818 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x232C8BC Offset: 0x23288BC VA: 0x232C8BC
	public void .ctor() { }

	// RVA: 0x232C944 Offset: 0x2328944 VA: 0x232C944
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x232C9B8 Offset: 0x23289B8 VA: 0x232C9B8
	private void <HideGuide>b__49_0() { }
}

