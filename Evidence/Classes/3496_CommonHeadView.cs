// Namespace: Dino.BusSand.App.UI
public class CommonHeadView : MonoBehaviour // TypeDefIndex: 3496
{
	// Fields
	private Image _icon; // 0x20
	private Transform _frameRoot; // 0x28
	private GameObject _defaultFrame; // 0x30
	private GameObject _loadedFrame; // 0x38
	private int _currentFrameId; // 0x40
	private bool _player; // 0x44
	private bool _init; // 0x45

	// Properties
	public int CurrentFrameId { get; }

	// Methods

	// RVA: 0x22CF05C Offset: 0x22CB05C VA: 0x22CF05C
	public int get_CurrentFrameId() { }

	// RVA: 0x22CF064 Offset: 0x22CB064 VA: 0x22CF064
	public static CommonHeadView Of(Transform node) { }

	// RVA: 0x22CF160 Offset: 0x22CB160 VA: 0x22CF160
	private void Setup() { }

	// RVA: 0x22CF3F4 Offset: 0x22CB3F4 VA: 0x22CF3F4
	public void Init(int headId, int frameId = -1) { }

	// RVA: 0x22CF880 Offset: 0x22CB880 VA: 0x22CF880
	public void InitPlayer() { }

	// RVA: 0x22CF96C Offset: 0x22CB96C VA: 0x22CF96C
	private void OnAppearanceChanged(PlayerIdentity.Appearance a) { }

	// RVA: 0x22CF440 Offset: 0x22CB440 VA: 0x22CF440
	public void RefreshHead(int headId) { }

	// RVA: 0x22CFA64 Offset: 0x22CBA64 VA: 0x22CFA64
	public static Sprite HeadSprite(int headId) { }

	// RVA: 0x22CF514 Offset: 0x22CB514 VA: 0x22CF514
	public void LoadFrame(int frameId) { }

	// RVA: 0x22CFB0C Offset: 0x22CBB0C VA: 0x22CFB0C
	private void ClearFrame() { }

	// RVA: 0x22CFBA0 Offset: 0x22CBBA0 VA: 0x22CFBA0
	private void OnDestroy() { }

	// RVA: 0x22CFC4C Offset: 0x22CBC4C VA: 0x22CFC4C
	public void .ctor() { }
}

