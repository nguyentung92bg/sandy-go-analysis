// Namespace: Dino.BusSand.View
public sealed class Fx : MonoBehaviour // TypeDefIndex: 8420
{
	// Fields
	[CompilerGenerated]
	private static Fx <I>k__BackingField; // 0x0
	private ParticleSystem _ring; // 0x20
	private ParticleSystem _stars; // 0x28
	private ParticleSystem _sparks; // 0x30
	private ParticleSystem _dust; // 0x38
	private ParticleSystem _confetti; // 0x40
	private ParticleSystem _glow; // 0x48
	private ParticleSystem _groundRing; // 0x50
	private float _scale; // 0x58
	private const string StarTex = "vfx_star4";
	private const string RingTex = "vfx_ring";
	private const string WaveTex = "vfx_ring_thin";
	public static readonly Color StarGold; // 0x8
	public static readonly Color StarWhite; // 0x18
	private readonly List<Material> _mats; // 0x60
	[TupleElementNames(new[] { "t", "age", "life", "from" })]
	private readonly List<ValueTuple<TextMeshPro, float, float, Vector3>> _texts; // 0x68

	// Properties
	public static Fx I { get; set; }
	public float Scale { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2396E4C Offset: 0x2392E4C VA: 0x2396E4C
	public static Fx get_I() { }

	[CompilerGenerated]
	// RVA: 0x2396EA4 Offset: 0x2392EA4 VA: 0x2396EA4
	private static void set_I(Fx value) { }

	// RVA: 0x2396F0C Offset: 0x2392F0C VA: 0x2396F0C
	public float get_Scale() { }

	// RVA: 0x2396F14 Offset: 0x2392F14 VA: 0x2396F14
	public static Fx Create(Transform parent, float worldScale) { }

	// RVA: 0x2397F38 Offset: 0x2393F38 VA: 0x2397F38
	private Material Mat(string tex, bool additive, int queue = 0) { }

	// RVA: 0x2398220 Offset: 0x2394220 VA: 0x2398220
	private ParticleSystem MakeSystem(string name, Material mat, float gravity, bool sizeFade, bool colorFade, float rotSpeed = 0, bool stretch = False) { }

	// RVA: 0x2397060 Offset: 0x2393060 VA: 0x2397060
	private void Build() { }

	// RVA: 0x23988C0 Offset: 0x23948C0 VA: 0x23988C0
	private static void Emit(ParticleSystem ps, Vector3 pos, Vector3 vel, float size, Color c, float life, float rot = 0) { }

	// RVA: 0x2398A10 Offset: 0x2394A10 VA: 0x2398A10
	public void Ring(Vector3 pos, Color c, float size, float life = 0.35, Vector3 carry) { }

	// RVA: 0x2398B34 Offset: 0x2394B34 VA: 0x2398B34
	public void Glow(Vector3 pos, Color c, float size, float life = 0.4) { }

	// RVA: 0x2398C44 Offset: 0x2394C44 VA: 0x2398C44
	public void GroundRing(Vector3 pos, Color c, float diameter, float life = 0.45) { }

	// RVA: 0x2392818 Offset: 0x238E818 VA: 0x2392818
	public void Stars(Vector3 pos, int n, float speed = 3, float size = 0.45, Vector3 carry, Nullable<Color> tint) { }

	// RVA: 0x2398D44 Offset: 0x2394D44 VA: 0x2398D44
	public void StarsFlat(Vector3 pos, int n, float speed, float size, Nullable<Color> tint) { }

	// RVA: 0x2393138 Offset: 0x238F138 VA: 0x2393138
	public void Sparks(Vector3 pos, Vector3 dir, int n = 22) { }

	// RVA: 0x2395354 Offset: 0x2391354 VA: 0x2395354
	public void Dust(Vector3 pos, Vector3 drift, int n = 3, float size = 0.5) { }

	// RVA: 0x2399120 Offset: 0x2395120 VA: 0x2399120
	public void Confetti(Vector3 pos, int n, float speed = 7) { }

	// RVA: 0x23993A8 Offset: 0x23953A8 VA: 0x23993A8
	public void Text(Vector3 pos, string text, Color color, float size = 1) { }

	// RVA: 0x239980C Offset: 0x239580C VA: 0x239980C
	private void Update() { }

	// RVA: 0x2399C5C Offset: 0x2395C5C VA: 0x2399C5C
	public void Clear() { }

	// RVA: 0x2399E18 Offset: 0x2395E18 VA: 0x2399E18
	private void OnDestroy() { }

	// RVA: 0x239A07C Offset: 0x239607C VA: 0x239A07C
	public void .ctor() { }

	// RVA: 0x239A160 Offset: 0x2396160 VA: 0x239A160
	private static void .cctor() { }
}

