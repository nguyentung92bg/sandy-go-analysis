// Namespace: Dino.GameCommon
public interface IUserProfileService : IGlobalService<IUserProfileService> // TypeDefIndex: 13375
{
	// Properties
	public abstract bool IsReady { get; }
	public abstract int AvatarId { get; }
	public abstract string UserName { get; }
	public abstract int NameMaxLength { get; }
	public abstract IReadOnlyList<UserProfileAvatar> Avatars { get; }
	public abstract bool ShouldShowTutorial { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsReady();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int get_AvatarId();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_UserName();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract int get_NameMaxLength();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract IReadOnlyList<UserProfileAvatar> get_Avatars();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool get_ShouldShowTutorial();

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 6
	public abstract void add_Changed(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public abstract void remove_Changed(Action value);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool IsAvatarUnlocked(int avatarId);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract Sprite GetAvatarSprite(int avatarId);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract bool SetAvatar(int avatarId);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract bool IsUserNameValid(string userName);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract bool SetUserName(string userName);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void MarkTutorialShown();
}

