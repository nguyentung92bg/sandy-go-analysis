// Namespace: Dino.BusSand.App.UI
public class KitBoosterButton : MonoBehaviour // TypeDefIndex: 3384
{
	// Fields
	private const float Rim = 18;
	private RectTransform _face; // 0x20
	private RectTransform _lockedBg; // 0x28
	private Image _icon; // 0x30
	private Image _lock; // 0x38
	private GameObject _badge; // 0x40
	private GameObject _plus; // 0x48
	private GameObject _free; // 0x50
	private TextMeshProUGUI _count; // 0x58
	private TextMeshProUGUI _level; // 0x60
	private long _lastCount; // 0x68

	// Methods

	// RVA: 0x22880A8 Offset: 0x22840A8 VA: 0x22880A8
	public static KitBoosterButton Build(Transform parent, string name, string iconKey, Vector2 pos, float size = 212) { }

	// RVA: 0x2288AAC Offset: 0x2284AAC VA: 0x2288AAC
	public void Set(KitBoosterButton.State st, long count, int unlockLevel, bool armed) { }

	// RVA: 0x2289838 Offset: 0x2285838 VA: 0x2289838
	public void .ctor() { }
}

