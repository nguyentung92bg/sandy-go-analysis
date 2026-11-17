// Namespace: Coffee.UIExtensions
[DisallowMultipleComponent]
public class UIParticle : MonoBehaviour // TypeDefIndex: 3246
{
	// Fields
	[SerializeField]
	private bool m_IsTrail; // 0x20
	[SerializeField]
	private bool m_IgnoreCanvasScaler; // 0x21
	[SerializeField]
	private bool m_AbsoluteMode; // 0x22
	[SerializeField]
	private Vector3 m_Scale3D; // 0x24
	[SerializeField]
	private List<ParticleSystem> m_Particles; // 0x30
	[SerializeField]
	private int m_MeshSharing; // 0x38
	[SerializeField]
	private int m_GroupId; // 0x3C
	[SerializeField]
	private int m_GroupMaxId; // 0x40
	[SerializeField]
	private int m_PositionMode; // 0x44
	[SerializeField]
	private bool m_AutoScaling; // 0x48
	[SerializeField]
	private int m_AutoScalingMode; // 0x4C
	[SerializeField]
	private bool m_UseCustomView; // 0x50
	[SerializeField]
	private float m_CustomViewSize; // 0x54
	[CompilerGenerated]
	private bool <Prepared>k__BackingField; // 0x58

	// Properties
	public IReadOnlyList<ParticleSystem> Particles { get; }
	public Vector3 Scale3D { get; }
	public bool Prepared { get; set; }

	// Methods

	// RVA: 0x214D048 Offset: 0x2149048 VA: 0x214D048
	private void Start() { }

	// RVA: 0x214D0A0 Offset: 0x21490A0 VA: 0x214D0A0
	public IReadOnlyList<ParticleSystem> get_Particles() { }

	// RVA: 0x214D0A8 Offset: 0x21490A8 VA: 0x214D0A8
	public Vector3 get_Scale3D() { }

	[CompilerGenerated]
	// RVA: 0x214D0B4 Offset: 0x21490B4 VA: 0x214D0B4
	public bool get_Prepared() { }

	[CompilerGenerated]
	// RVA: 0x214D0BC Offset: 0x21490BC VA: 0x214D0BC
	public void set_Prepared(bool value) { }

	// RVA: 0x214D0C4 Offset: 0x21490C4 VA: 0x214D0C4
	public void CollectSystems(List<ParticleSystem> into) { }

	// RVA: 0x214D360 Offset: 0x2149360 VA: 0x214D360
	public void .ctor() { }
}

