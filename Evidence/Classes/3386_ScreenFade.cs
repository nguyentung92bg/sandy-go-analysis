// Namespace: Dino.BusSand.App.UI
public class ScreenFade : MonoBehaviour // TypeDefIndex: 3386
{
	// Fields
	public const float InTime = 0.16;
	public const float OutTime = 0.34;
	private static readonly Color Veil; // 0x0
	private static ScreenFade _i; // 0x10
	private Image _veil; // 0x20
	private bool _busy; // 0x28
	private Color _tone; // 0x2C

	// Properties
	public static bool Busy { get; }

	// Methods

	// RVA: 0x2289848 Offset: 0x2285848 VA: 0x2289848
	public static bool get_Busy() { }

	// RVA: 0x2289914 Offset: 0x2285914 VA: 0x2289914
	public static void Run(Action swap, Nullable<Color> veil) { }

	// RVA: 0x2289BEC Offset: 0x2285BEC VA: 0x2289BEC
	private static ScreenFade Create(UIManager ui) { }

	[IteratorStateMachine(typeof(ScreenFade.<Cover>d__11))]
	// RVA: 0x2289E28 Offset: 0x2285E28 VA: 0x2289E28
	private IEnumerator Cover(Action swap) { }

	// RVA: 0x2289ED8 Offset: 0x2285ED8 VA: 0x2289ED8
	private static void Invoke(Action swap) { }

	// RVA: 0x2289F94 Offset: 0x2285F94 VA: 0x2289F94
	private void SetAlpha(float a) { }

	// RVA: 0x2289FC4 Offset: 0x2285FC4 VA: 0x2289FC4
	private void OnDisable() { }

	// RVA: 0x228A05C Offset: 0x228605C VA: 0x228A05C
	public void .ctor() { }

	// RVA: 0x228A0C4 Offset: 0x22860C4 VA: 0x228A0C4
	private static void .cctor() { }
}

