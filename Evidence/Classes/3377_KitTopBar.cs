// Namespace: Dino.BusSand.App.UI
public class KitTopBar : MonoBehaviour, IKitAdoptAware // TypeDefIndex: 3377
{
	// Fields
	private TextMeshProUGUI _coins; // 0x20
	private TextMeshProUGUI _hearts; // 0x28
	private Image _heartIcon; // 0x30
	private long _shownCoins; // 0x38
	private long _target; // 0x40
	private long _held; // 0x48
	private string _shownHearts; // 0x50
	private RectTransform _coinPill; // 0x58
	[CompilerGenerated]
	private RectTransform <CoinIcon>k__BackingField; // 0x60
	private float _designY; // 0x68
	private RectTransform _shade; // 0x70
	private Rect _placedFor; // 0x78
	private Vector2Int _placedScreen; // 0x88
	[CompilerGenerated]
	private static int <Active>k__BackingField; // 0x0
	private bool _ambient; // 0x90
	private TextMeshProUGUI _heartCount; // 0x98
	private CanvasGroup _heartTap; // 0xA0
	private GameObject _heartPlus; // 0xA8
	private int _heartFull; // 0xB0
	private const float CornerRoom = 20;
	private float _placedY; // 0xB4
	private float _ownerDy; // 0xB8
	private static readonly Color ShadeInk; // 0x4
	private const float ShadeBelow = 150;
	private static Sprite s_shade; // 0x18
	public const float HomeY = -141;
	private static readonly KitTopBar.PillGeo CoinPill; // 0x20
	private static readonly KitTopBar.PillGeo HeartPill; // 0x38
	private const float PillK = 1.12;
	public static bool SkipUnchangedHearts; // 0x50
	private bool _keyed; // 0xBC
	private bool _kInf; // 0xBD
	private int _kLives; // 0xC0
	private int _kNext; // 0xC4
	private int _kFull; // 0xC8
	private long _kInfLeft; // 0xD0
	private string _kLang; // 0xD8

	// Properties
	public RectTransform CoinIcon { get; set; }
	public static int Active { get; set; }
	public RectTransform Shade { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2282FC4 Offset: 0x227EFC4 VA: 0x2282FC4
	public RectTransform get_CoinIcon() { }

	[CompilerGenerated]
	// RVA: 0x2282FCC Offset: 0x227EFCC VA: 0x2282FCC
	private void set_CoinIcon(RectTransform value) { }

	[CompilerGenerated]
	// RVA: 0x2282FD4 Offset: 0x227EFD4 VA: 0x2282FD4
	public static int get_Active() { }

	[CompilerGenerated]
	// RVA: 0x228302C Offset: 0x227F02C VA: 0x228302C
	private static void set_Active(int value) { }

	// RVA: 0x2283088 Offset: 0x227F088 VA: 0x2283088
	private void OnEnable() { }

	// RVA: 0x2283158 Offset: 0x227F158 VA: 0x2283158
	private void OnDisable() { }

	// RVA: 0x2283228 Offset: 0x227F228 VA: 0x2283228
	public void MarkAmbient() { }

	// RVA: 0x2283310 Offset: 0x227F310 VA: 0x2283310
	public void Hold(long amount, bool snap = False) { }

	// RVA: 0x2283CB8 Offset: 0x227FCB8 VA: 0x2283CB8
	public void Release(long amount) { }

	// RVA: 0x2283FF0 Offset: 0x227FFF0 VA: 0x2283FF0
	public static KitTopBar Build(Transform parent, Action onCoin, Action onHeart, Action onSettings, float y = -128, long hold = 0, bool hearts = True, bool avatar = False) { }

	// RVA: 0x2284C6C Offset: 0x2280C6C VA: 0x2284C6C
	public void Place() { }

	// RVA: 0x22853D8 Offset: 0x22813D8 VA: 0x22853D8 Slot: 4
	public void OnAdopted() { }

	// RVA: 0x2285454 Offset: 0x2281454 VA: 0x2285454
	private void LateUpdate() { }

	// RVA: 0x228556C Offset: 0x228156C VA: 0x228556C
	public RectTransform get_Shade() { }

	// RVA: 0x2285574 Offset: 0x2281574 VA: 0x2285574
	public KitTopBar AddShade(int siblingIndex = -1) { }

	// RVA: 0x22859D0 Offset: 0x22819D0 VA: 0x22859D0
	private void OnDestroy() { }

	// RVA: 0x22857A8 Offset: 0x22817A8 VA: 0x22857A8
	private static Sprite ShadeSprite() { }

	// RVA: 0x2284730 Offset: 0x2280730 VA: 0x2284730
	private static RectTransform Pill(RectTransform root, string name, float iconX, KitTopBar.PillGeo geo, string iconKey, out TextMeshProUGUI text, out Image icon, Action onClick) { }

	// RVA: 0x2285AF4 Offset: 0x2281AF4 VA: 0x2285AF4
	private void Update() { }

	// RVA: 0x2283510 Offset: 0x227F510 VA: 0x2283510
	public void Refresh() { }

	// RVA: 0x2285EF4 Offset: 0x2281EF4 VA: 0x2285EF4
	public void .ctor() { }

	// RVA: 0x2285F0C Offset: 0x2281F0C VA: 0x2285F0C
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x2285A78 Offset: 0x2281A78 VA: 0x2285A78
	internal static Vector2 <Pill>g__P|50_0(float x, float y, ref KitTopBar.<>c__DisplayClass50_0 ) { }

	[CompilerGenerated]
	// RVA: 0x2285FA4 Offset: 0x2281FA4 VA: 0x2285FA4
	private string <Refresh>b__52_0(long n) { }
}

