// Namespace: Dino.BusSand.App.UI
public class GuidePanel : UIPanel // TypeDefIndex: 3494
{
	// Fields
	private const float MaskReferenceSize = 440;
	private const float HoleSoftness = 100;
	private const float HoleFadeIn = 0.25;
	private const float HoleFadeOut = 0.2;
	private const float IconRaiseMaskAlpha = 0.75;
	private const int RaisedSortingOrder = 5100;
	private const float Far = 4000;
	private const float TipMinWidth = 480;
	private const float TipMaxWidth = 960;
	private const float EdgeMargin = 32;
	private static readonly Vector2 ArrowPointerSize; // 0x0
	private static readonly Vector2 ArrowPointerOffset; // 0x8
	private static readonly Rect HandUv; // 0x10
	private static readonly string[] TipDirectionNodes; // 0x20
	[CompilerGenerated]
	private GuideRequest <Request>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <Completed>k__BackingField; // 0x40
	[CompilerGenerated]
	private Vector2 <AnchorScreenPos>k__BackingField; // 0x44
	private GuidePanel.Phase _phase; // 0x4C
	private Camera _uiCam; // 0x50
	private CanvasGroup _group; // 0x58
	private RectTransform _tips; // 0x60
	private RectTransform _tipsRoot; // 0x68
	private RectTransform _hand; // 0x70
	private RectTransform _handAnchor; // 0x78
	private RectTransform _arrow; // 0x80
	private RectTransform _holeLayer; // 0x88
	private RectTransform _holeQuad; // 0x90
	private RectTransform _holeL; // 0x98
	private RectTransform _holeR; // 0xA0
	private RectTransform _holeT; // 0xA8
	private RectTransform _holeB; // 0xB0
	private Texture2D _holeTex; // 0xB8
	private GuideDimHoles _dim; // 0xC0
	private Vector2 _holeCenter; // 0xC8
	private float _holeHalf; // 0xD0
	private RectTransform _raised; // 0xD8
	private Canvas _raisedCanvas; // 0xE0
	private bool _raisedCanvasAdded; // 0xE8
	private bool _raisedOverride; // 0xE9
	private int _raisedOrder; // 0xEC
	private Button _raisedBtn; // 0xF0
	private bool _pressOnRaised; // 0xF8
	private Canvas _extraCanvas; // 0x100
	private RectTransform _extra; // 0x108
	private static readonly Vector2 KitArrowSize; // 0x28

