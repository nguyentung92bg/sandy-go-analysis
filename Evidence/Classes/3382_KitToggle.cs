// Namespace: Dino.BusSand.App.UI
public class KitToggle : MonoBehaviour // TypeDefIndex: 3382
{
	// Fields
	public const float W = 263;
	public const float H = 108;
	public const float K = 0.885;
	private const float Inset = 16;
	private const float KnobD = 82;
	private const float KnobX = 72.5;
	private RectTransform _onFill; // 0x20
	private RectTransform _offFill; // 0x28
	private RectTransform _knob; // 0x30
	private TextMeshProUGUI _label; // 0x38
	private Func<bool> _get; // 0x40
	private bool _shown; // 0x48
	private bool _hasShown; // 0x49

	// Methods

	// RVA: 0x22870A4 Offset: 0x22830A4 VA: 0x22870A4
	public static KitToggle Build(Transform parent, string name, Vector2 pos, Func<bool> get, Action onClick) { }

	// RVA: 0x22875B8 Offset: 0x22835B8 VA: 0x22875B8
	public void Refresh(bool animate = False) { }

	// RVA: 0x2287838 Offset: 0x2283838 VA: 0x2287838
	private void Apply(bool on, float k) { }

	// RVA: 0x2287D3C Offset: 0x2283D3C VA: 0x2287D3C
	private static void SetAlpha(RectTransform mirror, float a) { }

	// RVA: 0x2287F48 Offset: 0x2283F48 VA: 0x2287F48
	public void .ctor() { }
}

