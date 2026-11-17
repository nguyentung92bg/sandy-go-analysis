// Namespace: Dino.BusSand.View
public sealed class EndSuctionCue // TypeDefIndex: 8419
{
	// Fields
	public const float SlideSeconds = 0.3;
	public const float FadeSeconds = 0.6;
	public static float PeakAlpha; // 0x0
	public static float ThicknessRows; // 0x4
	public static float ShadeAlpha; // 0x8
	public static float ShadeDropRows; // 0xC
	public static float WhooshVolume; // 0x10
	public static float WhooshPitch; // 0x14
	private static readonly Color ShadeColor; // 0x18
	private readonly StageLayout _L; // 0x10
	private readonly GameObject _glow; // 0x18
	private readonly GameObject _shade; // 0x20
	private readonly Material _glowMat; // 0x28
	private readonly Material _shadeMat; // 0x30
	private float _from; // 0x38
	private float _to; // 0x3C
	private float _t; // 0x40
	private static Texture2D s_tex; // 0x28
	private static Mesh s_quad; // 0x30
	private static readonly int ColorId; // 0x38

	// Properties
	public bool Playing { get; }

	// Methods

	// RVA: 0x2395964 Offset: 0x2391964 VA: 0x2395964
	private void .ctor(Transform parent, StageLayout layout, Shader shader) { }

	// RVA: 0x2395D9C Offset: 0x2391D9C VA: 0x2395D9C
	public static EndSuctionCue Create(Transform parent, StageLayout layout) { }

	// RVA: 0x2395EC0 Offset: 0x2391EC0 VA: 0x2395EC0
	public bool get_Playing() { }

	// RVA: 0x2395ED0 Offset: 0x2391ED0 VA: 0x2395ED0
	public void Play(int fromRows, int toRows) { }

	// RVA: 0x23961AC Offset: 0x23921AC VA: 0x23961AC
	public void Tick(float dt) { }

	// RVA: 0x2396374 Offset: 0x2392374 VA: 0x2396374
	public void Stop() { }

	// RVA: 0x2396074 Offset: 0x2392074 VA: 0x2396074
	private void Place(float rows, float a) { }

	// RVA: 0x2396440 Offset: 0x2392440 VA: 0x2396440
	private void Put(Transform t, float rows, float thicknessRows, float liftRows) { }

	// RVA: 0x2395AC4 Offset: 0x2391AC4 VA: 0x2395AC4
	private static Material NewMat(Shader shader, string name, BlendMode dst, int queue) { }

	// RVA: 0x2395C14 Offset: 0x2391C14 VA: 0x2395C14
	private static GameObject NewQuad(string name, Transform parent, Material mat) { }

	// RVA: 0x2396A74 Offset: 0x2392A74 VA: 0x2396A74
	private static Mesh QuadMesh() { }

	// RVA: 0x2396614 Offset: 0x2392614 VA: 0x2396614
	private static Texture2D Tex() { }

	// RVA: 0x2396DBC Offset: 0x2392DBC VA: 0x2396DBC
	private static void .cctor() { }
}

