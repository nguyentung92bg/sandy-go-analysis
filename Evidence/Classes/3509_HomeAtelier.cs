// Namespace: Dino.BusSand.App.UI
public class HomeAtelier : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IPointerDownHandler, IBeginDragHandler, IDragHandler, IEndDragHandler // TypeDefIndex: 3509
{
	// Fields
	public static bool Enabled; // 0x0
	public static readonly Color PaperTone; // 0x4
	private const float Sag = 34;
	private const float HalfSpan = 720;
	private const float Gap = 150;
	private const float LineUnderTop = 34;
	private const float Margin = 0.07;
	private const float FootMargin = 0.12;
	private const float BusRoof = 0.382;
	private const float MaxPaperH = 400;
	private const float MinPaperH = 220;
	private const float MaxPaperW = 500;
	private const float RoofGap = 92;
	private RectTransform _root; // 0x20
	private RectTransform _line; // 0x28
	private RectTransform _hit; // 0x30
	private HomeTwine _twine; // 0x38
	private RectTransform _picture; // 0x40
	private Action _play; // 0x48
	private Action _sketched; // 0x50
	private int _current; // 0x58
	private float _focus; // 0x5C
	private float _lineY; // 0x60
	private float _w; // 0x64
	private float _h; // 0x68
	private float _spacing; // 0x6C
	private float _aspect; // 0x70
	private float _roof; // 0x74
	private readonly Dictionary<int, HomeAtelier.Sheet> _sheets; // 0x78
	private readonly List<int> _drop; // 0x80
	private int _paintLevel; // 0x88
	private int _drawLevel; // 0x8C
	private float _paint; // 0x90
	private float _draw; // 0x94
	private float _sign; // 0x98
	private bool _signing; // 0x9C
	private bool _skip; // 0x9D
	private RectTransform _pencil; // 0xA0
	private Vector2 _tip; // 0xA8
	private float _browse; // 0xB0
	private float _browseV; // 0xB4
	private float _browseTo; // 0xB8
	private float _idleAt; // 0xBC
	private float _dragFrom; // 0xC0
	private float _dragX; // 0xC4
	private bool _dragging; // 0xC8
	private bool _gliding; // 0xC9
	private float _gustAt; // 0xCC
	private float _gustK; // 0xD0
	private bool _diving; // 0xD4
	private HomeAtelier.Sheet _diveSheet; // 0xD8
	private CanvasGroup _twineGroup; // 0xE0
	private bool _laidOut; // 0xE8
	private float _now; // 0xEC
	private readonly Random _rng; // 0xF0
	[CompilerGenerated]
	private bool <Busy>k__BackingField; // 0xF8
	[CompilerGenerated]
	private HomeStage <Stage>k__BackingField; // 0x100
	private readonly Dictionary<string, RectTransform> _nodes; // 0x108
	private static readonly Vector3[] s_corners; // 0x18
	private CanvasGroup _pencilGroup; // 0x110
	private float _sheenAt; // 0x118
	private float _sheen; // 0x11C
	private float _lastGust; // 0x120
	private float _honkAt; // 0x124
	private readonly List<HomeAtelier.Grain> _grains; // 0x128
	private HomeAtelier.Sheet _pencilOn; // 0x130
	private float _pencilShow; // 0x138
	private float _pencilTo; // 0x13C

	// Properties
	public bool Busy { get; set; }
	public float Focus { get; }
	public HomeStage Stage { get; set; }
	public RectTransform Root { get; }
	public float RoofY { get; }
	public float LineY { get; }
	public float Spacing { get; }
	public bool Browsing { get; }
	private float PaperAspect { get; }
	private Vector4 PicRect { get; }

	// Methods

	// RVA: 0x22D442C Offset: 0x22D042C VA: 0x22D442C
	private float Range(float a, float b) { }

	[CompilerGenerated]
	// RVA: 0x22D4470 Offset: 0x22D0470 VA: 0x22D4470
	public bool get_Busy() { }

	[CompilerGenerated]
	// RVA: 0x22D4478 Offset: 0x22D0478 VA: 0x22D4478
	private void set_Busy(bool value) { }

