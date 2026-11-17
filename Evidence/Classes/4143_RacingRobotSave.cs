// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class RacingRobotSave // TypeDefIndex: 4143
{
	// Fields
	public int CurrentStage; // 0x10
	public float Stage1Spend; // 0x14
	public float Stage2Spend; // 0x18
	public float Stage3Spend; // 0x1C
	public long SessionStartMs; // 0x20
	public long ExpTimeMs; // 0x28
	public List<int> AgentConfigIds; // 0x30
	public List<int> AgentProgresses; // 0x38
	public List<float> AgentOverrideSpeeds; // 0x40
	public bool PayProtectTriggered; // 0x48
	public int PlayerWinStreak; // 0x4C
	public int RobotGroupId; // 0x50

	// Properties
	public bool HasAgentSnapshot { get; }

	// Methods

	// RVA: 0x225FACC Offset: 0x225BACC VA: 0x225FACC
	public bool get_HasAgentSnapshot() { }

	// RVA: 0x225FB34 Offset: 0x225BB34 VA: 0x225FB34
	public void RecordStageSpend(int stage, float spend) { }

	// RVA: 0x225FB7C Offset: 0x225BB7C VA: 0x225FB7C
	public void AdvanceStage() { }

	// RVA: 0x225FB94 Offset: 0x225BB94 VA: 0x225FB94
	public void ResetToStage1() { }

	// RVA: 0x225FBB0 Offset: 0x225BBB0 VA: 0x225FBB0
	public void ClearAgentSnapshot() { }

	// RVA: 0x225FD1C Offset: 0x225BD1C VA: 0x225FD1C
	public void ClearSession() { }

	// RVA: 0x225FD24 Offset: 0x225BD24 VA: 0x225FD24
	public void .ctor() { }
}

