// Namespace: Dino.BusSand.App.UI
[DisallowMultipleComponent]
public sealed class ScreenCover : MonoBehaviour // TypeDefIndex: 3948
{
	// Fields
	public static bool Enabled; // 0x0
	[CompilerGenerated]
	private static bool <Hiding3D>k__BackingField; // 0x1
	private static readonly List<ScreenCover> s_on; // 0x8
	private static bool s_hooked; // 0x10
	private static Camera s_masked; // 0x18
	private static int s_mask; // 0x20
	private Graphic _graphic; // 0x20
	private UIPanel _panel; // 0x28

	// Properties
	public static bool Hiding3D { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x21FC638 Offset: 0x21F8638 VA: 0x21FC638
	public static bool get_Hiding3D() { }

	[CompilerGenerated]
	// RVA: 0x21FC690 Offset: 0x21F8690 VA: 0x21FC690
	private static void set_Hiding3D(bool value) { }

	// RVA: 0x21FC6F0 Offset: 0x21F86F0 VA: 0x21FC6F0
	private void OnEnable() { }

	// RVA: 0x21FC914 Offset: 0x21F8914 VA: 0x21FC914
	private void OnDisable() { }

	// RVA: 0x21FC994 Offset: 0x21F8994 VA: 0x21FC994
	private bool Covers() { }

	// RVA: 0x21FCBE4 Offset: 0x21F8BE4 VA: 0x21FCBE4
	private static void OnBeginFrame(ScriptableRenderContext ctx, List<Camera> cameras) { }

	// RVA: 0x21FCF08 Offset: 0x21F8F08 VA: 0x21FCF08
	private static void OnEndFrame(ScriptableRenderContext ctx, List<Camera> cameras) { }

	// RVA: 0x21FCFE8 Offset: 0x21F8FE8 VA: 0x21FCFE8
	public void .ctor() { }

	// RVA: 0x21FCFF0 Offset: 0x21F8FF0 VA: 0x21FCFF0
	private static void .cctor() { }
}