	// RVA: 0x22D4480 Offset: 0x22D0480 VA: 0x22D4480
	public float get_Focus() { }

	[CompilerGenerated]
	// RVA: 0x22D4488 Offset: 0x22D0488 VA: 0x22D4488
	public HomeStage get_Stage() { }

	[CompilerGenerated]
	// RVA: 0x22D4490 Offset: 0x22D0490 VA: 0x22D4490
	public void set_Stage(HomeStage value) { }

	// RVA: 0x22D44A0 Offset: 0x22D04A0 VA: 0x22D44A0
	public RectTransform get_Root() { }

	// RVA: 0x22D44A8 Offset: 0x22D04A8 VA: 0x22D44A8
	public float get_RoofY() { }

	// RVA: 0x22D44B0 Offset: 0x22D04B0 VA: 0x22D44B0
	public float get_LineY() { }

	// RVA: 0x22D44B8 Offset: 0x22D04B8 VA: 0x22D44B8
	public float get_Spacing() { }

	// RVA: 0x22D44C0 Offset: 0x22D04C0 VA: 0x22D44C0
	public bool get_Browsing() { }

	// RVA: 0x22D44F0 Offset: 0x22D04F0 VA: 0x22D44F0
	public void QaGust() { }

	// RVA: 0x22D44FC Offset: 0x22D04FC VA: 0x22D44FC
	public void QaHonk() { }

	// RVA: 0x22D48D8 Offset: 0x22D08D8 VA: 0x22D48D8
	public void QaPullBack(int sheets) { }

	// RVA: 0x22D490C Offset: 0x22D090C VA: 0x22D490C
	public static HomeAtelier Build(RectTransform panel, RectTransform picture, Action play, Action sketched) { }

	// RVA: 0x22D4B24 Offset: 0x22D0B24 VA: 0x22D4B24
	private void Init() { }

	// RVA: 0x22D4F34 Offset: 0x22D0F34 VA: 0x22D4F34
	private float get_PaperAspect() { }

	// RVA: 0x22D4F68 Offset: 0x22D0F68 VA: 0x22D4F68
	private Vector4 get_PicRect() { }

	// RVA: 0x22D4FAC Offset: 0x22D0FAC VA: 0x22D4FAC
	private void Layout(bool snap) { }

	// RVA: 0x22D558C Offset: 0x22D158C VA: 0x22D558C
	private float Bottom(string path, float fallback) { }

	// RVA: 0x22D584C Offset: 0x22D184C VA: 0x22D584C
	private float LineAt(float x) { }

	// RVA: 0x22D5894 Offset: 0x22D1894 VA: 0x22D5894
	private float SlopeAt(float x) { }

	// RVA: 0x22D58E0 Offset: 0x22D18E0 VA: 0x22D58E0
	private void StateOf(int level, out float paint, out float draw) { }

	// RVA: 0x22D592C Offset: 0x22D192C VA: 0x22D592C
	private HomeAtelier.Sheet Get(int level) { }

	// RVA: 0x22D6598 Offset: 0x22D2598 VA: 0x22D6598
	private void Free(HomeAtelier.Sheet s) { }

	// RVA: 0x22D669C Offset: 0x22D269C VA: 0x22D669C
	private void Sync(float dt) { }

	// RVA: 0x22D75BC Offset: 0x22D35BC VA: 0x22D75BC
	private HomeAtelier.Sheet Find(int level) { }

	// RVA: 0x22D749C Offset: 0x22D349C VA: 0x22D749C
	private Vector2 NumberAt() { }

	// RVA: 0x22D74F8 Offset: 0x22D34F8 VA: 0x22D74F8
	private float NumberShows(HomeAtelier.Sheet s) { }

	// RVA: 0x22D7634 Offset: 0x22D3634 VA: 0x22D7634
	private void LateUpdate() { }

	// RVA: 0x22D8618 Offset: 0x22D4618 VA: 0x22D8618
	private void Sheen(float dt) { }

	// RVA: 0x22D77B8 Offset: 0x22D37B8 VA: 0x22D77B8
	private void Restart() { }

