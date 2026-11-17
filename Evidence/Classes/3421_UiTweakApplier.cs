// Namespace: Dino.BusSand.App.UI
[DisallowMultipleComponent]
public class UiTweakApplier : MonoBehaviour // TypeDefIndex: 3421
{
	// Fields
	public string Key; // 0x20
	private readonly List<UiTweakApplier.Binding> _bindings; // 0x28
	private int _version; // 0x30

	// Properties
	public IReadOnlyList<UiTweakApplier.Binding> Bindings { get; }

	// Methods

	// RVA: 0x22A3EAC Offset: 0x229FEAC VA: 0x22A3EAC
	public IReadOnlyList<UiTweakApplier.Binding> get_Bindings() { }

	// RVA: 0x22A3EB4 Offset: 0x229FEB4 VA: 0x22A3EB4
	private void LateUpdate() { }

	// RVA: 0x22A3780 Offset: 0x229F780 VA: 0x22A3780
	public void Apply() { }

	// RVA: 0x22A450C Offset: 0x22A050C VA: 0x22A450C
	private RectTransform Resolve(string path) { }

	// RVA: 0x22A3EB8 Offset: 0x229FEB8 VA: 0x22A3EB8
	private void Rebind(UiTweaks tw) { }

	// RVA: 0x22A4598 Offset: 0x22A0598 VA: 0x22A4598
	private static void Write(UiTweakApplier.Binding b, UiTweaks.Entry e) { }

	// RVA: 0x22A4C04 Offset: 0x22A0C04 VA: 0x22A4C04
	private static Vector2 Safe(Vector2 s) { }

	// RVA: 0x22A4C9C Offset: 0x22A0C9C VA: 0x22A4C9C
	public void Adopt(RectTransform rt, UiTweaks.Entry e) { }

	// RVA: 0x22A4EA8 Offset: 0x22A0EA8 VA: 0x22A4EA8
	public void .ctor() { }
}