	// Properties
	public GuideRequest Request { get; set; }
	public bool Completed { get; set; }
	public bool WaitingForTap { get; }
	public Vector2 AnchorScreenPos { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22C7D08 Offset: 0x22C3D08 VA: 0x22C7D08
	public GuideRequest get_Request() { }

	[CompilerGenerated]
	// RVA: 0x22C7D10 Offset: 0x22C3D10 VA: 0x22C7D10
	private void set_Request(GuideRequest value) { }

	[CompilerGenerated]
	// RVA: 0x22C7D18 Offset: 0x22C3D18 VA: 0x22C7D18
	public bool get_Completed() { }

	[CompilerGenerated]
	// RVA: 0x22C7D20 Offset: 0x22C3D20 VA: 0x22C7D20
	private void set_Completed(bool value) { }

	// RVA: 0x22C7D28 Offset: 0x22C3D28 VA: 0x22C7D28
	public bool get_WaitingForTap() { }

	[CompilerGenerated]
	// RVA: 0x22C7D38 Offset: 0x22C3D38 VA: 0x22C7D38
	public Vector2 get_AnchorScreenPos() { }

	[CompilerGenerated]
	// RVA: 0x22C7D40 Offset: 0x22C3D40 VA: 0x22C7D40
	private void set_AnchorScreenPos(Vector2 value) { }

	// RVA: 0x22C7D48 Offset: 0x22C3D48 VA: 0x22C7D48 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22C84FC Offset: 0x22C44FC VA: 0x22C84FC
	private void EnterOpenDelayState() { }

	// RVA: 0x22C8A2C Offset: 0x22C4A2C VA: 0x22C8A2C
	private void BuildInputCatcher() { }

	// RVA: 0x22C8FE0 Offset: 0x22C4FE0 VA: 0x22C8FE0
	private static void AddTrigger(EventTrigger trigger, EventTriggerType type, UnityAction<BaseEventData> action) { }

	[IteratorStateMachine(typeof(GuidePanel.<Sequence>d__58))]
	// RVA: 0x22C8F74 Offset: 0x22C4F74 VA: 0x22C8F74
	private IEnumerator Sequence() { }

	// RVA: 0x22C912C Offset: 0x22C512C VA: 0x22C912C
	private bool TryResolveAnchor(out Vector2 screen) { }

	// RVA: 0x22C9478 Offset: 0x22C5478 VA: 0x22C9478
	private void BuildHole(Vector2 screen) { }

	// RVA: 0x22CA1C0 Offset: 0x22C61C0 VA: 0x22CA1C0
	private void LayoutHole(float k) { }

	// RVA: 0x22CA3C4 Offset: 0x22C63C4 VA: 0x22CA3C4
	private static void PlaceBox(RectTransform rt, Vector2 min, Vector2 max) { }

	[IteratorStateMachine(typeof(GuidePanel.<HoleOpen>d__63))]
	// RVA: 0x22CA348 Offset: 0x22C6348 VA: 0x22CA348
	private IEnumerator HoleOpen(float dur) { }

	// RVA: 0x22C9DDC Offset: 0x22C5DDC VA: 0x22C9DDC
	private static Texture2D MakeHoleTexture(float innerRatio) { }

	// RVA: 0x22CA4D0 Offset: 0x22C64D0 VA: 0x22CA4D0
	private bool InsideHole(Vector2 screen) { }

	// RVA: 0x22C9BB8 Offset: 0x22C5BB8 VA: 0x22C9BB8
	private RectTransform NewRect(string name, Transform parent) { }

	// RVA: 0x22CA108 Offset: 0x22C6108 VA: 0x22CA108
	private RectTransform NewBlock(string name) { }

	// RVA: 0x22CA5E0 Offset: 0x22C65E0 VA: 0x22CA5E0
	private void ShowIconRaise() { }

	// RVA: 0x22CA814 Offset: 0x22C6814 VA: 0x22CA814
	private void Raise(RectTransform target) { }

	// RVA: 0x22C8DF0 Offset: 0x22C4DF0 VA: 0x22C8DF0
	private void RaiseExtra(RectTransform target) { }

	// RVA: 0x22CAA10 Offset: 0x22C6A10 VA: 0x22CAA10
	private void RestoreExtra() { }

	// RVA: 0x22CAB10 Offset: 0x22C6B10 VA: 0x22CAB10
	private void RestoreRaised() { }

	// RVA: 0x22CABF8 Offset: 0x22C6BF8 VA: 0x22CABF8
	private void ShowTips(Vector2 screen) { }

	// RVA: 0x22CB30C Offset: 0x22C730C VA: 0x22CB30C
	private static void KitBubble(RectTransform bg) { }

	// RVA: 0x22CB53C Offset: 0x22C753C VA: 0x22CB53C
	private void PlaceClear(Transform root, Rect lit, bool underFirst) { }

	[IteratorStateMachine(typeof(GuidePanel.<TipAppear>d__78))]
	// RVA: 0x22CBD50 Offset: 0x22C7D50 VA: 0x22CBD50
	private IEnumerator TipAppear(Transform root) { }

	// RVA: 0x22CBDE4 Offset: 0x22C7DE4 VA: 0x22CBDE4
	private void ShowPointer(Vector2 screen) { }

	// RVA: 0x22CC3B4 Offset: 0x22C83B4 VA: 0x22CC3B4
	private void ShowArrowPointer(Vector2 screen) { }

	// RVA: 0x22CC540 Offset: 0x22C8540 VA: 0x22CC540
	private bool UseKitArrow() { }

	// RVA: 0x22CBEB4 Offset: 0x22C7EB4 VA: 0x22CBEB4
	private bool EnsureHandGraphic() { }

	[IteratorStateMachine(typeof(GuidePanel.<HandPress>d__84))]
	// RVA: 0x22CC348 Offset: 0x22C8348 VA: 0x22CC348
	private IEnumerator HandPress() { }

	[IteratorStateMachine(typeof(GuidePanel.<ArrowBob>d__85))]
	// RVA: 0x22CC7CC Offset: 0x22C87CC VA: 0x22CC7CC
	private static IEnumerator ArrowBob(RectTransform rt) { }

	// RVA: 0x22CB940 Offset: 0x22C7940 VA: 0x22CB940
	private void PlaceAt(RectTransform rt, Vector2 screen, Vector2 offset) { }

	// RVA: 0x22CBA78 Offset: 0x22C7A78 VA: 0x22CBA78
	private void ClampHorizontal(RectTransform rt, float halfWidth) { }

	// RVA: 0x22CBB48 Offset: 0x22C7B48 VA: 0x22CBB48
	private void ClampVertical(RectTransform rt, RectTransform box) { }

	// RVA: 0x22CC888 Offset: 0x22C8888 VA: 0x22CC888
	private void OnPointerDown(PointerEventData e) { }

	// RVA: 0x22CCA28 Offset: 0x22C8A28 VA: 0x22CCA28
	private void OnPointerUp(PointerEventData e) { }

	// RVA: 0x22CCFE8 Offset: 0x22C8FE8 VA: 0x22CCFE8
	public void Tap(Vector2 screen) { }

	// RVA: 0x22CCDC4 Offset: 0x22C8DC4 VA: 0x22CCDC4
	private void CompleteOnIcon() { }

	// RVA: 0x22CCE84 Offset: 0x22C8E84 VA: 0x22CCE84
	private void Finish() { }

	[IteratorStateMachine(typeof(GuidePanel.<FinishRoutine>d__94))]
	// RVA: 0x22CD5B4 Offset: 0x22C95B4 VA: 0x22CD5B4
	private IEnumerator FinishRoutine() { }

	// RVA: 0x22CD0AC Offset: 0x22C90AC VA: 0x22CD0AC
	private void MarkTriggered() { }

	[IteratorStateMachine(typeof(GuidePanel.<FadeGroup>d__96))]
	// RVA: 0x22CD648 Offset: 0x22C9648 VA: 0x22CD648
	private IEnumerator FadeGroup(float from, float to, float dur, Ease ease) { }

	[IteratorStateMachine(typeof(GuidePanel.<Wait>d__97))]
	// RVA: 0x22CD710 Offset: 0x22C9710 VA: 0x22CD710
	private static IEnumerator Wait(float s) { }

	// RVA: 0x22CD7A0 Offset: 0x22C97A0 VA: 0x22CD7A0 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22CD7A8 Offset: 0x22C97A8 VA: 0x22CD7A8 Slot: 6
	public override void OnClose() { }

	// RVA: 0x22CD850 Offset: 0x22C9850 VA: 0x22CD850
	public void .ctor() { }

	// RVA: 0x22CD858 Offset: 0x22C9858 VA: 0x22CD858
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x22CDA88 Offset: 0x22C9A88 VA: 0x22CDA88
	private void <BuildInputCatcher>b__56_0(BaseEventData d) { }

	[CompilerGenerated]
	// RVA: 0x22CDB08 Offset: 0x22C9B08 VA: 0x22CDB08
	private void <BuildInputCatcher>b__56_1(BaseEventData d) { }
}