	// RVA: 0x22D7970 Offset: 0x22D3970 VA: 0x22D7970
	private void Browse(float dt) { }

	// RVA: 0x22D7A2C Offset: 0x22D3A2C VA: 0x22D7A2C
	private void Wind(float dt) { }

	// RVA: 0x22D87EC Offset: 0x22D47EC VA: 0x22D87EC Slot: 5
	public void OnPointerDown(PointerEventData e) { }

	// RVA: 0x22D8808 Offset: 0x22D4808 VA: 0x22D8808 Slot: 6
	public void OnBeginDrag(PointerEventData e) { }

	// RVA: 0x22D8834 Offset: 0x22D4834 VA: 0x22D8834 Slot: 7
	public void OnDrag(PointerEventData e) { }

	// RVA: 0x22D8A60 Offset: 0x22D4A60 VA: 0x22D8A60 Slot: 8
	public void OnEndDrag(PointerEventData e) { }

	// RVA: 0x22D8C90 Offset: 0x22D4C90 VA: 0x22D8C90 Slot: 4
	public void OnPointerClick(PointerEventData e) { }

	// RVA: 0x22D4578 Offset: 0x22D0578 VA: 0x22D4578
	private void Honked() { }

	// RVA: 0x22D90D4 Offset: 0x22D50D4 VA: 0x22D90D4
	public void Homecoming(int won) { }

	[IteratorStateMachine(typeof(HomeAtelier.<HomecomingRoutine>d__116))]
	// RVA: 0x22D913C Offset: 0x22D513C VA: 0x22D913C
	private IEnumerator HomecomingRoutine(int won) { }

	[IteratorStateMachine(typeof(HomeAtelier.<Pour>d__117))]
	// RVA: 0x22D91E0 Offset: 0x22D51E0 VA: 0x22D91E0
	private IEnumerator Pour(HomeAtelier.Sheet s, Color main, Color shade) { }

	// RVA: 0x22D92E0 Offset: 0x22D52E0 VA: 0x22D92E0
	private Vector2 OnSheet(HomeAtelier.Sheet s, Vector2 uv, Vector4 r) { }

	// RVA: 0x22D9374 Offset: 0x22D5374 VA: 0x22D9374
	private void Throw(HomeAtelier.Sheet s, Vector2 top, float start) { }

	[IteratorStateMachine(typeof(HomeAtelier.<Hold>d__122))]
	// RVA: 0x22D98F8 Offset: 0x22D58F8 VA: 0x22D98F8
	private IEnumerator Hold(float seconds) { }

	// RVA: 0x22D999C Offset: 0x22D599C VA: 0x22D999C
	private void Glow(HomeAtelier.Sheet s) { }

	// RVA: 0x22DA20C Offset: 0x22D620C VA: 0x22DA20C
	private void ShowPencil(HomeAtelier.Sheet s, bool on) { }

	// RVA: 0x22D7F58 Offset: 0x22D3F58 VA: 0x22D7F58
	private void Pencil(float dt) { }

	// RVA: 0x22DA670 Offset: 0x22D6670 VA: 0x22DA670
	public float Dive() { }

	[IteratorStateMachine(typeof(HomeAtelier.<DiveRoutine>d__130))]
	// RVA: 0x22DA9AC Offset: 0x22D69AC VA: 0x22DA9AC
	private IEnumerator DiveRoutine(HomeAtelier.Sheet s) { }

	// RVA: 0x22DAA5C Offset: 0x22D6A5C VA: 0x22DAA5C
	public void Undive() { }

	// RVA: 0x22DAC80 Offset: 0x22D6C80 VA: 0x22DAC80
	private void OnDisable() { }

	// RVA: 0x22DAD4C Offset: 0x22D6D4C VA: 0x22DAD4C
	private void OnDestroy() { }

	// RVA: 0x22DAF4C Offset: 0x22D6F4C VA: 0x22DAF4C
	public void .ctor() { }

	// RVA: 0x22DB150 Offset: 0x22D7150 VA: 0x22DB150
	private static void .cctor() { }
}

